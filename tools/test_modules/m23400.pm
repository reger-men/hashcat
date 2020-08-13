#!/usr/bin/env perl

##
## Author......: See docs/credits.txt
## License.....: MIT
##

use strict;
use warnings;

use Crypt::PBKDF2;
use MIME::Base64 qw (encode_base64 decode_base64);

sub module_constraints { [[0, 256], [0, 256], [-1, -1], [-1, -1], [-1, -1]] }

sub module_generate_hash
{
  my $word = shift;
  my $salt = shift;
  my $iter = shift // 10000; # or 100000 default but probably too high for tests

  my $kdf1 = Crypt::PBKDF2->new
  (
    hasher     => Crypt::PBKDF2->hasher_from_algorithm ('HMACSHA2', 256),
    iterations => $iter,
    output_len => 32
  );

  my $kdf2 = Crypt::PBKDF2->new
  (
    hasher     => Crypt::PBKDF2->hasher_from_algorithm ('HMACSHA2', 256),
    iterations => 1,
    output_len => 32
  );

  my $email = $salt;

  my $digest1 = $kdf1->PBKDF2 ($email, $word);
  my $digest2 = $kdf2->PBKDF2 ($word, $digest1); # position of $word switched !

  my $hash = sprintf ("\$bitwarden\$1*%d*%s*%s", $iter, $email, encode_base64 ($digest2, ""));

  return $hash;
}

sub module_verify_hash
{
  my $line = shift;

  my $idx = index ($line, ':');

  return unless $idx >= 0;

  my $hash = substr ($line, 0, $idx);
  my $word = substr ($line, $idx + 1);

  return unless substr ($hash, 0, 12) eq '$bitwarden$1';

  my ($type, $iter, $salt, $hash_base64) = split ('\*', $hash);

  return unless defined ($type);
  return unless defined ($iter);
  return unless defined ($salt);
  return unless defined ($hash_base64);

  $type = substr ($type, 11);

  return unless ($type eq '1');
  return unless ($iter =~ m/^[0-9]{1,7}$/);
  return unless ($hash_base64 =~ m/^[a-zA-Z0-9+\/=]+$/);

  my $word_packed = pack_if_HEX_notation ($word);

  my $new_hash = module_generate_hash ($word_packed, $salt, $iter);

  return ($new_hash, $word);
}

1;
