
  "  17500 | SHA3-384                                         | Raw Hash",
  "  17600 | SHA3-512                                         | Raw Hash",
  "  17900 | Keccak-384                                       | Raw Hash",
  "  18000 | Keccak-512                                       | Raw Hash",
  "  10100 | SipHash                                          | Raw Hash",
  "   6000 | RIPEMD-160                                       | Raw Hash",
  "   6100 | Whirlpool                                        | Raw Hash",
  "   6900 | GOST R 34.11-94                                  | Raw Hash",
  "  11700 | GOST R 34.11-2012 (Streebog) 256-bit, big-endian | Raw Hash",
  "  11800 | GOST R 34.11-2012 (Streebog) 512-bit, big-endian | Raw Hash",
  "     30 | md5(utf16le($pass).$salt)                        | Raw Hash, Salted and/or Iterated",
  "     40 | md5($salt.utf16le($pass))                        | Raw Hash, Salted and/or Iterated",
  "   3800 | md5($salt.$pass.$salt)                           | Raw Hash, Salted and/or Iterated",
  "   3710 | md5($salt.md5($pass))                            | Raw Hash, Salted and/or Iterated",
  "   4010 | md5($salt.md5($salt.$pass))                      | Raw Hash, Salted and/or Iterated",
  "   4110 | md5($salt.md5($pass.$salt))                      | Raw Hash, Salted and/or Iterated",
  "   2600 | md5(md5($pass))                                  | Raw Hash, Salted and/or Iterated",
  "   3910 | md5(md5($pass).md5($salt))                       | Raw Hash, Salted and/or Iterated",
  "   4300 | md5(strtoupper(md5($pass)))                      | Raw Hash, Salted and/or Iterated",
  "   4400 | md5(sha1($pass))                                 | Raw Hash, Salted and/or Iterated",
  "    120 | sha1($salt.$pass)                                | Raw Hash, Salted and/or Iterated",
  "    130 | sha1(utf16le($pass).$salt)                       | Raw Hash, Salted and/or Iterated",
  "    140 | sha1($salt.utf16le($pass))                       | Raw Hash, Salted and/or Iterated",
  "   4500 | sha1(sha1($pass))                                | Raw Hash, Salted and/or Iterated",
  "   4520 | sha1($salt.sha1($pass))                          | Raw Hash, Salted and/or Iterated",
  "   4700 | sha1(md5($pass))                                 | Raw Hash, Salted and/or Iterated",
  "   4900 | sha1($salt.$pass.$salt)                          | Raw Hash, Salted and/or Iterated",
  "  14400 | sha1(CX)                                         | Raw Hash, Salted and/or Iterated",
  "   1410 | sha256($pass.$salt)                              | Raw Hash, Salted and/or Iterated",
  "   1420 | sha256($salt.$pass)                              | Raw Hash, Salted and/or Iterated",
  "   1430 | sha256(utf16le($pass).$salt)                     | Raw Hash, Salted and/or Iterated",
  "   1440 | sha256($salt.utf16le($pass))                     | Raw Hash, Salted and/or Iterated",
  "   1710 | sha512($pass.$salt)                              | Raw Hash, Salted and/or Iterated",
  "   1720 | sha512($salt.$pass)                              | Raw Hash, Salted and/or Iterated",
  "   1730 | sha512(utf16le($pass).$salt)                     | Raw Hash, Salted and/or Iterated",
  "   1740 | sha512($salt.utf16le($pass))                     | Raw Hash, Salted and/or Iterated",
  "     50 | HMAC-MD5 (key = $pass)                           | Raw Hash, Authenticated",
  "     60 | HMAC-MD5 (key = $salt)                           | Raw Hash, Authenticated",
  "    150 | HMAC-SHA1 (key = $pass)                          | Raw Hash, Authenticated",
  "    160 | HMAC-SHA1 (key = $salt)                          | Raw Hash, Authenticated",
  "   1450 | HMAC-SHA256 (key = $pass)                        | Raw Hash, Authenticated",
  "   1460 | HMAC-SHA256 (key = $salt)                        | Raw Hash, Authenticated",
  "   1750 | HMAC-SHA512 (key = $pass)                        | Raw Hash, Authenticated",
  "   1760 | HMAC-SHA512 (key = $salt)                        | Raw Hash, Authenticated",
  "  11750 | HMAC-Streebog-256 (key = $pass), big-endian      | Raw Hash, Authenticated",
  "  11760 | HMAC-Streebog-256 (key = $salt), big-endian      | Raw Hash, Authenticated",
  "  11850 | HMAC-Streebog-512 (key = $pass), big-endian      | Raw Hash, Authenticated",
  "  11860 | HMAC-Streebog-512 (key = $salt), big-endian      | Raw Hash, Authenticated",
  "  14900 | Skip32 (PT = $salt, key = $pass)                 | Raw Cipher, Known-Plaintext attack",
  "  15400 | ChaCha20                                         | Raw Cipher, Known-Plaintext attack",
  "   8900 | scrypt                                           | Generic KDF",
  "  11900 | PBKDF2-HMAC-MD5                                  | Generic KDF",
  "  10900 | PBKDF2-HMAC-SHA256                               | Generic KDF",
  "  12100 | PBKDF2-HMAC-SHA512                               | Generic KDF",
  "     23 | Skype                                            | Network Protocols",
  "   4800 | iSCSI CHAP authentication, MD5(CHAP)             | Network Protocols",
  "   5300 | IKE-PSK MD5                                      | Network Protocols",
  "   5400 | IKE-PSK SHA1                                     | Network Protocols",
  "   7300 | IPMI2 RAKP HMAC-SHA1                             | Network Protocols",
  "   8300 | DNSSEC (NSEC3)                                   | Network Protocols",
  "  10200 | CRAM-MD5                                         | Network Protocols",
  "  11100 | PostgreSQL CRAM (MD5)                            | Network Protocols",
  "  11200 | MySQL CRAM (SHA1)                                | Network Protocols",
  "  11400 | SIP digest authentication (MD5)                  | Network Protocols",
  "  13100 | Kerberos 5 TGS-REP etype 23                      | Network Protocols",
  "  16100 | TACACS+                                          | Network Protocols",
  "  16500 | JWT (JSON Web Token)                             | Network Protocols",
  "  18200 | Kerberos 5 AS-REP etype 23                       | Network Protocols",
  "    121 | SMF (Simple Machines Forum) > v1.1               | Forums, CMS, E-Commerce, Frameworks",
  "   2611 | vBulletin < v3.8.5                               | Forums, CMS, E-Commerce, Frameworks",
  "   2711 | vBulletin >= v3.8.5                              | Forums, CMS, E-Commerce, Frameworks",
  "   2811 | MyBB 1.2+                                        | Forums, CMS, E-Commerce, Frameworks",
  "   2811 | IPB2+ (Invision Power Board)                     | Forums, CMS, E-Commerce, Frameworks",
  "   8400 | WBB3 (Woltlab Burning Board)                     | Forums, CMS, E-Commerce, Frameworks",
  "   2612 | PHPS                                             | Forums, CMS, E-Commerce, Frameworks",
  "   7900 | Drupal7                                          | Forums, CMS, E-Commerce, Frameworks",
  "     21 | osCommerce                                       | Forums, CMS, E-Commerce, Frameworks",
  "     21 | xt:Commerce                                      | Forums, CMS, E-Commerce, Frameworks",
  "  11000 | PrestaShop                                       | Forums, CMS, E-Commerce, Frameworks",
  "    124 | Django (SHA-1)                                   | Forums, CMS, E-Commerce, Frameworks",
  "  10000 | Django (PBKDF2-SHA256)                           | Forums, CMS, E-Commerce, Frameworks",
  "  16000 | Tripcode                                         | Forums, CMS, E-Commerce, Frameworks",
  "   3711 | MediaWiki B type                                 | Forums, CMS, E-Commerce, Frameworks",
  "  13900 | OpenCart                                         | Forums, CMS, E-Commerce, Frameworks",
  "   4521 | Redmine                                          | Forums, CMS, E-Commerce, Frameworks",
  "   4522 | PunBB                                            | Forums, CMS, E-Commerce, Frameworks",
  "  12001 | Atlassian (PBKDF2-HMAC-SHA1)                     | Forums, CMS, E-Commerce, Frameworks",
  "     12 | PostgreSQL                                       | Database Server",
  "    131 | MSSQL (2000)                                     | Database Server",
  "    132 | MSSQL (2005)                                     | Database Server",
  "   1731 | MSSQL (2012, 2014)                               | Database Server",
  "   3100 | Oracle H: Type (Oracle 7+)                       | Database Server",
  "    112 | Oracle S: Type (Oracle 11+)                      | Database Server",
  "  12300 | Oracle T: Type (Oracle 12+)                      | Database Server",
  "   8000 | Sybase ASE                                       | Database Server",
  "    141 | Episerver 6.x < .NET 4                           | HTTP, SMTP, LDAP Server",
  "   1441 | Episerver 6.x >= .NET 4                          | HTTP, SMTP, LDAP Server",
  "   1600 | Apache $apr1$ MD5, md5apr1, MD5 (APR)            | HTTP, SMTP, LDAP Server",
  "  12600 | ColdFusion 10+                                   | HTTP, SMTP, LDAP Server",
  "   1421 | hMailServer                                      | HTTP, SMTP, LDAP Server",
  "    111 | nsldaps, SSHA-1(Base64), Netscape LDAP SSHA      | HTTP, SMTP, LDAP Server",
  "   1411 | SSHA-256(Base64), LDAP {SSHA256}                 | HTTP, SMTP, LDAP Server",
  "   1711 | SSHA-512(Base64), LDAP {SSHA512}                 | HTTP, SMTP, LDAP Server",
  "  16400 | CRAM-MD5 Dovecot                                 | HTTP, SMTP, LDAP Server",
  "  15000 | FileZilla Server >= 0.9.55                       | FTP Server",
  "  11500 | CRC32                                            | Checksums",
  "   1100 | Domain Cached Credentials (DCC), MS Cache        | Operating Systems",
  "   2100 | Domain Cached Credentials 2 (DCC2), MS Cache 2   | Operating Systems",
  "  15300 | DPAPI masterkey file v1                          | Operating Systems",
  "  15900 | DPAPI masterkey file v2                          | Operating Systems",
  "  12800 | MS-AzureSync  PBKDF2-HMAC-SHA256                 | Operating Systems",
  "  12400 | BSDi Crypt, Extended DES                         | Operating Systems",
  "   7400 | sha256crypt $5$, SHA256 (Unix)                   | Operating Systems",
  "    122 | macOS v10.4, MacOS v10.5, MacOS v10.6            | Operating Systems",
  "   1722 | macOS v10.7                                      | Operating Systems",
  "   7100 | macOS v10.8+ (PBKDF2-SHA512)                     | Operating Systems",
  "   6300 | AIX {smd5}                                       | Operating Systems",
  "   6700 | AIX {ssha1}                                      | Operating Systems",
  "   6400 | AIX {ssha256}                                    | Operating Systems",
  "   6500 | AIX {ssha512}                                    | Operating Systems",
  "   2410 | Cisco-ASA MD5                                    | Operating Systems",
  "    500 | Cisco-IOS $1$ (MD5)                              | Operating Systems",
  "   5700 | Cisco-IOS type 4 (SHA256)                        | Operating Systems",
  "   9200 | Cisco-IOS $8$ (PBKDF2-SHA256)                    | Operating Systems",
  "   9300 | Cisco-IOS $9$ (scrypt)                           | Operating Systems",
  "     22 | Juniper NetScreen/SSG (ScreenOS)                 | Operating Systems",
  "  15100 | Juniper/NetBSD sha1crypt                         | Operating Systems",
  "   7000 | FortiGate (FortiOS)                              | Operating Systems",
  "   5800 | Samsung Android Password/PIN                     | Operating Systems",
  "  13800 | Windows Phone 8+ PIN/password                    | Operating Systems",
  "   8100 | Citrix NetScaler                                 | Operating Systems",
  "   8500 | RACF                                             | Operating Systems",
  "   7200 | GRUB 2                                           | Operating Systems",
  "   9900 | Radmin2                                          | Operating Systems",
  "    125 | ArubaOS                                          | Operating Systems",
  "   7700 | SAP CODVN B (BCODE)                              | Enterprise Application Software (EAS)",
  "   7701 | SAP CODVN B (BCODE) via RFC_READ_TABLE           | Enterprise Application Software (EAS)",
  "   7800 | SAP CODVN F/G (PASSCODE)                         | Enterprise Application Software (EAS)",
  "   7801 | SAP CODVN F/G (PASSCODE) via RFC_READ_TABLE      | Enterprise Application Software (EAS)",
  "  10300 | SAP CODVN H (PWDSALTEDHASH) iSSHA-1              | Enterprise Application Software (EAS)",
  "   8600 | Lotus Notes/Domino 5                             | Enterprise Application Software (EAS)",
  "   8700 | Lotus Notes/Domino 6                             | Enterprise Application Software (EAS)",
  "   9100 | Lotus Notes/Domino 8                             | Enterprise Application Software (EAS)",
  "    133 | PeopleSoft                                       | Enterprise Application Software (EAS)",
  "  13500 | PeopleSoft PS_TOKEN                              | Enterprise Application Software (EAS)",
  "  11600 | 7-Zip                                            | Archives",
  "  12500 | RAR3-hp                                          | Archives",
  "  13000 | RAR5                                             | Archives",
  "  13200 | AxCrypt                                          | Archives",
  "  13300 | AxCrypt in-memory SHA1                           | Archives",
  "  13600 | WinZip                                           | Archives",
  "  14700 | iTunes backup < 10.0                             | Backup",
  "  14800 | iTunes backup >= 10.0                            | Backup",
  "   62XY | TrueCrypt                                        | Full-Disk Encryption (FDE)",
  "     X  | 1 = PBKDF2-HMAC-RIPEMD160                        | Full-Disk Encryption (FDE)",
  "     X  | 2 = PBKDF2-HMAC-SHA512                           | Full-Disk Encryption (FDE)",
  "     X  | 3 = PBKDF2-HMAC-Whirlpool                        | Full-Disk Encryption (FDE)",
  "     X  | 4 = PBKDF2-HMAC-RIPEMD160 + boot-mode            | Full-Disk Encryption (FDE)",
  "      Y | 1 = XTS  512 bit pure AES                        | Full-Disk Encryption (FDE)",
  "      Y | 1 = XTS  512 bit pure Serpent                    | Full-Disk Encryption (FDE)",
  "      Y | 1 = XTS  512 bit pure Twofish                    | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit pure AES                        | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit pure Serpent                    | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit pure Twofish                    | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit cascaded AES-Twofish            | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit cascaded Serpent-AES            | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit cascaded Twofish-Serpent        | Full-Disk Encryption (FDE)",
  "      Y | 3 = XTS 1536 bit all                             | Full-Disk Encryption (FDE)",
  "   8800 | Android FDE <= 4.3                               | Full-Disk Encryption (FDE)",
  "  12900 | Android FDE (Samsung DEK)                        | Full-Disk Encryption (FDE)",
  "  12200 | eCryptfs                                         | Full-Disk Encryption (FDE)",
  "  137XY | VeraCrypt                                        | Full-Disk Encryption (FDE)",
  "     X  | 1 = PBKDF2-HMAC-RIPEMD160                        | Full-Disk Encryption (FDE)",
  "     X  | 2 = PBKDF2-HMAC-SHA512                           | Full-Disk Encryption (FDE)",
  "     X  | 3 = PBKDF2-HMAC-Whirlpool                        | Full-Disk Encryption (FDE)",
  "     X  | 4 = PBKDF2-HMAC-RIPEMD160 + boot-mode            | Full-Disk Encryption (FDE)",
  "     X  | 5 = PBKDF2-HMAC-SHA256                           | Full-Disk Encryption (FDE)",
  "     X  | 6 = PBKDF2-HMAC-SHA256 + boot-mode               | Full-Disk Encryption (FDE)",
  "     X  | 7 = PBKDF2-HMAC-Streebog-512                     | Full-Disk Encryption (FDE)",
  "      Y | 1 = XTS  512 bit pure AES                        | Full-Disk Encryption (FDE)",
  "      Y | 1 = XTS  512 bit pure Serpent                    | Full-Disk Encryption (FDE)",
  "      Y | 1 = XTS  512 bit pure Twofish                    | Full-Disk Encryption (FDE)",
  "      Y | 1 = XTS  512 bit pure Camellia                   | Full-Disk Encryption (FDE)",
  "      Y | 1 = XTS  512 bit pure Kuznyechik                 | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit pure AES                        | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit pure Serpent                    | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit pure Twofish                    | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit pure Camellia                   | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit pure Kuznyechik                 | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit cascaded AES-Twofish            | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit cascaded Camellia-Kuznyechik    | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit cascaded Camellia-Serpent       | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit cascaded Kuznyechik-AES         | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit cascaded Kuznyechik-Twofish     | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit cascaded Serpent-AES            | Full-Disk Encryption (FDE)",
  "      Y | 2 = XTS 1024 bit cascaded Twofish-Serpent        | Full-Disk Encryption (FDE)",
  "      Y | 3 = XTS 1536 bit all                             | Full-Disk Encryption (FDE)",
  "  14600 | LUKS                                             | Full-Disk Encryption (FDE)",
  "  16700 | FileVault 2                                      | Full-Disk Encryption (FDE)",
  "  18300 | Apple File System (APFS)                         | Full-Disk Encryption (FDE)",
  "   9700 | MS Office <= 2003 $0/$1, MD5 + RC4               | Documents",
  "   9710 | MS Office <= 2003 $0/$1, MD5 + RC4, collider #1  | Documents",
  "   9720 | MS Office <= 2003 $0/$1, MD5 + RC4, collider #2  | Documents",
  "   9800 | MS Office <= 2003 $3/$4, SHA1 + RC4              | Documents",
  "   9810 | MS Office <= 2003 $3, SHA1 + RC4, collider #1    | Documents",
  "   9820 | MS Office <= 2003 $3, SHA1 + RC4, collider #2    | Documents",
  "   9400 | MS Office 2007                                   | Documents",
  "   9500 | MS Office 2010                                   | Documents",
  "   9600 | MS Office 2013                                   | Documents",
  "  10400 | PDF 1.1 - 1.3 (Acrobat 2 - 4)                    | Documents",
  "  10410 | PDF 1.1 - 1.3 (Acrobat 2 - 4), collider #1       | Documents",
  "  10420 | PDF 1.1 - 1.3 (Acrobat 2 - 4), collider #2       | Documents",
  "  10500 | PDF 1.4 - 1.6 (Acrobat 5 - 8)                    | Documents",
  "  10600 | PDF 1.7 Level 3 (Acrobat 9)                      | Documents",
  "  10700 | PDF 1.7 Level 8 (Acrobat 10 - 11)                | Documents",
  "  16200 | Apple Secure Notes                               | Documents",
  "   9000 | Password Safe v2                                 | Password Managers",
  "   5200 | Password Safe v3                                 | Password Managers",
  "   6800 | LastPass + LastPass sniffed                      | Password Managers",
  "   6600 | 1Password, agilekeychain                         | Password Managers",
  "   8200 | 1Password, cloudkeychain                         | Password Managers",
  "  11300 | Bitcoin/Litecoin wallet.dat                      | Password Managers",
  "  12700 | Blockchain, My Wallet                            | Password Managers",
  "  15200 | Blockchain, My Wallet, V2                        | Password Managers",
  "  16600 | Electrum Wallet (Salt-Type 1-2)                  | Password Managers",
  "  13400 | KeePass 1 (AES/Twofish) and KeePass 2 (AES)      | Password Managers",
  "  15500 | JKS Java Key Store Private Keys (SHA1)           | Password Managers",
  "  15600 | Ethereum Wallet, PBKDF2-HMAC-SHA256              | Password Managers",
  "  15700 | Ethereum Wallet, SCRYPT                          | Password Managers",
  "  16300 | Ethereum Pre-Sale Wallet, PBKDF2-HMAC-SHA256     | Password Managers",
  "  16900 | Ansible Vault                                    | Password Managers",
  "  18100 | TOTP (HMAC-SHA1)                                 | One-Time Passwords",
  "  99999 | Plaintext                                        | Plaintext",


static const char *ST_PASS_HASHCAT_PLAIN = "hashcat";
static const char *ST_PASS_HASHCAT_EXCL  = "hashcat!";
static const char *ST_PASS_HASHCAT_EXCL3 = "hashcat!!!";
static const char *ST_PASS_HASHCAT_ONE   = "hashcat1";
static const char *ST_PASS_HASHCAT_ONET3 = "hashcat1hashcat1hashcat1";

static const char *ST_PASS_BIN_09710     = "\x91\xb2\xe0\x62\xb9";
static const char *ST_PASS_BIN_09810     = "\xb8\xf6\x36\x19\xca";
static const char *ST_PASS_BIN_10410     = "\x6a\x8a\xed\xcc\xb7";


/**
 * Missing self-test hashes:
 *
 * ST_HASH_08900  the self-test can't work because the scrypt settings is part of the code at compile-time
 * ST_HASH_1374x  missing example hash
 * ST_HASH_1376x  missing example hash
 * ST_HASH_14600  multi-hash-mode algorithm, unlikely to match self-test hash settings
 * ST_HASH_15700  the self-test is disabled, because the original scrypt settings would create a too long startup time
 * ST_HASH_16500  multi-hash-mode algorithm, unlikely to match self-test hash settings
 */

static const char *ST_HASH_00012 = "93a8cf6a7d43e3b5bcd2dc6abb3e02c6:27032153220030464358344758762807";
static const char *ST_HASH_00021 = "e983672a03adcc9767b24584338eb378:00";
static const char *ST_HASH_00022 = "nKjiFErqK7TPcZdFZsZMNWPtw4Pv8n:26506173";
static const char *ST_HASH_00023 = "d04d74780881019341915c70d914db29:0675841";
static const char *ST_HASH_00030 = "1169500a7dfece72e1f7fc9c9410867a:687430237020";
static const char *ST_HASH_00040 = "23a8a90599fc5d0d15265d4d3b565f6e:58802707";
static const char *ST_HASH_00050 = "e28e4e37e972a945e464b5226053bac0:40";
static const char *ST_HASH_00060 = "7f51edecfa6fb401a0b5e63d33fc8c0e:84143";
static const char *ST_HASH_00111 = "{SSHA}FLzWcQqyle6Mo7NvrwXCMAmRzXQxNjYxMTYzNw==";
static const char *ST_HASH_00112 = "63ec5f6113843f5d229e2d49c068d983a9670d02:57677783202322766743";
static const char *ST_HASH_00120 = "a428863972744b16afef28e0087fc094b44bb7b1:465727565";
static const char *ST_HASH_00121 = "d27c0a627a45db487af161fcc3a4005d88eb8a1f:25551135";
static const char *ST_HASH_00122 = "86586886b8bd3c379d2e176243a7225e6aae969d293fe9a9";
static const char *ST_HASH_00124 = "sha1$fe76b$02d5916550edf7fc8c886f044887f4b1abf9b013";
static const char *ST_HASH_00125 = "83377286015bcebb857b23b94331e2b316b6ecbe9fbf26c4fc";
static const char *ST_HASH_00130 = "0a9e4591f539a77cd3af67bae207d250bc86bac6:23240710432";
static const char *ST_HASH_00131 = "0x0100778883860000000000000000000000000000000000000000eda3604e067a06f2732b05b9cb90b8a710996939";
static const char *ST_HASH_00132 = "0x010045083578bf13a6e30ca29c40e540813772754d54a5ffd325";
static const char *ST_HASH_00133 = "uXmFVrdBvv293L9kDR3VnRmx4ZM=";
static const char *ST_HASH_00140 = "03b83421e2aa6d872d1f8dee001dc226ef01722b:818436";
static const char *ST_HASH_00141 = "$episerver$*0*MjEwNA==*ZUgAmuaYTqAvisD0A427FA3oaWU";
static const char *ST_HASH_00150 = "02b256705348a28b1d6c0f063907979f7e0c82f8:10323";
static const char *ST_HASH_00160 = "8d7cb4d4a27a438059bb83a34d1e6cc439669168:2134817";
static const char *ST_HASH_01100 = "c896b3c6963e03c86ade3a38370bbb09:54161084332";
static const char *ST_HASH_01410 = "5bb7456f43e3610363f68ad6de82b8b96f3fc9ad24e9d1f1f8d8bd89638db7c0:12480864321";
static const char *ST_HASH_01411 = "{SSHA256}L5Wk0zPY2lmoR5pH20zngq37KkxFwgTquEhx95rxfVk3Ng==";
static const char *ST_HASH_01420 = "816d1ded1d621873595048912ea3405d9d42afd3b57665d9f5a2db4d89720854:36176620";
static const char *ST_HASH_01421 = "8fe7ca27a17adc337cd892b1d959b4e487b8f0ef09e32214f44fb1b07e461c532e9ec3";
static const char *ST_HASH_01430 = "b2d0db162e30dfef1bfd606689a3acbc213c47ef3fd11968394191886075249d:32002";
static const char *ST_HASH_01440 = "84ebe1bc3d59919a8c4f9337d66bd163661586c828b24b8067a27a6dc4228c64:05662";
static const char *ST_HASH_01441 = "$episerver$*1*NDg1NTIz*8BFCg/YJBAuZs/wjbH3OWKe69BLr5Lao26ybpnD48Zk";
static const char *ST_HASH_01450 = "b435ffbacea34d5eb0dbc4d69a92f0152f2cf4cd364d34c2ece322ca22d8b334:21217";
static const char *ST_HASH_01460 = "8b9472281c36c3a693703de0e0f1ffab8fc0ecdd3bc5ead04c76dd74ef431e49:70108387805";
static const char *ST_HASH_01600 = "$apr1$62722340$zGjeAwVP2KwY6MtumUI1N/";
static const char *ST_HASH_01710 = "3f749c84d00c6f94a6651b5c195c71dacae08f3cea6fed760232856cef701f7bf60d7f38a587f69f159d4e4cbe00435aeb9c8c0a4927b252d76a744e16e87e91:388026522082";
static const char *ST_HASH_01711 = "{SSHA512}Bz8w5q6qEtB1Nnc8b1jfTvTXVTwohWag33oghQGOtLChnkZTw/cuJaHQlLJEI3AWKZGCRyLA6Phujdxo+is7AjA2MDcyNjY1Mg==";
static const char *ST_HASH_01720 = "efc5dd0e4145970917abdc311e1d4e23ba0afa9426d960cb28569f4d585cb031af5c936f57fbcb0a08368a1b302573cf582100d40bd7c632f3d8aecd1a1a8eb1:812";
static const char *ST_HASH_01730 = "eefb67342d62a5d8ac84e8ae89d0f157f03749bd0427c80637003a4760feefdb36cbe11ba35ab2015b3691e2e83803178c986aa85f29e6f56938b469a31ccd7a:6576666";
static const char *ST_HASH_01740 = "ce77bf8a8ca9b9cf0ed67edde58ed7fafd4542ce1378fc8bd87b05656ebf92e5711517d5930c18de93a71990e77e1037423e5b64c2f293be7d859d7b6921622e:1512373";
static const char *ST_HASH_01722 = "07543781b07e905f6f947db8ae305c248b9e12f509b41097e852e2f450e824790e677ea7397b8a9a552b1c19ecf6a6e1dd3844fa5ee5db23976962859676f7d2fb85ca94";
static const char *ST_HASH_01731 = "0x02003788006711b2e74e7d8cb4be96b1d187c962c5591a02d5a6ae81b3a4a094b26b7877958b26733e45016d929a756ed30d0a5ee65d3ce1970f9b7bf946e705c595f07625b1";
static const char *ST_HASH_01750 = "138c00f17a1a0363f274817c91118f019aff09f937bfdaea844280a0c0e7811267cc4735d967d8640eed1218268c1c4a76fec8f7aa551491b353829f3a654270:885142";
static const char *ST_HASH_01760 = "7d02921299935179d509e6dd4f3d0f2944e3451ea9de3af16baead6a7297e5653577d2473a0fff743d9fe78a89bd49296114319989dc7e7870fc7f62bc96accb:114";
static const char *ST_HASH_02100 = "$DCC2$10240#6848#e2829c8af2232fa53797e2f0e35e4626";
static const char *ST_HASH_02410 = "YjDBNr.A0AN7DA8s:4684";
static const char *ST_HASH_02600 = "a936af92b0ae20b1ff6c3347a72e5fbe";
static const char *ST_HASH_02611 = "28f9975808ae2bdc5847b1cda26033ea:308";
static const char *ST_HASH_02612 = "$PHPS$30353031383437363132$f02b0b2f25e5754edb04522c346ba243";
static const char *ST_HASH_02711 = "0844fbb2fdeda31884a7a45ec2010bb6:324410183853308365427804872426";
static const char *ST_HASH_02811 = "022f7e02b3314f7d0968f73c00ba759f:67588";
static const char *ST_HASH_03100 = "792FCB0AE31D8489:7284616727";
static const char *ST_HASH_03710 = "a3aa0ae2b4a102a9974cdf40edeabee0:242812778074";
static const char *ST_HASH_03711 = "$B$2152187716$8c8b39c3602b194eeeb6cac78eea2742";
static const char *ST_HASH_03800 = "78274b1105fb8a7c415b43ffe35ec4a9:6";
static const char *ST_HASH_03910 = "d8281daba5da597503d12fe31808b4a7:283053";
static const char *ST_HASH_04010 = "82422514daaa8253be0aa43f3e263af5:7530326651137";
static const char *ST_HASH_04110 = "45b1005214e2d9472a7ad681578b2438:64268771004";
static const char *ST_HASH_04300 = "b8c385461bb9f9d733d3af832cf60b27";
static const char *ST_HASH_04400 = "288496df99b33f8f75a7ce4837d1b480";
static const char *ST_HASH_04500 = "3db9184f5da4e463832b086211af8d2314919951";
static const char *ST_HASH_04520 = "59b80a295392eedb677ca377ad7bf3487928df96:136472340404074825440760227553028141804855170538";
static const char *ST_HASH_04521 = "c18e826af2a78c7b9b7261452613233417e65817:28246535720688452723483475753333";
static const char *ST_HASH_04522 = "9038129c474caa3f0de56f38db84033d0fe1d4b8:365563602032";
static const char *ST_HASH_04700 = "92d85978d884eb1d99a51652b1139c8279fa8663";
static const char *ST_HASH_04800 = "aa4aaa1d52319525023c06a4873f4c51:35343534373533343633383832343736:dc";
static const char *ST_HASH_04900 = "75d280ca9a0c2ee18729603104ead576d9ca6285:347070";
static const char *ST_HASH_05200 = "50575333e4e2a590a5e5c8269f57ec04a8a1c0c03da55b311c51236dab8c6b96b0afca02000800005eaeee20c6cc10d5caa6522b3ca545c41d9133d630ca08f467b7aae8a2bbef51aa2df968d10b9c4cfb17a182c0add7acb8c153794f51337e12f472f451d10e6dcac664ed760606aabdbb6b794a80d6ce2a330100c76de0ff961a45cca21576b893d826c52f272b97cdf48aca6fbe6c74b039f81c61b7d632fb6fddd9f96162ab1effd69a4598a331e855e38792e5365272d4791bf991d248e1585a9ad20ea3d77b5d2ef9a711ef90a70ec6991cb578f1b8bdaa9efa7b0039e9ea96f777491713047bdd99fa1d78f06f23406a66046b387d3034e46b1f84129bba853cc18fa49f107dc0290547258d30566a4b1b363ff4c1c16cb2f5f400059833d4b651bfa508200cbdc7a75fc57ef90eb1d90b0deea8505753332d454f46505753332d454f466236710e2e2477878e738b60d0aa2834a96b01e97764fe980243a06ad16939d1";
static const char *ST_HASH_05300 = "50503326cac6e4bd892b8257805b5a59a285f464ad3f63dc01bd0335f8341ef52e00be0b8cb205422a3788f021e4e6e8ccbe34784bc85abe42f62545bac64888426a2f1264fa28cf384ff00b14cfa5eff562dda4fad2a31fd7a6715218cff959916deed856feea5bee2e773241c5fbebf202958f0ce0c432955e0f1f6d1259da:688a7bfa8d5819630a970ed6d27018021a15fbb3e2fdcc36ce9b563d8ff95f510c4b3236c014d1cde9c2f1a999b121bc3ab1bc8049c8ac1e8c167a84f53c867492723eb01ab4b38074b38f4297d6fea8f44e01ea828fce33c433430938b1551f60673ce8088e7d2f41e3b49315344046fefee1e3860064331417562761db3ba4:c66606d691eaade4:8bdc88a2cdb4a1cf:c3b13137fae9f66684d98709939e5c3454ee31a98c80a1c76427d805b5dea866eff045515e8fb42dd259b9448caba9d937f4b3b75ec1b092a92232b4c8c1e70a60a52076e907f887b731d0f66e19e09b535238169c74c04a4b393f9b815c54eef4558cd8a22c9018bb4f24ee6db0e32979f9a353361cdba948f9027551ee40b1c96ba81c28aa3e1a0fac105dc469efa83f6d3ee281b945c6fa8b4677bac26dda:53f757c5b08afad6:aa02d9289e1702e5d7ed1e4ebf35ab31c2688e00:aab8580015cf545ac0b7291d15a4f2c79e06defd:944a0df3939f3bd281c9d05fbc0e3d30";
static const char *ST_HASH_05400 = "266b43c54636c062b6696b71f24b30999c98bd4c3ba57e2de56a7ae50bb17ebcbca1abcd33e9ad466d4df6e6f2a407600f0c5a983f79d493b0a3694080a81143d4bac7a8b7b008ae5364a04688b3cfae44824885ca96ade1e395936567ecad519b502c3a786c72847f79c67b777feb8ba4f747303eb985709e92b3a5634f6513:60f861c6209c9c996ac0dcb49d6f6809faaaf0e8eb8041fe603a918170a801e94ab8ab10c5906d850f4282c0668029fa69dbc8576f7d86633dc2b21f0d79aa06342b02a4d2732841cd3266b84a7eb49ac489b307ba55562a17741142bac7712025f0a8cad59b11f19d9b756ce998176fd6b063df556957b257b3645549a138c2:f4dd079ed2b60e77:f1f8da1f38f76923:fd862602549f6949b33870f186d96cb8926a19d78442c02af823460740be719eba41a79388aeefb072e1ec7cb46b2f0b72e21fb30bd3a6568d2b041af7f9dc0c9cce27ed577e5aabb9ab6c405f1c4b189adbee8c9fb6abf4788b63a3ae05a02c192187b9d7246efe5e46db9b01bf8f4be05f7599ae52bf137743e41d90dceb85bd6ae07397dcc168bbc904adfebb08e6bc67e653edeee97a7e4ab9dab5e63fec:56e3f0d49ea70514:e754055008febe970053d795d26bfe609f42eda8:0c3283efd6396e7a2ecb008e1933fccb694a4ac0:8f79167724f4bdb2d76ee5d5e502b665e3445ea6";
static const char *ST_HASH_05700 = "2btjjy78REtmYkkW0csHUbJZOstRXoWdX1mGrmmfeHI";
static const char *ST_HASH_05800 = "3edde1eb9e6679ccbc1ff3c417e8a475a2d2e279:7724368582277760";
static const char *ST_HASH_06000 = "012cb9b334ec1aeb71a9c8ce85586082467f7eb6";
static const char *ST_HASH_06100 = "7ca8eaaaa15eaa4c038b4c47b9313e92da827c06940e69947f85bc0fbef3eb8fd254da220ad9e208b6b28f6bb9be31dd760f1fdb26112d83f87d96b416a4d258";
static const char *ST_HASH_06211 = "87914967f14737a67fb460f27b8aeb81de2b41bf2740b3dd78784e02763951daa47c7ca235e75c22ec8d959d6b67f7eedefad61e6a0d038079d3721a8e7215e415671e8c7b3dbed6453a114e6db89a52be9a9c1698a9c698f1e37f80d7afaf0efba82b6e5f5df32bd289b95343c6775e2c7f025ef1d8bfae84042a92546e15b635b5fade3aef6ee52a7a5ab018d33ea98bc115dfc62af606187fbab8cbda6e8417402c722ca8c2b07e6ca6a33bf94b2ce2a819a9f8cfaa5af70e3af6e5350d3a306f036f13ff5ba97d5728d5f6413b482c74f528211ae77b6c169215c5487d5a3ce23736b16996b86c71b12d120df28ef322f5143d9a258d0ae7aaa8c193a6dcb5bf18e3c57b5474d24b843f8dd4e83a74109396ddb4f0c50d3657a7eacc8828568e51202de48cd2dfe5acbe3d8840ade1ce44b716d5c0008f2b21b9981353cb12b8af2592a5ab744ae83623349f551acf371c81f86d17a8422654989f078179b2386e2aa8375853a1802cd8bc5d41ce45795f78b80e69fcfa3d14cf9127c3a33fa2dc76ad73960fb7bce15dd489e0b6eca7beed3733887cd5e6f3939a015d4d449185060b2f3bbad46e46d417b8f0830e91edd5ebc17cd5a99316792a36afd83fa1edc55da25518c8e7ff61e201976fa2c5fc9969e05cbee0dce7a0ef876b7340bbe8937c9d9c8248f0e0eae705fe7e1d2da48902f4f3e27d2cf532b7021e18";
static const char *ST_HASH_06212 = "d6e1644acd373e6fdb8ccaaeab0c400d22eaa0b02e2a6649e065ad50f91e2f81fc5e1600d1cdf3b4ee72a7326a9a28d336ec65adf2d54661e1a609dd9941279fd64a9c513dfb0192734fc1e1014cdd0a399e89a0860c4077463c18609f5218254edd998adb11a02271723d1aa094550df385dd8e080cb42ed1349f69c0a6bad4b37e6dab1effbe0095471a8d640679422fe1533a21f10cb6d15e5ee8cde78e677acf3d09d008e9fbf57f09c1c57f19e51ff54631e0e2adc2ee2832425c1ec718d96a17df7e55aceffb7b23a1872f32795d4491c739e21b01e19a1b7dfcb22709c9d9302154462664a668ea635664df65804bf680ff07026d6f5b225762a3a270df832d47e7feb6277a228454a3ba9b5bbade23ecaec0eaf31ad1dbac31754c970a212bd44c9278bc6076f096a2eed602e04a70c6f7fa94ef4e75299692e5dcc6f1a7e6032b9b765e9e61faeed3f9efacc0a15b1817e74d48ec11a13d15811c7e2c4d12f36d35a04131d02f14184fc15bc20e79115dc7c980b681a19a225964469787df481b68a8f722f2bd3115dbbcb3c8ac1b07d742f78f30635dea29dfb1db83e89fc85a30b0379fc8aa69a4ea94c99052685d38c9559a1246284cdc32c5110eb8c6741352cd42e09e6389d4765c58aa84d51867cf86fba69d29eac1cd7fac2f36603d2fb2af146c5d4c2bedb4f6c6d0f387f0a8d635e33384df60f8d2415b";
static const char *ST_HASH_06213 = "3916e924d246e5ceb17b140211fff57b67150b3dee53fa475261d465b0ee3e56ee820e6ba3958d84c61508f028b2a112e9005877784e07deddcf310d01ba81710b620533790456d20d17c8fda84f9d93bbfe41509b931a417b82d68ed9b0bc9641b79a5bf8f71bcdbba979dfb7566a5b8ccc221f80722c1ce7ec81be4a8c880b1b057e681c187504eabf4eea32f7b81383defd4616618a99852d1678a6520883c8f3564e6dcf874150a060b9a44748d97f95b223b089ac847e31fb5a2db3656d7b57decff65e2c5c9af5bdece7a1845caa9df805fc1f7e56bf545d854beec27a9640bf1697c195e5f95b82c20d76c5a56ff4283219caa5a618e8caace9d0fcde0df6ee6e043ccbc78fd06a602cc638f7ae4675063b840ee08ffa9e143553bffd20126fa30f95e013aabf103f12c3ceeb284c80dc335fe2e78580d6ddfa80511aba9db7c93838cae0db40b9dbeccbf9d160032d334a9c35156721c746b51131baf6855fdfc1edee3099b8e4abc619e1c60e3ce68615e1eb42bd8d338046f7c854a60defe395e0d7168786a3035c9735cd42433dd0c46dcf8b5cb2c28905df80476561e55d6310b25f74d78b651ccd3484332c59a6ad490e29ea267db5ce4a47c9dcde39f420ba0755ea7e5583a3a562925acaa125d5056795b98135825232aa543a460137cc84235b85dd44d65e01e6eb1ade1b970f3ffe2b9762f5a7f261037e";
static const char *ST_HASH_06221 = "5ebff6b4050aaa3374f9946166a9c4134dd3ec0df1176da2fb103909d20e8b3c9b95cbbd6d1a7ad05411a1443ad6254e059e924d78bab6a0463e71cf7c3109b7ef4e837bf6d7a548dd8333c451b59d1132098f44c6ff19c6cb921b1de3bd0aa675e0478a05f90204d46a5d6ff598bfa40370ac8795928a6d2e0f1347696e3cfa329738170fe54298981d84f40c63d1a338c5db62679338e849124a28a79a8e505bb89a4673f0457b2737a00b908116310281b5b2eb66c6fda5599196b313d51ef26201335d715c18f6b128454a5601671e619bdcce8e54acb47d498c4161614a05063bff5497a4a3d99bff1fce2a163727af2fe9ae7512461b9dcebf3a4f1031d6235d8ce09b734294d0cedc04eafc6295f212b1b080e7b9745580d0dd18e99cfd95afef982762d5aabeaa2d3a928dcf36322cc06b07fd719c88e0b9a2625a94a77502d4bd40a85ba138cbd0cf9561aa395dc552801f68cce16e5484a672aa5b78665dc531ab1e3e728185929dc443b7f4c8a5cb687c6589bb3f4ddc2a8639d959b839b0813d50e7711b761622c3693a92e540e4f932c6c89bf4e1bff1d69151848c3d01b2f6aba52b58e5b393f6cd58ff0d2e040b1205b042b5a28d5b12cb0cc95fa32f1bcdebd4c82d889a5d87c45dcfd34e80b19bf7be35696e0fa0cbd9338b314de24c1ee7bbc0a3b6824f86af2aa5d127d21444985ff566e921431938f6";
static const char *ST_HASH_06222 = "9f207bec0eded18a1b2e324d4f05d2f33f0bd1aeb43db65d33242fa48ac960fad4c14d04c553e06ad47e7e394d16e0a6544d35fb0b2415bd060bc5f537e42a58b1681e991e2ec0b5773f6e8e5766e5fcc7335b19dd068d1f20260085ecda8eba366ff1521997c5654630ef09ba421b871a3dc66aa0dd5eba8a3bc7052398a7ad779506d86cbf687e76cd9dc50969e222820d2f905c0550995a9c068725bb6c8b04358c965ab77221fdfd829e57ce54cac6e2fa62db15043d720b72fa8962dd718a0b42c34577af9cb4a5ed04c1ae17b7af470c0d8b77987dc9e2d2593a52458c4acb83b628b1488371de85f78a2e25aeaebc18d20a8c3007d08949e93b80087707afd1fe4e07a0afee4244e5270f768e234b86852aa1556c53ffc0d6f60661369a484d55d063119e71e70af1ec775908466cac7b12bc22e1a9525c2bfa9f83f7901c8e0a1d56387ef65040b750656b0b75791738b5b7e453f24167eae56c057c94e1e4cf1a0d08894225f11b45bc31827cad1dfe62e148549385953aa16a0410dba231aace3a7b9fd9b1c2b930f01193377b59736d8a8959ca5b449655f79a4dbec0da566083f90caa2490b01a10c0a86dd4aaa719bdc1e4233db17217f03509cc20dab7246730e3f964944990690b6dcc84936e1dd487bd154ceefe58a838a0488cc93b854a112ea67f6802d2f409915e648ee5cf5fdc3c12e41acbfab7caa9";
static const char *ST_HASH_06223 = "721a7f40d2b88de8e11f1a203b04ffa97a1f5671623c6783f984cc7c55e04665f95a7f3fd52f402898aaaed68d048cc4c4fabf81c26832b589687dad082f3e4e0f23c7caba28118f21a4cbb8f32b25914ff4022e7c4c8cdd45411801c7c6bde4033badbdcb82f96c77b42025d13fa71415b3278138100ea58ee4476c81ce66f78e89c59ac22cf454684ea7e8c3900374662f23c9491891b60ed7ce8231a7ac5710ee87b51a3f7bd9566a60dc6e7e701c41f3810d7977314b321e8194349909f2ca458a976851d854eaeb934c8df2b5e063d416d3d7c464e28173a0bbba88ec75cf8fe68f21067739b2473bd804fd710de1e4d3ae9451b374edcfd8e3cd613b23aeae272e0923007482dac26a7532ab09af8aad57cd7f1c451bc260cc912d5830cb0d5332f792519e009ed5450171434e5f0f2ba9e003676933a86d83c766419fac98a7ee232eeb593d1686528fab576d5f393d82f9602bcd65975153df205b6d1bc50dacad2ea5bb184696f978efd2b1c1656bf87e03a28a536c48320c430d407ff6c2fc6e7d4ae7b115e79fd0a88df08eca4743178c7c216f35035596a90b0f0fe9c173c7d0e3d76c33a8fce1f5b9b37674bd12e93fb714c9cbba6768c101b5db8f8fd137144453f00dccc7b66911a0a8d87b198807f30be6619400331c5746d481df7ad47a1f867c07f7b8cd296a0c5e03a121c1a7a60b4f768bea49799d2f";
static const char *ST_HASH_06231 = "cf53d4153414b63285e701e52c2d99e148c6ccc4508132f82cb41862d0a0ac9ea16274285ac261c339c1508eec9fea54c33e382458662913678f2a88a84959a678e238973985ec670d50252677430587ee28b72bfa5edfb2f79c40b734ba8a54a3662642a6ab067e75f41154688ad4adb5d6decd891462dd537188195a51e06fa5baf22b69d0f472cfeeae77ab9a90091731863af1d8b5b380da179fa7d5227ef031732b1ae06e0fe34c0b28b7a64eac34e5a08e09d7001394b3afc804ac69bf819cdd2d383fe96a721f7c683628da8e529d84bdaa68d702573d8f7ef26f75d1bd5c91efa88cb33b1e9c006b87981c55ed3b8063ab7068f8e99b128bc56ea3e883efa55d6f340b2681e50405d91f5f6d76cdbeac404944164d329d3ee01311de0bc6547310f126b5a4c0e9fb74825f91faefa60b7ac828819d4544c1872ff5041e61d5cf093553f427358b2181046376d7b876e1bccf0774d5d251b7c922c214bb5c70c715165d028e1dca73e7adeca3396d77f6e597a10dd4c58f37fdbbdc1d04cd8890ba4c5025776a88a349bb925add13193becf1ca10fe32536db0c0b06a1ef799fb692e304b3716ca5a8a80859c4012ca3e06701b46b5a32f4d10e285a0cdaf6c24e0d98139e7f306e52503c9b503aa28f1fbbb236284907068074fcb3e267e3c4aab2bd3b79b24a7a08106bb55850fa2bb8e2f6d9919a6743cb822c164";
static const char *ST_HASH_06232 = "e9e503972b72dee996b0bfced2df003a54b42399e3586520cf1f69475ba32aff564e40e604a505af95ce15220f558ae815e94ce4953882a8299ee3fffb12e9bd62bf8e2c41c0a8337ce20d45715440cc83e394200d351c5b04be5b70fa11b8467320a091a1d703c88cc7b26fd114795c04a973b3266ba97f55d4b4e4771bb1b4a6aabc9d57e03f0ae7c8a77dfc3d37078efba45031e7d63bb514726e2f2dc6da8cce167a17e36b32c326a5bcaa2c4b445f6e10e1f899a9adcc2a698769f900b7909f7aec52fc9862d75286ffda67933f9c52e5c681d590ad0329b85f8db0f6bb6daa3b2d55b62c65da37e3e7fcb99954e0abe20c39724e8fb2c7f839ec67d35f151dfd8c4dd4bc8dc4393fab291efa08cc0099277d219a0ba4c6272af3684d8043ed3f502b98e196dc7aa0291627613179199976f28eff08649acf70aa0c0dc5896ed13eb18ea28fdd6c460a9c7cfedeab5ac80a3c195226cfca094a7590fa2ae5ed2133ba09b5466b2049b6291f8dcf345e5718a4c0ef3f9c8d8e07d0e5dddd07452b533fbf243ef063fb6d26759ae725d8ca430f8cf17b86665d23bdff1c9dbdfe601b88e87cb7c89f23abc4a8bb1f0b7375cc29b1d81c950ffe92e16e2080e1d6270bbb3ba753322d2b623caed87213e552c33e699d4010f0f61df2b7f460d7cd82e70a711388f1c0b591d424259d3de8b3628daf62c6c5b71864eb0e7d31";
static const char *ST_HASH_06233 = "de7d6725cc4c910a7e96307df69d41335e64d17b4425ca5bf1730f27820f92df9f20f3e855d8566eb5255927153f987348789666c8e563e366a09e68a8126b11c25ac817b2706dde5cec3946e64332b21b41b928985c1a637559ead5b4fecac74ff0d625ef6d8be93dea3eaca05394f23ee9e079d3504a77b4c0b22d3cfcafa9c670966bfa3a5f30539250d97267a9e56b5a1437b1fd2ce58f4ab78b52ba61d01c28d7a6b726d92c8819711c70f820690cf2b9bbef75f196ba87fb5f72a29e213096a8be3b6e6d0ff3dc22563dc9e7d95be68ad169c233289fccfdc2f5528c658cb178b4e78d54e96cb452859b01dd756ca0245bdd586fb450e84988071428c80af0a6dc5f16dea8094da3acb51ac5d2a710414256b2423e0333584437ea9a65a07f06bd241103a478d137e9a274a78a19d3ca121f1bc10e4c9e5fc277d23107db1fb447f71ba0f92b20e3ead77cffaca25f772182705a75e500d9aab3996bfda042f4bdfe35a3a477e355c76a711ad0f64848d6144073ce6ec4152c87973fc3e69626523463812061c51f51fc08487e8a4dbae1ca7965c11f222c607688b3384c5c29d4fe91d14d2cc940a6a9d94486d1823261928d88f56fe00e206d7a31734de0217afd38afa3d2cf3499c2dcff13332a369c4b1f39867f6dfc83ec32d19b931b082f07acac7e70bdd537e8432245c11662d89ec3cc97e582de5d2cc6bde7";
static const char *ST_HASH_06241 = "2b5da9924119fde5270f712ba3c3e4974460416e8465f222149499908c2fca0a4753b581f26625d11c4d3f49bdeb1c95bc3e17629d7e19ffb66175e5feab90a4fd670194f95d578266f3f54e61b82dc00efc2bb4438e19c3f6d7a92825a7625d88ec6286ab4e1761749edc83dad4340fd167544f09913fd6b03775013ff232fc4dad6f726ef82ad4bd1c5227a7796d7db35a912beeda5b0cdd798bc34d3ac24403c87dc672a983687dd64f920c991840a56105a6311797eed9976014909700366420673f6455242c71151ac75903a353538ec24b4feb967e2b46886395cf3e934e83a6a58ef2c0180273a0c33ba2bd870b1d84afb03d5558dc17bc7fb586404ad9a7e506ed859540110c6ad73f0f1d2be47829bc666e1838ec3f1dc1f610206241ce07fbf2542ecef9348b37aa460815794ca582709697cbf0c90c3dae4cb9dd97b29d3c7d82bd8d0c81d708e74c7007468c6c55a40fd4f803a4f5a75818d7da0d1ef333b8622e7de516fa62a6fa2b8d6d5d23653dfcedffec771456ee204e5c85ee88defbe195462fbe8ce0e2a5a455dab66478b877ec37dfa66f19ab5201c56cd707ba7bee1b10360965d3868c1fdf91dda124b1b0994fee75848083d19369735905bd2864b496c6e35ecf96f6dd4728570a45746bcf8d7d0ec0b9b0b112b28fdc53efcfa7d0558c132cd683a742d62b34304d9f991029c8aedc3d8767da8c";
static const char *ST_HASH_06242 = "debcc3e74a7b2acb4c7eaa4ac86fd6431da1d9579f4f76f0b31f07b3d36e65099daca9e4ae569114b3cb6e64d707b6206a2ab6b31ab0c17b356da3719d0e2fa4058f0349763970855d4c83b02a967bb2969f1b6f3e4fdbce37c6df203efbe87bfdb5ffd8fe376e9ad61862a8f659ef0db39e06ed34c4f80aa856df2219ac6a37ebb0244445db7e412b773f4e28846c5e65129cd4f4ce76979c083f08a7c4e2be30469b8363eaf8579baa870cdcb2bdca6b60e64559cb0def242576b80722bf36eb6d94640d2937b49edf9c9af67f0172f27319448425f86831c35ae35e764b9e69fcc47a42ba7a565d682366023291b1b4cbcd1b7ba6fba75c214e5849a9ba26197f7f010f01301dcbffaa7311f2ab32c2810470d3fe873334ca578adbfd04c5a39cbd53b09755e4d868dbf8a44d76cc91031f4710b8a985c70738b443572b4745ed10e6120852870b0fdb258f0a804d679eec85b5290235c9c526165b961f17ff0fe32d9f597c8f2ab9b84f3d22fef71fec67987e687590de6ab11b33f1b06f23c38ead94c3de419061b6568612c27517b0a3395e401a2c6058fc5f41f0e084e8f2157b6486624314b1f341f74cfdec9deaed7abf89ccf97b47441493e5086f1351f42a5c0929f6431753baadcd2fb347b8835d08250743bb45aaf1c6bb30eed98e911a273074b7e8ebad2174b527b1b84e1961967bf358711346482d9db1c7";
static const char *ST_HASH_06243 = "5e6628907291b0b74a4f43a23fb0693acb71c4379c3a3cc0eafbab40036bbdadfede179e04484aca0f5b6ecf7c7e8abe61d6836be6590838b8f9027da93ba77d076b9a557c958159c5dcddfb70823b7e324bd99b40a8f39410f6afd279df3493b58b9ffce41b65f3afd2fc467f4553a946b85e6ffc74b91c9c38c689d98419339a84d3c6d116274e34482d546407006ee04af03b594998127b2a9716ca4278b1f3050d015af10a9bb11db0465373f3a786c148bb20473377d8e97264b1c4d7ec4179829ce929573b26e5987b59da8591e2dc8e3934830dd0b5ac521c8637e9bb31e4bc084d53bc6a8dc6875e857a4c8c32a577eed3c6cea5beef514160982be2c7d7e2f4d65efa3f4a0e11ac1860ff3160e7cd968e18019abfd0395080a9f8e860c627fc32c63c8b7ef46b203c63cf0f12c05ea65b1f83a5f1fc6ad6cc200a9527151c2b8016a38f1e87be9c960088eaaa98a01d9db8cdacaae26c446a846042a6c0248b666eea7a1be44dc3fc35ce100c3a3eb377e898deb097cfba9246685d7ec8527cdc5e1983c154169178e3d86cd4017606ccc42d25cbdea0aca2b1ac422372cfbb1ad2b7d465449a2c1fbbae35c8e7fdaadd683a7dc991b76aaba08b8706916924407392a2aef458c2e833290dc1ff116f3f49f918e6a133b60728ac7c464e4f3521784cf32866be32877534bb014312c4301d1740781221a5e8758ea4";
static const char *ST_HASH_06300 = "{smd5}17800721$WkGka7tXcrfpUQS6WOQyw/";
static const char *ST_HASH_06400 = "{ssha256}06$2715084824104660$1s/s4RZWEcvZ5VuWPXWGUfwSoG07eVSVce8F6ANJ.g4";
static const char *ST_HASH_06500 = "{ssha512}06$4653718755856803$O04nVHL7iU9Jguy/B3Yow.veBM52irn.038Y/Ln6AMy/BG8wbU6ozSP8/W9KDZPUbhdsbl1lf8px.vKJS1S/..";
static const char *ST_HASH_06600 = "1000:d61a54f1efdfcf57:000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000afdb51c887d14df6200bbde872aabfd9e12a1f163eed40e6b3ec33ba394c47e9";
static const char *ST_HASH_06700 = "{ssha1}06$5586485655847243$V5f1Ff1y4dr7AWeVSSdv6N52..Y";
static const char *ST_HASH_06800 = "82dbb8ccc9c7ead8c38a92a6b5740f94:500:pmix@trash-mail.com";
static const char *ST_HASH_06900 = "df226c2c6dcb1d995c0299a33a084b201544293c31fc3d279530121d36bbcea9";
static const char *ST_HASH_07000 = "AK1FCIhM0IUIQVFJgcDFwLCMi7GppdwtRzMyDpFOFxdpH8=";
static const char *ST_HASH_07100 = "$ml$1024$2484380731132131624506271467162123576077004878124365203837706482$89a3a979ee186c0c837ca4551f32e951e6564c7ac6798aa35baf4427fbf6bd1d630642c12cfd5c236c7b0104782237db95e895f7c0e372cd81d58f0448daf958";
static const char *ST_HASH_07200 = "grub.pbkdf2.sha512.1024.03510507805003756325721848020561235456073188241051876082416068104377357018503082587026352628170170411053726157658716047762755750.aac26b18c2b0c44bcf56514d46aabd52eea097d9c95122722087829982e9dd957b2b641cb1e015d4df16a84d0571e96cf6d3de6361431bdeed4ddb0940f2425b";
static const char *ST_HASH_07300 = "3437343735333336383831353232323433383333303236303337333338363232303135383237333638363532373231343030313131333838323734373138363632343133333335353030353633373533333133313530363533303738343334313330303630343633333237373037383537333630303233303830303437323838333237313438363238343434383831363634323431333430383735323038:f4b376e25868751fc0264f573ff1fe50b65ce5a2";
static const char *ST_HASH_07400 = "$5$7777657035274252$XftMj84MW.New1/ViLY5V4CM4Y7EBvfETaZsCW9vcJ8";
static const char *ST_HASH_07700 = "027642760180$77EC38630C08DF8D";
static const char *ST_HASH_07701 = "027642760180$77EC386300000000";
static const char *ST_HASH_07800 = "604020408266$32837BA7B97672BA4E5AC74767A4E6E1AE802651";
static const char *ST_HASH_07801 = "604020408266$32837BA7B97672BA4E5A00000000000000000000";
static const char *ST_HASH_07900 = "$S$C20340258nzjDWpoQthrdNTR02f0pmev0K/5/Nx80WSkOQcPEQRh";
static const char *ST_HASH_08000 = "0xc0071808773188715731b69bd4e310b4129913aaf657356c5bdf3c46f249ed42477b5c74af6eaac4d15a";
static const char *ST_HASH_08100 = "1130725275da09ca13254957f2314a639818d44c37ef6d558";
static const char *ST_HASH_08200 = "9b6933f4a1f65baf02737545efc8c1caee4c7a5a82ce3ab637bcc19b0b51f5c5:30b952120ca9a190ac673a5e12a358e4:40000:e29b48a8cfd216701a8ced536038d0d49cf58dd25686e02d7ba3aa0463cc369062045db9e95653ac176e2192732b49073d481c26f29e1c611c84aaba93e553a6c51d1a9f7cfce0d01e099fb19f6a412bacd8034a333f7165fda1cc89df845e019c03ac9a09bc77b26c49524ade5c5a812230322f014f058b3bb790319e4a788f917aa164e56e78941f74e9c08921144e14be9b60da1a7321a0d178a1b8c1dcf83ffcadcb1599039049650577780d6913ee924e6529401e7a65b7d71c169a107e502dbd13b6b01c58e0483afb61b926313fa4273e685dd4890218bb797fab038c6a24df90883c7acd2358908edc1f7d95ef498757a3e0659aaaf6981c744ab69254267127fc806cf3cd1ced99ab455ece06479c91c892769af5db0c0f7a70dd83e4341bf86d085bbdc6a7e195ab08fc26";
static const char *ST_HASH_08300 = "pi6a89u8tca930h8mvolklmesefc5gmn:.fnmlbsik.net:35537886:1";
static const char *ST_HASH_08400 = "7f8d1951fe48ae3266980c2979c141f60e4415e5:5037864764153886517871426607441768004150";
static const char *ST_HASH_08500 = "$racf$*8481*6095E8FCA59F8E3E";
static const char *ST_HASH_08600 = "3dd2e1e5ac03e230243d58b8c5ada076";
static const char *ST_HASH_08700 = "(GDJ0nDZI8l8RJzlRbemg)";
static const char *ST_HASH_08800 = "$fde$16$ca56e82e7b5a9c2fc1e3b5a7d671c2f9$16$7c124af19ac913be0fc137b75a34b20d$eac806ae7277c8d48243d52a8644fa57a817317bd3457f94dca727964cbc27c88296954f289597a9de3314a4e9d9f28dce70cf9ce3e1c3c0c6fc041687a0ad3cb333d4449bc9da8fcc7d5f85948a7ac3bc6d34f505e9d0d91da4396e35840bde3465ad11c5086c89ee6db68d65e47a2e5413f272caa01e02224e5ff3dc3bed3953a702e85e964e562e62f5c97a2df6c47547bfb5aeeb329ff8f9c9666724d399043fe970c8b282b45e93d008333f3b4edd5eb147bd023ed18ac1f9f75a6cd33444b507694c64e1e98a964b48c0a77276e9930250d01801813c235169a7b1952891c63ce0d462abc688bd96c0337174695a957858b4c9fd277d04abe8a0c2c5def4b352ba29410f8dbec91bcb2ca2b8faf26d44f02340b3373bc94e7487ce014e6adfbf7edfdd2057225f8aeb324c9d1be877c6ae4211ae387e07bf2a056984d2ed2815149b3e9cf9fbfae852f7dd5906c2b86e7910c0d7755ef5bcc39f0e135bf546c839693dc4af3e50b8382c7c8c754d4ee218fa85d70ee0a5707a9f827209a7ddb6c2fb9431a61c9775112cc88aa2a34f97c2f53dfce082aa0758917269a5fc30049ceab67d3efd721fee021ffca979f839b4f052e27f5c382c0dd5c02fd39fbc9b26e04bf9e051d1923eff9a7cde3244902bb8538b1b9f11631def5aad7c21d2113bcdc989b771ff6bf220f94354034dd417510117b55a669e969fc3bc6c5dcd4741b8313bf7d999dc94d4949f27eec0cd06f906c17a80d09f583a5dd601854832673b78d125a2c5ad0352932be7b93c611fee8c6049670442d8c532674f3d21d45d3d009211d2a9e6568252ac4682982172cb43e7c6b05e85851787ad90e25b77cce3f7968d455f92653a1d3790bc50e5f6e1f743ac47275ffa8e81bbe832a8d7d78d5d5a7c73f95703aebb355849ae566492093bd9cb51070f39c69bb4e22b99cc0e60e96d048385bb69f1c44a3b79547fbc19a873a632f43f05fa2d8a6f9155e59d153e2851b739c42444018b8c4e09a93be43570834667d0b5a5d2a53b1572dab3e750b3f9e641e303559bace06612fbd451a5e822201442828e79168c567a85d8c024cd8ce32bf650105b1af98cc5428675f4f4bbede37a0ef98d1533a8a6dcb27d87a2b799f18706f4677edaa0411becac4c591ede83993aedba660d1dd67f6c4a5c141ad3e6e0c77730cb0ecbf4f4bd8ef6067e05ca3bc563d9e1554a893fea0050bdd1733c883f533f87eac39cceee0ccf817fc1f19bcfdd13e9f241b89bfb149b509e9a0747658438536b6705514cc6d6bb3c64c903e4710435d8bebc35297d1ebbdff8074b203f37d1910d8b4637e4d3dab997f4aa378a7a67c79e698a11e83d0d7e759d0e7969c4f5408168b282fe28d3279ec1d4cc6f85a0f8e5d01f21c7508a69773c44167ff8d467d0801f9ec54f9ee2496d4e7e470214abc1ca11355bb18cd23273aac6b05b47f9e301b42b137a2455758c24e2716dcd2e55bbeb780f592e664e7392bf6eccb80959f24c8800816c84f2575e82e1f3559c33a5be7a3a0c843c2989f486b113d5eeada007caf6b5a0f6d71e2f5c09a4def57c7057168051868317a9ec790d570d76a0d21a45ad951c475db5a66101475871147c5a5907ec4e6b14128ed6695bb73c1c97952e96826eeb6003aa13462093e4afc209627241f03b0247e110fbab983640423b7cdf112e01579fed68c80ac7df7449d9d2114b9ae5539c03c2037be45c5f74e7357b25c6a24b7bd503864437147e50d7ac4ccc4bbd0cabecdc6bac60a362285fe450e2c2d0a446578c8880dc957e6e8061e691b83eb8062d1aad476e0c7b25e4d5454f1288686eb525f37fe649637b235b7828366b0219a9c63d6ddbb696dc3585a2ebfbd5f5e4c170d6784ab9993e15142535e194d2bee3dc9477ef8b8e1b07605e0c04f49edf6d42be3a9dabbc592dde78ce8b7dd9684bfcf4ca2f5a44b1872abe18fb6fa67a79390f273a9d12f9269389629456d71b9e7ed3447462269a849ce83e1893f253c832537f850b1acce5b11d2ba6b7c2f99e8e7c8085f390c21f69e1ce4bbf85b4e1ad86c0d6706432766978076f4cada9ca6f28d395d9cc5e74b2a6b46eb9d1de79eeecff7dc97ec2a8d8870e3894e1e4e26ccb98dd2f88c0229bbd3152fa149f0cc132561f";
//static const char *ST_HASH_08900 = "SCRYPT:1024:1:1:Mzg3MjYzNzYwMzE0NDE=:uM7P3Kg2X9En9KZPv3378YablKcuUoQ1mwunXdg3o1M=";
static const char *ST_HASH_09000 = "0a3f352686e5eb5be173e668a4fff5cd5df420927e1da2d5d4052340160637e3e6a5a92841a188ed240e13b919f3d91694bd4c0acba79271e9c08a83ea5ad387cbb74d5884066a1cb5a8caa80d847079168f84823847c631dbe3a834f1bc496acfebac3bff1608bf1c857717f8f428e07b5e2cb12aaeddfa83d7dcb6d840234d08b84f8ca6c6e562af73eea13148f7902bcaf0220d3e36eeeff1d37283dc421483a2791182614ebb";
static const char *ST_HASH_09100 = "(HC34tD3KtDp4oCZWmCJ4qC30mC30mC3KmC30mCcA5ovrMLH9M)";
static const char *ST_HASH_09200 = "$8$84486783037343$pYNyVrtyMalQrZLxRi7ZLQS1Fl.jkYCgASUi5P8JNb2";
static const char *ST_HASH_09300 = "$9$87023684531115$phio0TBQwaO7KZ8toQFyGFyDvyOzidaypRWN0uKX0hU";
static const char *ST_HASH_09400 = "$office$*2007*20*128*16*18410007331073848057180885845227*944c70a5ee6e5ab2a6a86ff54b5f621a*e6650f1f2630c27fd8fc0f5e56e2e01f99784b9f";
static const char *ST_HASH_09500 = "$office$*2010*100000*128*16*34170046140146368675746031258762*de5bc114991bb3a5679a6e24320bdb09*1b72a4ddffba3dcd5395f6a5ff75b126cb832b733c298e86162028ca47a235a9";
static const char *ST_HASH_09600 = "$office$*2013*100000*256*16*67805436882475302087847656644837*0c392d3b9ca889656d1e615c54f9f3c9*612b79e33b96322c3253fc8a0f314463cd76bc4efe1352f7efffca0f374f7e4b";
static const char *ST_HASH_09700 = "$oldoffice$0*55045061647456688860411218030058*e7e24d163fbd743992d4b8892bf3f2f7*493410dbc832557d3fe1870ace8397e2";
static const char *ST_HASH_09710 = "$oldoffice$0*55045061647456688860411218030058*e7e24d163fbd743992d4b8892bf3f2f7*493410dbc832557d3fe1870ace8397e2";
static const char *ST_HASH_09720 = "$oldoffice$0*55045061647456688860411218030058*e7e24d163fbd743992d4b8892bf3f2f7*493410dbc832557d3fe1870ace8397e2:91b2e062b9";
static const char *ST_HASH_09800 = "$oldoffice$3*83328705222323020515404251156288*2855956a165ff6511bc7f4cd77b9e101*941861655e73a09c40f7b1e9dfd0c256ed285acd";
static const char *ST_HASH_09810 = "$oldoffice$3*83328705222323020515404251156288*2855956a165ff6511bc7f4cd77b9e101*941861655e73a09c40f7b1e9dfd0c256ed285acd";
static const char *ST_HASH_09820 = "$oldoffice$3*83328705222323020515404251156288*2855956a165ff6511bc7f4cd77b9e101*941861655e73a09c40f7b1e9dfd0c256ed285acd:b8f63619ca";
static const char *ST_HASH_09900 = "22527bee5c29ce95373c4e0f359f079b";
static const char *ST_HASH_10000 = "pbkdf2_sha256$10000$1135411628$bFYX62rfJobJ07VwrUMXfuffLfj2RDM2G6/BrTrUWkE=";
static const char *ST_HASH_10100 = "583e6f51e52ba296:2:4:47356410265714355482333327356688";
static const char *ST_HASH_10200 = "$cram_md5$MTI=$dXNlciBiOGYwNjk5MTE0YjA1Nzg4OTIyM2RmMDg0ZjgyMjQ2Zg==";
static const char *ST_HASH_10300 = "{x-issha, 1024}BnjXMqcNTwa3BzdnUOf1iAu6dw02NzU4MzE2MTA=";
static const char *ST_HASH_10400 = "$pdf$1*2*40*-1*0*16*01221086741440841668371056103222*32*27c3fecef6d46a78eb61b8b4dbc690f5f8a2912bbb9afc842c12d79481568b74*32*0000000000000000000000000000000000000000000000000000000000000000";
static const char *ST_HASH_10410 = "$pdf$1*2*40*-1*0*16*01221086741440841668371056103222*32*27c3fecef6d46a78eb61b8b4dbc690f5f8a2912bbb9afc842c12d79481568b74*32*0000000000000000000000000000000000000000000000000000000000000000";
static const char *ST_HASH_10420 = "$pdf$1*2*40*-1*0*16*01221086741440841668371056103222*32*27c3fecef6d46a78eb61b8b4dbc690f5f8a2912bbb9afc842c12d79481568b74*32*0000000000000000000000000000000000000000000000000000000000000000:6a8aedccb7";
static const char *ST_HASH_10500 = "$pdf$2*3*128*-4*1*16*62888255846156252261477183186121*32*6879919b1afd520bd3b7dbcc0868a0a500000000000000000000000000000000*32*0000000000000000000000000000000000000000000000000000000000000000";
static const char *ST_HASH_10600 = "$pdf$5*5*256*-1028*1*16*28562274676426582441147358074521*127*a3aab04cff2c536118870976d768f1fdd445754d6b2dd81fba10bb6e742acd7f2856227467642658244114735807452100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000*127*00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000*32*0000000000000000000000000000000000000000000000000000000000000000*32*0000000000000000000000000000000000000000000000000000000000000000";
static const char *ST_HASH_10700 = "$pdf$5*6*256*-1028*1*16*62137640825124540503886403748430*127*0391647179352257f7181236ba371e540c2dbb82fac1c462313eb58b772a54956213764082512454050388640374843000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000*127*00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000*32*0000000000000000000000000000000000000000000000000000000000000000*32*0000000000000000000000000000000000000000000000000000000000000000";
static const char *ST_HASH_10900 = "sha256:1000:NjI3MDM3:vVfavLQL9ZWjg8BUMq6/FB8FtpkIGWYk";
static const char *ST_HASH_11000 = "f22cade043e7214200206dbffca49fd9:27167508161455764247627144160038845437138252877014827848";
static const char *ST_HASH_11100 = "$postgres$postgres*74402844*4e7fabaaf34d780c4a5822d28ee1c83e";
static const char *ST_HASH_11200 = "$mysqlna$2576670568531371763643101056213751754328*5e4be686a3149a12847caa9898247dcc05739601";
static const char *ST_HASH_11300 = "$bitcoin$96$c265931309b4a59307921cf054b4ec6b6e4554369be79802e94e16477645777d948ae1d375191831efc78e5acd1f0443$16$8017214013543185$200460$96$480008005625057442352316337722323437108374245623701184230273883222762730232857701607167815448714$66$014754433300175043011633205413774877455616682000536368706315333388";
static const char *ST_HASH_11400 = "$sip$*72087*1215344588738747***342210558720*737232616*1215344588738747*8867133055*65600****MD5*e9980869221f9d1182c83b0d5e56a7db";
static const char *ST_HASH_11500 = "c762de4a:00000000";
static const char *ST_HASH_11600 = "$7z$0$14$0$$11$33363437353138333138300000000000$2365089182$16$12$d00321533b483f54a523f624a5f63269";
static const char *ST_HASH_11700 = "57e9e50caec93d72e9498c211d6dc4f4d328248b48ecf46ba7abfa874f666e36";
static const char *ST_HASH_11750 = "0f71c7c82700c9094ca95eee3d804cc283b538bec49428a9ef8da7b34effb3ba:08151337";
static const char *ST_HASH_11760 = "d5c6b874338a492ac57ddc6871afc3c70dcfd264185a69d84cf839a07ef92b2c:08151337";
static const char *ST_HASH_11800 = "5d5bdba48c8f89ee6c0a0e11023540424283e84902de08013aeeb626e819950bb32842903593a1d2e8f71897ff7fe72e17ac9ba8ce1d1d2f7e9c4359ea63bdc3";
static const char *ST_HASH_11850 = "be4555415af4a05078dcf260bb3c0a35948135df3dbf93f7c8b80574ceb0d71ea4312127f839b7707bf39ccc932d9e7cb799671183455889e8dde3738dfab5b6:08151337";
static const char *ST_HASH_11860 = "bebf6831b3f9f958acb345a88cb98f30cb0374cff13e6012818487c8dc8d5857f23bca2caed280195ad558b8ce393503e632e901e8d1eb2ccb349a544ac195fd:08151337";
static const char *ST_HASH_11900 = "md5:1000:NjAxMDY4MQ==:a00DtIW9hP9voC85fmEA5uVhgdDx67nSPSm9yADHjkI=";
static const char *ST_HASH_12001 = "{PKCS5S2}NTczNTY0NDY2NjQyNzU1Mx8gGiRGobaZYwumctGHbn2ZOHB8LkwzH+Z1gkWfy1zD";
static const char *ST_HASH_12100 = "sha512:1000:NzY2:DNWohLbdIWIt4Npk9gpTvA==";
static const char *ST_HASH_12200 = "$ecryptfs$0$1$4207883745556753$567daa975114206c";
static const char *ST_HASH_12300 = "8F75FBD166AFDB6D7587DAB89C2F15672AAC031C5B0B5E65C0835FB130555F6FF4E0E5764976755558112246FFF306450C22F6B7746B9E9831ED97B373992F9157436180438417080374881414745255";
static const char *ST_HASH_12400 = "_GW..8841inaTltazRsQ";
static const char *ST_HASH_12500 = "$RAR3$*0*45109af8ab5f297a*adbf6c5385d7a40373e8f77d7b89d317";
static const char *ST_HASH_12600 = "3f3473a071b1fb955544e80c81853ca0f1e4f9ee4ca3bf4d2a8a10b5ef5be1f6:6058321484538505215534207835727413038041028036676832416353152201";
static const char *ST_HASH_12700 = "$blockchain$288$713253722114000682636604801283547365b7a53a802a7388d08eb7e6c32c1efb4a157fe19bca940a753d7f16e8bdaf491aa9cf6cda4035ac48d56bb025aced81455424272f3e0459ec7674df3e82abd7323bc09af4fd0869fd790b3f17f8fe424b8ec81a013e1476a5c5a6a53c4b85a055eecfbc13eccf855f905d3ddc3f0c54015b8cb177401d5942af833f655947bfc12fc00656302f31339187de2a69ab06bc61073933b3a48c9f144177ae4b330968eb919f8a22cec312f734475b28cdfe5c25b43c035bf132887f3241d86b71eb7e1cf517f99305b19c47997a1a1f89df6248749ac7f38ca7c88719cf16d6af2394307dce55600b8858f4789cf1ae8fd362ef565cd9332f32068b3c04c9282553e658b759c2e76ed092d67bd55961ae";
static const char *ST_HASH_12800 = "v1;PPH1_MD4,54188415275183448824,100,55b530f052a9af79a7ba9c466dddcb8b116f8babf6c3873a51a3898fb008e123";
static const char *ST_HASH_12900 = "15738301074686823451275227041071157383010746868234512752270410712bc4be900bf96ccf43c9852fff49b5f5874a9f6e7bf301686fa6d98286de151f15738301074686823451275227041071";
static const char *ST_HASH_13000 = "$rar5$16$38466361001011015181344360681307$15$00000000000000000000000000000000$8$cc7a30583e62676a";
static const char *ST_HASH_13100 = "$krb5tgs$23$*user$realm$test/spn*$b548e10f5694ae018d7ad63c257af7dc$35e8e45658860bc31a859b41a08989265f4ef8afd75652ab4d7a30ef151bf6350d879ae189a8cb769e01fa573c6315232b37e4bcad9105520640a781e5fd85c09615e78267e494f433f067cc6958200a82f70627ce0eebc2ac445729c2a8a0255dc3ede2c4973d2d93ac8c1a56b26444df300cb93045d05ff2326affaa3ae97f5cd866c14b78a459f0933a550e0b6507bf8af27c2391ef69fbdd649dd059a4b9ae2440edd96c82479645ccdb06bae0eead3b7f639178a90cf24d9a";
static const char *ST_HASH_13200 = "$axcrypt$*1*10467*9a7cd609bb262c738d9f0e4977039b94*ecbe0fd05a96fd2099d88a92eebb76c59d6837dfe55b3631";
static const char *ST_HASH_13300 = "$axcrypt_sha1$b89eaac7e61417341b710b727768294d";
static const char *ST_HASH_13400 = "$keepass$*2*24569*0*c40432355cce7348c48053ceea0a28e7d18859c4ea47e3a799c6300861f64b95*265dafcc42e1537ff42e97e1e283c70014133be0fe2d420b4d24c6d57c9d2207*a00e20a852694c15aabb074d61b902fa*48dd553fb96f7996635f2414bfe6a1a8429ef0ffb71a1752abbef31853172c35*a44ae659958ad7fae8c8952cb83f3cf03fec2371ce22a8bf7fac1e687af2f249*1*64*5a26ea376cc5afc955104c334571d30486acbac512a94b75ca82a9e31dd97bf7";
static const char *ST_HASH_13500 = "24eea51b53d02b4c5ff99bcb05a6847fdb2d9308:4f10a0de76e242040c28e9d3dd15c903343489c79765f9118c098c266b9ff505c95bd75bbe406ff3404849eea73930ad17937c0ba6fc3e7bb6d37362941318938b8af96d1292a310b3fd29a67e411ecb10d30247c99183a16951b3859054d4eba9dcd50709c7b21dee836d7ed195cc6b33317aeb557cc56392dc551faa8d5a0fb42212";
static const char *ST_HASH_13600 = "$zip2$*0*3*0*74705614874758221371566185145124*1605*0**75bf9be92e8ab106ff67*$/zip2$";
static const char *ST_HASH_13711 = "531aca1fa6db5118506320114cb11a9f00dade61720533fc12982b28ec71a1a3856ac6ee44b4acc207c8230352208d5f0dc37bf755bd98830279d6befcb6001cdf025f816a0aa1baf3b9b51be00fadb451ffbe9bdfc381115eeceeef778e29a8761f853b7c99e0ea9ec452ba77677f888ea40a39cf65db74d87147690684e273313dea15ff2039797e112006e5f80f2c5baf2c11eb62cb63cfb45883f8885fc7cd5bdb74ef57ec4fe3cec5c2025364582380366169d9419ac41b6f6e878429239e52538f9698e73700b920e7b58c56a4563f5aa512e334ddc56909ac2a0ad4146833f050edd78b7954e6549d0fa2e3b26ed2a769a6c029bfa4de62d49575acce078ef035e366ec13b6092cb205e481bc822f87972bfbe4a3915fad620c4b8645e96bcc468d5804208ae251a560068a09455657f4539dc7e80637fa85fbce058ffee421a98d85b2ae1118d9bd4f24e1e810627cc9893b7166e199dc91fd7f79740530a472df0948f285293478042b28cd2caef086a6ce9d5f656f97adde7d68924ef477fdf2a0c0b107671a1f94b2906d8fb58114836982e4e130e6944df8b42288512376553a1fa6526f9e46dc19b99bb568b30269d9f5d7db2d70a9aa85371b0ac71a6f6f564aaef26a0508c16bf03934973504a5188de37b18a689a020bc37a54d2863879e12902b43bc71c057fa47cbaac1e0100696af365e8226daeba346";
static const char *ST_HASH_13712 = "6efa052302d814f368ebf5274e5718cdfd3c1cd5ce8949b963cf4c376a49a033348905f9f5bef7a5a097e3d2d05b09c35c3cb26836e75b45830345bc287903b1c7e2e20c056ba015769d6f5685b8c6a609acd9927afac24f80613c929c1b582553f6637f2523367df94c9c6c0d6ae6e19430313be3f8ea738da30bd910c567222b0d21a03ebc399192453f8dd64f7ae3eeef84e04b77858e678c9dfd30080fb68a8ec532ee8effa65b674c258df29de6f6f7345ffb0ab324cfea9edbc9e1c0366effe284f92a495a9d7901d1008d83fc39a31a750d5b305683e687c69a9321adbbacf09868078147be41ef5d35805ff0f3d4430042c6390b41483d26d287ee1c00fda37588794ea7223ef08be085924ec34f6de6bbc6f79f73ca4c13e7947851a9f220307f9da45c7370306cca3be0ac8a1e555f2f4b87e6bc39b37f2863061a8a62b9df70dd9c5c2ddf9022606bc38e221b9dc0d7a1c311ff7b36cbd97c2df70e1b5c860b03a1ac0cdb5a89f40b1a155be301dc5a96698743aa01527ac1b676440a3fdd68b462c4d77ccff59afb1f9b8ec8b82e7eb9147334d180243b77930ef87c3b2deb145267e5932223b5fbc76eabdc1e44cffb1b36649409565a521c3112119232f829c6ee9408f1c030eab522ae21083d851fb9df0773ba84ea8a6668044cecb82723e7720eb0fa7c0aa13871015452ad08d8b47d7e7fe0bdfde13b21";
static const char *ST_HASH_13713 = "9c95d40f14ecd2a90f9d942f7869df881ff48bbe3b0fa6ae1d1bea56271844f00a8a40793eec1bc9240578269a1f40d825e6ad3351aa95b8b65b2b3089d8cfed07c2a3187735143f64cf55af972b045ac3fba3f744106ad1afa9bcfd9ae268ba8bca7168bb255507e2c10dff00c386ce442d898ff4db658645f65554b4b2d9d7a327402eadd6974d1dfbf7864680a514950be513dc5eea63d2e2297ff7c2dd256adc8dff9b7568e44c39150e3b2274badf28cecd27a6caed79675bbb66aa98f6a876a455d84b6190c598fa9198921a3e19ca7e00281a9789299db2b4317bc42375cd87461d0e690dea4a447228414d9452947a9a3cc30b727128c796ce1a2dfe8cc6d4a5984373e956ec7eac89412a49cd93ac5ebd1c0fe795413edd250fb7f4b63a04c54b194891a5ff8e05e8aeca0be9cca3b41182ae9634caac4647182f3d872753b8bf47a245eadcabe1e067c2783c15eaf8aa52ce8a27a14a647b6819bab62471e2a21caf69bccff414962308207141c28ac87ecab2e3bdb5d2501f8de8909ab0f585437e62b7bac42b5e157fcc7936c7d0142ca4a497710309074ae1774af8aff5975dc1061088614f36fe43c63f64d37bdee5da0a54955054a070f277176dd0dfdddbd6b61d028342204f9aba4088d90504d2940104bf40365db569b24b419ce261c5c4f15f509b98158490b8867ef6f629c1156919c5543b2639c7a4";
static const char *ST_HASH_13721 = "2be25b279d8d2694e0ad1e5049902e717f1bdf741bbd678bf307d510741b649d78c54dca46fb2c92723afd9a40769b295e66d445ec232af5bddf91481ee41256e56b77839e8bf55265077bab405901218ac7933f74073f1208f1de72aace5da4e07d5f83ca580c0216d36c200b54570a1d58e9d8e5c98a597dec23b74a465aeac572a99af70e1a1e20fd29c7c296099e4eed5b715cb470617ea4f20140b62ec4694af67d9158deac3ce846718e10518875ce8cea0286a487a295979e67159d06e871789bf5535b75c809b340f8627e18679e3dab839a1c9823ea14a07d5cc4251b777dddb408da147c70e7cc788a01c27b0ba4f4700d3248f59fa8217874ae4958ea4518522b44f7191ec19459faef7678422adecd58777487ef54a5305ff2caaa545dcb82f7e7a3eb30bd9f7ebab542d0964a367f9c710cf26bbd704e841d591428da3486db31c57f91c6167bf99e31839363cb93bc60d755031f96f2d2c964e1d85b7eaa104985ef801a21d99352c025d7415d5b2f1aa37dc513345d0ff6a1bca92ad7b8c265f322d04f2992895de32636c9b03318cf7154632d547debc1c5e0c8f8730a045efcf3d16ff956cf803716eee22168bc5a5ab72ddb5087436722cb0f59a5b7b03bc557ffb50e8757d1a5639e2bcddd8060de4ee5535fb614b4fc159c6a39040dcbe83889b9c6fac1c9364a7bea930d916ea23fafa0fde07ef609";
static const char *ST_HASH_13722 = "37e6db10454a5d74c1e75eca0bc8a70e67ac032357e4bd6a4315c0174cf9780f92210dfc0a3e977969f2890828d446aecc317dc40fb3162915998cc703e49257a950a1603342913900052011a7fa85fb0b1fd4489f17237ac1a8bbfd644e871ab95a4019f14b2b938d627646b9958b530dd0739760024ad323d36962b60ba92908e55a876fc392ac2dce6a2410bcdd30a01cba90427f02ccb96e222ab1381266a6f626aa00b0f59e743c1a77433cbb28648f04c91853bdf9b8b29917b2341bf7deb013131ad228ea0c7f9435985318431dae59faff46db3726341b97a956da4ad11766124cd06644c1ba1083b36d3f380f20c272e460b958841fc23be1820ad2e0e6db66eaf4ea171035add0ab543ce8e853e3119ceb9d7f32c0948b81604b81075bcb33efe747fec300a7c68ec383d28d560cccce713c0acf51d74c0db718ba93a9e720b657dda2409adf1ce35aa7e1c0d7ed3df98dd0b6d455a355ce02bda8bea8afc0a8341ac78214efd4372b4430270009ec65badf186e5f0d815dcf597b4703af95e3bfc03313125d2a88b9bb3788b6bbc3c7212713cd584a226b155a2e6872b33730af6fba29aa3dccdb0ec35b5d6e3d981faf39c8dd35fdcff502d14736bc6a47af6e4d7f3518f8ef5e0a4e5d521589a761757f86e2bef471d9867e9b532903c479e4966dcc99189fcdfa3d676f50ccd33fb7cc0aa3e85542ff2648c9";
static const char *ST_HASH_13723 = "d44f26d1742260f88023d825729cc5a64cf8475d887632a2fb4a84af27af138cfadc4bcbb122f6ba68339ae8427d1f72c0c4aeef041291492ae0a7d8677d8da43227ae2a26d9a433076b44458b14f52766cf0e4baeb473a789180660d62e42bbea7c042379a5a74e259463e1c18381fa13aee27141264be381de71c12f8f704913f211c45fda0295e963d90fc35272e907858c0522601f6e7a73b43ff222663f149a485fc6c464e5f3b7cc0b6508f30621385365ca8a4e0bff4061f64f5fbdb11f70f19d77e56fa6ff015ad76ecaaccd759d30da05d2a6fbf00ac9673ac3c23efd339313c2a99511e928f976bf9b2664d97685498d5931af2d453edc6fb1129e324eaba64264711fbe21d0d202b3659106e8100634f09c38cd15b1b3acba79d7f31d31fe23c166392e300db09f10550c83187566dc0fdf768b872555851b34e3c15ad7e7438a72e6126c895cf1204987df4b42cb7bc2fe03c5777867d269378c6e496df2a1a3457b907f7143a139d800868ad95e2901723c6ebb991054b4e991c67fe4c17702d9829d9dc1fe8bf4a956460721c858e31dbcbe56850a4ed31558c6ee89ba2cba2ef4bde77fed11848f9f92e0add54964a683c3686dbab4695ebc42554da922a08c6fff32cac936ea447e771aa74a689eb269ffef677294ef297600dfd73bbbb734d2968e38a98b4a8a77ff0eec8246d93b542e3521a3eb636101";
static const char *ST_HASH_13731 = "48f79476aa0aa8327a8a9056e61450f4e2883c9e9669142f2e2f022c2f85303b897d088dea03d64329f6c402a56fed05b3919715929090a25c8ae84c67dbdb364ebfa3e9ccc0b391c130a4c3dd6495a1d6eb5d2eab72f8009096f7475ecb736bb3225b6da144e1596d859dad159fae5a739beea88ea074771e9d0b2d7c48ae302606a60d7cff6db54f3e460c548c06a4f47dc1ac203a8c8349fbff6a652219a63f27bc76327543e22be4f8dab8e4f90a4283fbf1552119fe24114ce8869eb20ce87dd72300f7aad3f7b4a26a355f16517725449151cf0373dbd0b281f6ac753485a14a5361cc75d40928e241a6b4684658801774843238048cf8c7f2fd88950abac040e12b0c41fdcaca3702907e951ec11c061a91b3050a4855abe6f3b50b4bd0b17c4be1f5b50b873eadc2d8446cd72c4fcac576bbce3acea769f740c5322ee8c927ffd4dd11c8a9e66f06e58df2e5d4d85c13b44c412bab839c9512b7a0acdd97b37dcccc4b70854eda0f36de12d62dd10cc13bc6154103d083bf6540bc78e5d0aad5d063cc74dad4cbe6e060febda2a9fd79c238f99dcb0766ff4addcfd0c03e619c765f65b1c75d5d22c6536958bcda78077ff44b64c4da741bf50154df310d4e0724238a777b524237b9478277e400ad8146dc3ca1da83e3d2f1c5115a4b7fcdc71dd7d56ba86a2f9b721c9a4137aabb07c3c5fedcf5342c4fae4898c9";
static const char *ST_HASH_13732 = "1b721942019ebe8cedddbed7744a0702c0e053281a467e0ed69bf875c7406407d72eb8f2aea21270e41898c0a2c14382f86e04c15e7bc019d1d9dd813eabee0ae5173e3cb1d927859d3e6de1006335a5184ae12b4c8dc2db2b1cd785063152a776f4dc5cacc1856a919b880d704b7450f5a0e0c9521bc9b4d67213c36a50e6664a1cbcea33f997b858e654111c7e9fca74f361528e85a28880381ec2600e3c1cd508c3833dd21cc91978185cba53caefd7b3c82d219d49f0b41e536d32e8d3ce194ad7923ca742213e19dcebdbd9687979d5a594654a5c611e8b829c4019e90a3cfb14e5fd7f8ed91e0fc79eed182399f02a3e3e202d4becaa6730e1f05f99ce06ce16dba7777ccddac72e85f2d3be5ecc9c808ac273f10ceb71cad666166abc327c4061a5f47424a5b6d9d093782f34b49924342a2e8cea663446ed4232a9a415ee2dfde988fa827b06d7438fec20ad0689543c3ee4602ce3ec3806fc7d668ef7e34330edd1e077b329a7627fa3ae5c89308258a17ecefbee114c80c2ab06f8271f14de8f2d13d1d6e5a119b71a6bae88ab151f76cdb2442284bc481d0df7e2163c3acfe763d3968195450d275af9034a00184a30cefed163e636626bffe6a35df3472508a49cb2b9b4c4a95d11c5d17e4e0539e9f13112125515778bcd1c2813c62a02673663062ad60583ec6a02c8a572865829e5b8c767b285728bea4907";
static const char *ST_HASH_13733 = "5eb128daef63eff7e6db6aa10a8858f89964f47844acca68df82ebb2e73866fa75e3b7a53f9d2ff1ecdd1f4dc90e9c0fdf51f60d11b1992cd2971b4889edfc8920bbf346fd7693f675b617cb9e4e9a43e6f445021068fc13453b130f2eb1d753ee83ecc61dabec293e88b62110cf6a8fab670e171f6aba2226550b54893263f5fa086b3cc41dd3db2eae07b585e5162c7a0d9723a426d408d83266c4d6018dc1b8b456d28a224033a30bfe62b1e58c2ddf596e07f7ff31849a6f5cfcc1c977b82d8484c270d44ededb0afdb781295e92968fc8cc69766af0ce1e72f02d6b4e124ba4b1af71519dcaade857bb3f371f93a350da6e65ee46c2ac782f134c75c10fe9d653fccc08c614dc362871911af8b83bdfc479f770dfe4b3c86b5d895842c53852fe4912738f848bf7c3e10b8189d25faceab9ef30b6fa0284edaa471752ac2b65335179b8d605417709f64fded7d94383618a921660d4cdb190bbb3769a8e56d2cd1ee07078ebc3b68ebeb016893f7099018e40cb326e32b29a62806eaf1a3fd382f4f876bf721eadfc019c5545813e81fd7168995f743663b136762b07910a63b6eec5b728a4ad07a689cceecb14c2802f334401a0a4fd2ec49e2da7f3cb24d6181f01ceed93ee73dedc3378133c83c9a71155c86785ff20dd5a64323d2fd4bf076bab3c17a1bb45edf81c30a7bd7dbbb097ece0dca83fff9138d56ae668";
static const char *ST_HASH_13751 = "b8a19a544414e540172595aef79e6616f504799b40a407edfb69d40534e93f0bdb3187876f0b7a21739b3a9bb02bd4752eac4d2021e65a2a9413cc389964fad46e2cd37f337eb3fe3c75909fe9911609d084fb8c09543f949e738fc2fcfa4825ca5f1e08678e711142553f95b19ba720fa6c8ae5d325be0b36b93c1b2683b0944d2ad4e858c1d83f21a302ef721b9a570233219b9fcf95919fef9ca353af32d7ceb0b3058986c4ed9580b8058325403d45048e43d9e94a1e8fbaa0658f82f81940ea821e1bd526829ee6478a32da4095ab9e7c04dac3b6cc08f99348467a5bf068ba54d0aededdf6005c18ee37e21ee8d980cabe470be49d332661761934f5c07126001c290002587ba4b49982fefaac41b62f7e74ce943bb40a2d78094f734d1bc2aa3dedff43ee2a7b8f3525743c76194637da9ebc2794bac14601e03aa98e9118023a184970b6b8f84f546af88b81e2fde836e286b57cbcbdd7d39334860571a5cc612b77f0c51c741854abeb320bf961aea99b88798199bf826970f2b1b8027499955f68e15328080289d8cf0569057e1ed887f956ce72b14dd13a1f61134e1195d13c68d9c298ae0183107e3a93dd13ee0730f1fabe3935ee70f4c6a1923abb3e0d0c8ecf45260c1444e7e73386acf29d3239d0160e097e6193099e10cc98f61bfda49df6b0635e73a9ccc7bdcc543306b40dd12b91023f61b21418af91";
static const char *ST_HASH_13752 = "1c3197f32dc5b72b4d60474a7a43afefb0d2e856a8fc4957c3fb1188b62cb0ca002f585c125bb33c5a5e85a665afae9fce15cb127c2fd9b5ee074a48fd95b3a58364dfd645968187d546443ba234f5cc40e78c4bdcd1e0c6d0a1208dd892442bc1dfe2a45bc4821e843bb6d9f4adf742c48c432daf0d4a51d42cafdfca281f0fab0caabde8005405840383bbfd8dbf227384891ffa501531549e0b9562c2dd77f0e6552d253acb20cbee9a75d17ec283a46006ee89cd53e3b538e054952ae6db7aac9f2f190590e697a2a8e22d080e88c32f4d27b5afe100647da2a5c80cfcb69e5a3db67cb2fcd86d89c1c53fab1bf3a287bb9002d092e75eb1fe6269a1603545dbf97b9d7fcc9485b6400f7b0abaccc31642cefd83f037e7314c6990c51af24ae894cc1c49a09d18f3ad91b3ef37ae5414fef280ec776d9c0bf84b2eb312c8cb0046bedf6f29b4aab30cdb34333f613000a39bf650341cbf33bdd47ba7bd9be8108a1254390b045d82b208d21aa45de7ca399f8e91845b9ffb47d9e6eeb506965622a2e842ec6897277388cbb6ca2a50117e228e84bebd98f9aba40f38dc3bce3b576cb08596836e50ef276ee3a76b8ce76735fd172e9bae284aa83e2677dac56e4624e66604a90e2e3ae704c64a0f27b51ce9e472891bbc212b4a6055e4482b2e6963507f9ffb477224372289fcfee5764a5f4bc7307a509e7c37c69b4857";
static const char *ST_HASH_13753 = "f421bdc1087b8319c12d84a680ceab0102e8e41c9ccffe76dbe0215dcfcb7b543f3e1bbedd099e88646823dae5bad8468b72436961ea8e0449a6b92b8bda7b9ba1fe215e997ec3be2ee5eb3b4d47c41d50998df2f883404fb66270f72b5ce666e7d5ca7847c4a8b2762723da1ad088b0ad75c4fd2ccbbfa4e3adf091b6af4f44f5484ce0c89a5b0db0cbe99b3a9d43d7ff6c4ddbc9636cacfedb26b59340c6eb3e8c587db41fc01f10da2974af96531b2bee5f0b9818c3b86a3cac4ba20e08c49be84af65eb40d51626161f4eef187bf5776a89e791f3f5cbcfaa510df201fb2bf35ff03e81d0572af9abbed3cac82681925a3d1954440a6037df78f7a1e63bea81c852571a21fb550f9fe114b82bf7b94290e362cef233186f17396488c0f259c83c50ac4f8cc27d3a134ddc98f14c2fe0dd6e7d6f5eec63848314dc5984979eeb79df326f80ee0e7f671072117903cb72bbbce4f750fca3f008dadf532241e05913704df6ca03edb9641775c3b6e3e328fd078c6d70298512118312cab8316bb6ddc0b860952c621b2bb4cec1b3c7da9b1cb4c494fec382fe85aefdc56570b54845a14651535d261db519be0e860a4e20c30c86cff6f9de6e16b68d09a0e9593d271df2740950e65f1fb16e3fee034183e540e2a3b0f76156f06946b5d1bfc62fe0cab3daa14603a8d21eb03a4d266e965b010c265c9a0e093084d262a8c03";
static const char *ST_HASH_13771 = "444ec71554f0a2989b34bd8a5750ae7b5ed8b1ccdead29120fc030bd5186f312a7fa18ab4f4389d7798e43c073afd1e71dda2052db38dec04a700e8d6b488802ead0cf95d6e6cecc8eaf6464baf94a64acbbd1a86f826333115b6380bda18cf936150efd6ffc2a344bb78b0b4875781a8c5079772429ef50ddf148f35895496d2e39f32ffaf68a007b070b0beaad316c4b3adf43c0c58ad24430a34abf168ed455b64958ca5465cae0684adadc00f7b9c13fc7671b4520892d23aebff49ea92bc15e804cc650dc3bbd5b8f5122051636f0c576977d4b64ba355bf6e6a8e042fc5165f2a8affa51aa12ff718cee4c543976bf565997b4b57c74e79584e317f4bdb3920f2937c4251af87f432bb8ce78dcb30675246f0303db4aaea913c93be5a26d16dbf8d4d20773aa2a4608d2151491ca6593b51965baeaf9b58f78905df522bf88976fe9436a916c8de38d5a6ca7ca7f436e7982a36335a404298304322ebe194bb34e91e8f7ee7c6541679bb0ce9d80bf4431d1c475b1a785e943e57f8e27a4e665940389b6da2771bd27d943955185379f83ca6a124ec55b2b63d4ef2e2ad6ee27de25f959708f3a64facfe07f06e29459a14f02699751d530f258d0c744a759c188de4f9423f2bd21d3d999ea28df4f3a93a2c47a7e788fe43ccbfbe267277b048002da1ef8c1e7b26690230285675a3a8fdc0f2acf46a4cb24141b3ad1";
static const char *ST_HASH_13772 = "0f5da0b17c60edcd392058752ec29c389b140b54cd1f94de43dccea703b1fd37936e75a500b7f9d4e94e7f214c4696c051be9697792a856ebf9c0f5a598cf8ba5621e49c7505eba3b4738acdc860b6ed648f52e5b673ae06bb04616de438a090ab19abea11c30984ead06859de9b7aec8e436c40816f67a56cb53d5f125e58c42225315a4bf494da8128f0df924bcf6ad4b91c9efc5cb0be67cb0cd753c392388d780f57aba39197513a191cc684e9ebee41bc901dd99e9a625141cf98e55e8f74d838baea3bf8f411b85c14eff8cddd1720c2539eef7a38a72c4ed9745a05476b6a16bcda2a5391c94b6f499e3bea64ff412d03d060741e938ed3dc905d8bd6dbb2420e9277251ebe3421be389ea8b02782baeb258b9ec7e0732b3817ee6da58209871aee4e16d57a132c6215782364570238157d8a7fdcd29f54ab2295f68d027dc9f2e0c951afad7500cafe3219e6530699918ac55f4fa1141bc3596155b05bae2fdc8b0a5438edeb5bb0cfac592565b20645be90b406a1fd59846957e7539fd8423bfd4c7ae7d608aacb084ae887baa1a83b14afff8d2063565086c66e293234a8667af39642b90a38c3a5bd4fa8a787c60f73882535c9b34cb7b243465dcc32aff29cee0e741ff059c6acd8ddcbdb3cfafecdcd0f45c84dd871be4fbffd5ac2ab9e01898009adcf7d932c37d6568ad875e4d6ea15db29a1e8ba5a4e86bd";
static const char *ST_HASH_13773 = "18d2e8314961850f8fc26d2bc6f896db9c4eee301b5fa7295615166552b2422042c6cf6212187ec9c0234908e7934009c23ceed0c4858a7a4deecbc59b50a303afdc7d583cde1b0c06f0bf56162ef1d6d8df8f194aadcbe395780b3d1d7127faf39910eb10f4805abdd1c3ef7a66972603124a475e2b9224699e60a9e12f4096597f20c5fb0528f590d7bd317e41dc6a2128cf5e58a99803a28c213feb8286350b1d7ab56d43bb52e511f3c860e5002472a4454a549509c8ce0c34f17ece23d5b61aa7c63389c8ca44ed10c2caae03e7ed30b3ef98565926d7e4f3a2a9abf03b278083bed7aaadd78d5bffb7cd45ffae92990c06d9e9f375a77a94226035d1f90e177c46a04dab416dfb7ed7c4ed9ee7e84580bed65c5fee9f4b1545b9a7cf6af533870d393eced609aebe308ec1eee3729da09eb7df7a8d1282b15c4a1b8266a456c06b4ea20c209c549d5d6b58a861f8e15cca3b6cef114accbf470ec76d717f6d7d416d7a32f064ab560c1167f9ef4e93310fbd927b088bffbb0cf5d5c2e271c9cad4c604e489e9983a990b23e1a2f973682fdfe38df385474f73ecdc9bce701d01d627192d3051240f4b96bbdcf2346b275e05aa75add4acb97b286cc00e830fee95d0f86a8b1e315ccb6f3f8642180392b3baac01ed2c97c200489b5e5ca4dcb0a6417e622b6196482a10e640b2b6b08e3f62acac3d45dfc6b88c666205";
static const char *ST_HASH_13800 = "060a4a94cb2263bcefe74705bd0efe7643d09c2bc25fc69f6a32c1b8d5a5d0d9:4647316184156410832507278642444030512402463246148636510356103432440257733102761444262383653100802140838605535187005586063548643765207865344068042278454875021452355870320020868064506248840047414683714173748364871633802572014845467035357710118327480707136422";
static const char *ST_HASH_13900 = "058c1c3773340c8563421e2b17e60eb7c916787e:827500576";
static const char *ST_HASH_14400 = "fcdc7ec700b887e8eaebf94c2ec52aebb5521223:63038426024388230227";
static const char *ST_HASH_14700 = "$itunes_backup$*9*ebd7f9b33293b2511f0a4139d5b213feff51476968863cef60ec38d720497b6ff39a0bb63fa9f84e*10000*2202015774208421818002001652122401871832**";
static const char *ST_HASH_14800 = "$itunes_backup$*10*17a3b858e79bc273be43a9f113b71efe7ec8e7e401396b350180b4592ef45db67ffef7b2d64329a5*10000*2721336781705041205314422175267631184867*1000*99fafc983e732998adb9fadc162a2e382143f115";
static const char *ST_HASH_14900 = "7090b6b9:04223875";
static const char *ST_HASH_15000 = "bfa9fe5a404faff8b0d200385e26b783a163e475869336029d3ebaccaf02b5f16e4949279e8a33b942ab647f8f19a83dbe89a6d39dd6d8f84812de7d2e556767:6422386434050716105781561510557063652302782465168686858312232148";
static const char *ST_HASH_15100 = "$sha1$20000$75552156$HhYMDdaEHiK3eMIzTldOFPnw.s2Q";
static const char *ST_HASH_15200 = "$blockchain$v2$5000$288$324724252428471806184866704068819419467b2b32fd9593fd1a274e0b68bf2c72e5a1f5e748fd319056d1e47ca7b40767136a2d97d7133d14faaeca50986f66cdbc0faec0a3fabbd0ba5d08d5322b6b53da021aacfc439c45bec0e9fe02ad81db82f94e9bd36a7d4d76b505c2339fcd46565d3abab958fbeb1de8bfc53beb96cde8fe44128965477c9ef0762c62bbb1d66532b4888e174ea949db54374a2ed9686a63eb0b5b17ae293f7410bb4ae5106f108314a259c5fd097d558515d79350713412159103a8a174cd384a14f3da45efe18044e1146036000231f6042577d0add98fc959d265368e398dc1550b0bc693e9023cd9d51b40e701bd786e19c3a281a90465aa6ea3f9e756d430164ab2eb43be5b6796d7ac15b2fe99217410f2";
static const char *ST_HASH_15300 = "$DPAPImk$1*1*S-15-21-466364039-425773974-453930460-1925*des3*sha1*24000*b038489dee5ad04e3e3cab4d957258b5*208*cb9b5b7d96a0d2a00305ca403d3fd9c47c561e35b4b2cf3aebfd1d3199a6481d56972be7ebd6c291b199e6f1c2ffaee91978706737e9b1209e6c7d3aa3d8c3c3e38ad1ccfa39400d62c2415961c17fd0bd6b0f7bbd49cc1de1a394e64b7237f56244238da8d37d78";
static const char *ST_HASH_15400 = "$chacha20$*0400000000000003*35*0200000000000001*3961626364656667*8a152c57a7a856a8";
static const char *ST_HASH_15500 = "$jksprivk$*338BD2FBEBA7B3EF198A4CBFC6E18AFF1E229367*5225850113575146134463704406336350011656*D5253EB151EB92DC73E542D8C0A4D7A848A5B0C0E370E625E6547D4E6F23416FC85A27BC295731B8021CDFBD003551C66C434FFBC87DACAD1FDF39022320034A2F86E779F2B1B3325428A666518FA89507AD63E15FD9C57B9E36EF5B642A2F448A9A3F09B79AD93D65F46B8692CD07539FD140146F8F219DC262971AF019E18EDC16C3C240569E1673F4D98BC818CCF28298D5A7BFF038A663DD10FE5E48643C3217C237D342164E2D41EF15075431FBD5B34800E5AE7EB80FAA5AE9982A55F35379AA7B31217E7F1C5F1964A15024A305AE4B3981FE1C80C163BC38ECA5581F11867E5C34C5D124D0367B3737E5E5BB14D2CAB26A698C8DAAB755C82BA6B823BCAECDD4A89C831651ACE5A6029FD0D3515C5D1D53AD8B9062CE8C445373862035CBBF60D490CA2E4975EE6E0358EC32E871FAB15347E3032E21F30F543BAAB01D779BA833CA0B8C7591B42C7C59A8FDD46D7DECEC0E91ADBF331177605E7830ABED62FAD7D5D806D8EFD01C38765940B7F97168FC72C39BF4C98F944FFC310CA8F4EB1D0F960F352CC5E2BB23A1EB221072A5471EDA2CE81C04595B8D37088CFB5C14F6A4A881AD12125DEFBB8154EB4C130AB7FD9933FD36DF1A6A26B51AB169866788678FCED988C8E017CA84354F487A5508210181AFB8B3AD0753E3E28BE674DFBD4E4FBDFD1E30D592F4EA3A77A2F0F5CF9A175DBC590EF5D42971A39918F12B92DCD8BFD56BE9A3459856B5587603C7B53062663A4C8894BBC9894FB1663BF30F32D907664328138B7A50EAC7F8E3183D74562A5C90FE1889AC4C5FE43EBEB8974563B6682F92591ECA4FA0DA72236C3851DA102DB6BA0CC07BFD32F7E962AB0EDCF4A8DEA6525174F5BB5C021E2A9A3F7F761E9CA90B6E27FB7E55CD91DA184FAC5E534E8AD25314C56CE5796506A0CA70881782F9C5147D87705065D68BD67D2B0344205BA6445D562273690004CA5A303274FB283A75F49BA968D7947943AA98F2AF9CB8253B425B86225E7395A331AC4CB1B1700C64D4F458D5D642C54148AE6DA41D9E26657D331B157D76042C2CF3057B83997C23D8BF68FB3C7337CAFB8B324AD0DF7A80B554B4D7F9AD6ED527E7932F1741A573C152A41610F6517E3F4A3BC6B66685871A7CE3795C559BD47CDB8E34CB2C1DFE980518D79E2078C258C54F312EB38609F640E7DC013E0F2A16A25BB5971882B4308D27930CA99FEC231AE927B62215A1B56098C362B7F20593953B29428681875070E84BF5B60BEA3948127151634123DA77C814AAD54CE10905763C8C19BC191C0C40458C809402E1957C4C05C4EAE27576B2D30593F7FDCC9A248DB5DB23CF2FA22A92C016090F611690BF0AB5B8B2866ED25F345EFE85DF3311C9E91C37CEE709CF16E7CB09D01BECD2961D094C02D42EC85BF47FAB1B67A13B9A1741C15F7156D57A71BFFABB03B71E69707913A5C136B3D69CE3F71ABFE376F0A21D723FFA2E60AC180689D3E8AF4348C9F555CD897387327FC8BA2B9C51A7298547E556A11A60441EF5331A1BFB847A3D23DD9F7C50E636A2C6309BC82E1A8852F5A8569B6D93*14*78D6A2424484CF5149932B7EA8BF*test";
static const char *ST_HASH_15600 = "$ethereum$p*1024*38353131353831333338313138363430*a8b4dfe92687dbc0afeb5dae7863f18964241e96b264f09959903c8c924583fc*0a9252861d1e235994ce33dbca91c98231764d8ecb4950015a8ae20d6415b986";
//static const char *ST_HASH_15700 = "$ethereum$s*262144*8*1*3134313837333434333838303231333633373433323633373534333136363537*73da7f80ec3bd4f2a128c3a815cfb4d576ecb1a9b47024c902e62ea926f7795b*910e0f8dc1f7ba41959e1089bb769f3e919109591913cc33ba03953d7a905efd";
static const char *ST_HASH_15900 = "$DPAPImk$2*1*S-15-21-439882973-489230393-482956683-1522*aes256*sha512*12900*79f7ca399f2626e21aad108c3922af7c*288*c47bc8a985ca6aa708b01c97b004bff20cc52379dc2635b4acf59ce17970a2cb47ace98c7e8de977f265243c5c03d0a97e4b954b494d9e38d9158d0c1e729d16a28ba69e2e7c6c3bc0e3afc9c9b6306b83372ccb35d89b98925728fd36315b8ee95b4d4eccdcb31564769f9a4b9ee10828184e16d4af336675d5e31d987dd87233d34fbbb98880c5e1f64cbb9b043ad8";
static const char *ST_HASH_16000 = "pfaRCwDe0U";
static const char *ST_HASH_16100 = "$tacacs-plus$0$5fde8e68$4e13e8fb33df$c006";
static const char *ST_HASH_16200 = "$ASN$*1*20000*80771171105233481004850004085037*d04b17af7f6b184346aad3efefe8bec0987ee73418291a41";
static const char *ST_HASH_16300 = "$ethereum$w*e94a8e49deac2d62206bf9bfb7d2aaea7eb06c1a378cfc1ac056cc599a569793c0ecc40e6a0c242dee2812f06b644d70f43331b1fa2ce4bd6cbb9f62dd25b443235bdb4c1ffb222084c9ded8c719624b338f17e0fd827b34d79801298ac75f74ed97ae16f72fccecf862d09a03498b1b8bd1d984fc43dd507ede5d4b6223a582352386407266b66c671077eefc1e07b5f42508bf926ab5616658c984968d8eec25c9d5197a4a30eed54c161595c3b4d558b17ab8a75ccca72b3d949919d197158ea5cfbc43ac7dd73cf77807dc2c8fe4ef1e942ccd11ec24fe8a410d48ef4b8a35c93ecf1a21c51a51a08f3225fbdcc338b1e7fdafd7d94b82a81d88c2e9a429acc3f8a5974eafb7af8c912597eb6fdcd80578bd12efddd99de47b44e7c8f6c38f2af3116b08796172eda89422e9ea9b99c7f98a7e331aeb4bb1b06f611e95082b629332c31dbcfd878aed77d300c9ed5c74af9cd6f5a8c4a261dd124317fb790a04481d93aec160af4ad8ec84c04d943a869f65f07f5ccf8295dc1c876f30408eac77f62192cbb25842470b4a5bdb4c8096f56da7e9ed05c21f61b94c54ef1c2e9e417cce627521a40a99e357dd9b7a7149041d589cbacbe0302db57ddc983b9a6d79ce3f2e9ae8ad45fa40b934ed6b36379b780549ae7553dbb1cab238138c05743d0103335325bd90e27d8ae1ea219eb8905503c5ad54fa12d22e9a7d296eee07c8a7b5041b8d56b8af290274d01eb0e4ad174eb26b23b5e9fb46ff7f88398e6266052292acb36554ccb9c2c03139fe72d3f5d30bd5d10bd79d7cb48d2ab24187d8efc3750d5a24980fb12122591455d14e75421a2074599f1cc9fdfc8f498c92ad8b904d3c4307f80c46921d8128*f3abede76ac15228f1b161dd9660bb9094e81b1b*d201ccd492c284484c7824c4d37b1593";
static const char *ST_HASH_16400 = "{CRAM-MD5}5389b33b9725e5657cb631dc50017ff100000000000000000000000000000000";
static const char *ST_HASH_16600 = "$electrum$1*44358283104603165383613672586868*c43a6632d9f59364f74c395a03d8c2ea";
static const char *ST_HASH_16700 = "$fvde$1$16$84286044060108438487434858307513$20000$f1620ab93192112f0a23eea89b5d4df065661f974b704191";
static const char *ST_HASH_16900 = "$ansible$0*0*6b761adc6faeb0cc0bf197d3d4a4a7d3f1682e4b169cae8fa6b459b3214ed41e*426d313c5809d4a80a4b9bc7d4823070*d8bad190c7fbc7c3cb1c60a27abfb0ff59d6fb73178681c7454d94a0f56a4360";
static const char *ST_HASH_17500 = "983ba28532cc6320d04f20fa485bcedb38bddb666eca5f1e5aa279ff1c6244fe5f83cf4bbf05b95ff378dd2353617221";
static const char *ST_HASH_17600 = "7c2dc1d743735d4e069f3bda85b1b7e9172033dfdd8cd599ca094ef8570f3930c3f2c0b7afc8d6152ce4eaad6057a2ff22e71934b3a3dd0fb55a7fc84a53144e";
static const char *ST_HASH_17900 = "5804b7ada5806ba79540100e9a7ef493654ff2a21d94d4f2ce4bf69abda5d94bf03701fe9525a15dfdc625bfbd769701";
static const char *ST_HASH_18000 = "2fbf5c9080f0a704de2e915ba8fdae6ab00bbc026b2c1c8fa07da1239381c6b7f4dfd399bf9652500da723694a4c719587dd0219cb30eabe61210a8ae4dc0b03";
static const char *ST_HASH_18100 = "597056:3600";
static const char *ST_HASH_18200 = "$krb5asrep$23$user@domain.com:3e156ada591263b8aab0965f5aebd837$007497cb51b6c8116d6407a782ea0e1c5402b17db7afa6b05a6d30ed164a9933c754d720e279c6c573679bd27128fe77e5fea1f72334c1193c8ff0b370fadc6368bf2d49bbfdba4c5dccab95e8c8ebfdc75f438a0797dbfb2f8a1a5f4c423f9bfc1fea483342a11bd56a216f4d5158ccc4b224b52894fadfba3957dfe4b6b8f5f9f9fe422811a314768673e0c924340b8ccb84775ce9defaa3baa0910b676ad0036d13032b0dd94e3b13903cc738a7b6d00b0b3c210d1f972a6c7cae9bd3c959acf7565be528fc179118f28c679f6deeee1456f0781eb8154e18e49cb27b64bf74cd7112a0ebae2102ac";
static const char *ST_HASH_18300 = "$fvde$2$16$58778104701476542047675521040224$20000$39602e86b7cea4a34f4ff69ff6ed706d68954ee474de1d2a9f6a6f2d24d172001e484c1d4eaa237d";
static const char *ST_HASH_99999 = "hashcat";


static const char *HT_00030 = "md5(utf16le($pass).$salt)";
static const char *HT_00040 = "md5($salt.utf16le($pass))";
static const char *HT_00050 = "HMAC-MD5 (key = $pass)";
static const char *HT_00060 = "HMAC-MD5 (key = $salt)";
static const char *HT_00100 = "SHA1";
static const char *HT_00110 = "sha1($pass.$salt)";
static const char *HT_00120 = "sha1($salt.$pass)";
static const char *HT_00130 = "sha1(utf16le($pass).$salt)";
static const char *HT_00140 = "sha1($salt.utf16le($pass))";
static const char *HT_00150 = "HMAC-SHA1 (key = $pass)";
static const char *HT_00160 = "HMAC-SHA1 (key = $salt)";
static const char *HT_01100 = "Domain Cached Credentials (DCC), MS Cache";
static const char *HT_01410 = "sha256($pass.$salt)";
static const char *HT_01420 = "sha256($salt.$pass)";
static const char *HT_01430 = "sha256(utf16le($pass).$salt)";
static const char *HT_01440 = "sha256($salt.utf16le($pass))";
static const char *HT_01450 = "HMAC-SHA256 (key = $pass)";
static const char *HT_01460 = "HMAC-SHA256 (key = $salt)";
static const char *HT_01600 = "Apache $apr1$ MD5, md5apr1, MD5 (APR)";
static const char *HT_01710 = "sha512($pass.$salt)";
static const char *HT_01720 = "sha512($salt.$pass)";
static const char *HT_01730 = "sha512(utf16le($pass).$salt)";
static const char *HT_01740 = "sha512($salt.utf16le($pass))";
static const char *HT_01750 = "HMAC-SHA512 (key = $pass)";
static const char *HT_01760 = "HMAC-SHA512 (key = $salt)";
static const char *HT_02100 = "Domain Cached Credentials 2 (DCC2), MS Cache 2";
static const char *HT_02410 = "Cisco-ASA MD5";
static const char *HT_02600 = "md5(md5($pass))";
static const char *HT_03100 = "Oracle H: Type (Oracle 7+)";
static const char *HT_03710 = "md5($salt.md5($pass))";
static const char *HT_03711 = "MediaWiki B type";
static const char *HT_03800 = "md5($salt.$pass.$salt)";
static const char *HT_03910 = "md5(md5($pass).md5($salt))";
static const char *HT_04010 = "md5($salt.md5($salt.$pass))";
static const char *HT_04110 = "md5($salt.md5($pass.$salt))";
static const char *HT_04300 = "md5(strtoupper(md5($pass)))";
static const char *HT_04400 = "md5(sha1($pass))";
static const char *HT_04500 = "sha1(sha1($pass))";
static const char *HT_04520 = "sha1($salt.sha1($pass))";
static const char *HT_04700 = "sha1(md5($pass))";
static const char *HT_04800 = "iSCSI CHAP authentication, MD5(CHAP)";
static const char *HT_04900 = "sha1($salt.$pass.$salt)";
static const char *HT_05200 = "Password Safe v3";
static const char *HT_05300 = "IKE-PSK MD5";
static const char *HT_05400 = "IKE-PSK SHA1";
static const char *HT_05700 = "Cisco-IOS type 4 (SHA256)";
static const char *HT_05800 = "Samsung Android Password/PIN";
static const char *HT_06000 = "RIPEMD-160";
static const char *HT_06100 = "Whirlpool";
static const char *HT_06300 = "AIX {smd5}";
static const char *HT_06400 = "AIX {ssha256}";
static const char *HT_06500 = "AIX {ssha512}";
static const char *HT_06600 = "1Password, agilekeychain";
static const char *HT_06700 = "AIX {ssha1}";
static const char *HT_06800 = "LastPass + LastPass sniffed";
static const char *HT_06900 = "GOST R 34.11-94";
static const char *HT_07000 = "FortiGate (FortiOS)";
static const char *HT_07100 = "macOS v10.8+ (PBKDF2-SHA512)";
static const char *HT_07200 = "GRUB 2";
static const char *HT_07300 = "IPMI2 RAKP HMAC-SHA1";
static const char *HT_07400 = "sha256crypt $5$, SHA256 (Unix)";
static const char *HT_07700 = "SAP CODVN B (BCODE)";
static const char *HT_07701 = "SAP CODVN B (BCODE) mangled from RFC_READ_TABLE";
static const char *HT_07800 = "SAP CODVN F/G (PASSCODE)";
static const char *HT_07801 = "SAP CODVN F/G (PASSCODE) mangled from RFC_READ_TABLE";
static const char *HT_07900 = "Drupal7";
static const char *HT_08000 = "Sybase ASE";
static const char *HT_08100 = "Citrix NetScaler";
static const char *HT_08200 = "1Password, cloudkeychain";
static const char *HT_08300 = "DNSSEC (NSEC3)";
static const char *HT_08400 = "WBB3 (Woltlab Burning Board)";
static const char *HT_08500 = "RACF";
static const char *HT_08600 = "Lotus Notes/Domino 5";
static const char *HT_08700 = "Lotus Notes/Domino 6";
static const char *HT_08800 = "Android FDE <= 4.3";
static const char *HT_08900 = "scrypt";
static const char *HT_09000 = "Password Safe v2";
static const char *HT_09100 = "Lotus Notes/Domino 8";
static const char *HT_09200 = "Cisco-IOS $8$ (PBKDF2-SHA256)";
static const char *HT_09300 = "Cisco-IOS $9$ (scrypt)";
static const char *HT_09400 = "MS Office 2007";
static const char *HT_09500 = "MS Office 2010";
static const char *HT_09600 = "MS Office 2013";
static const char *HT_09700 = "MS Office <= 2003 $0/$1, MD5 + RC4";
static const char *HT_09710 = "MS Office <= 2003 $0/$1, MD5 + RC4, collider #1";
static const char *HT_09720 = "MS Office <= 2003 $0/$1, MD5 + RC4, collider #2";
static const char *HT_09800 = "MS Office <= 2003 $3/$4, SHA1 + RC4";
static const char *HT_09810 = "MS Office <= 2003 $3, SHA1 + RC4, collider #1";
static const char *HT_09820 = "MS Office <= 2003 $3, SHA1 + RC4, collider #2";
static const char *HT_09900 = "Radmin2";
static const char *HT_10000 = "Django (PBKDF2-SHA256)";
static const char *HT_10100 = "SipHash";
static const char *HT_10200 = "CRAM-MD5";
static const char *HT_10300 = "SAP CODVN H (PWDSALTEDHASH) iSSHA-1";
static const char *HT_10400 = "PDF 1.1 - 1.3 (Acrobat 2 - 4)";
static const char *HT_10410 = "PDF 1.1 - 1.3 (Acrobat 2 - 4), collider #1";
static const char *HT_10420 = "PDF 1.1 - 1.3 (Acrobat 2 - 4), collider #2";
static const char *HT_10500 = "PDF 1.4 - 1.6 (Acrobat 5 - 8)";
static const char *HT_10600 = "PDF 1.7 Level 3 (Acrobat 9)";
static const char *HT_10700 = "PDF 1.7 Level 8 (Acrobat 10 - 11)";
static const char *HT_10900 = "PBKDF2-HMAC-SHA256";
static const char *HT_11000 = "PrestaShop";
static const char *HT_11100 = "PostgreSQL CRAM (MD5)";
static const char *HT_11200 = "MySQL CRAM (SHA1)";
static const char *HT_11300 = "Bitcoin/Litecoin wallet.dat";
static const char *HT_11400 = "SIP digest authentication (MD5)";
static const char *HT_11500 = "CRC32";
static const char *HT_11600 = "7-Zip";
static const char *HT_11700 = "GOST R 34.11-2012 (Streebog) 256-bit, big-endian";
static const char *HT_11750 = "HMAC-Streebog-256 (key = $pass), big-endian";
static const char *HT_11760 = "HMAC-Streebog-256 (key = $salt), big-endian";
static const char *HT_11800 = "GOST R 34.11-2012 (Streebog) 512-bit, big-endian";
static const char *HT_11850 = "HMAC-Streebog-512 (key = $pass), big-endian";
static const char *HT_11860 = "HMAC-Streebog-512 (key = $salt), big-endian";
static const char *HT_11900 = "PBKDF2-HMAC-MD5";
static const char *HT_12100 = "PBKDF2-HMAC-SHA512";
static const char *HT_12200 = "eCryptfs";
static const char *HT_12300 = "Oracle T: Type (Oracle 12+)";
static const char *HT_12400 = "BSDi Crypt, Extended DES";
static const char *HT_12500 = "RAR3-hp";
static const char *HT_12600 = "ColdFusion 10+";
static const char *HT_12700 = "Blockchain, My Wallet";
static const char *HT_12800 = "MS-AzureSync PBKDF2-HMAC-SHA256";
static const char *HT_12900 = "Android FDE (Samsung DEK)";
static const char *HT_13000 = "RAR5";
static const char *HT_13100 = "Kerberos 5 TGS-REP etype 23";
static const char *HT_13200 = "AxCrypt";
static const char *HT_13300 = "AxCrypt in-memory SHA1";
static const char *HT_13400 = "KeePass 1 (AES/Twofish) and KeePass 2 (AES)";
static const char *HT_13500 = "PeopleSoft PS_TOKEN";
static const char *HT_13600 = "WinZip";
static const char *HT_13800 = "Windows Phone 8+ PIN/password";
static const char *HT_13900 = "OpenCart";
static const char *HT_14400 = "sha1(CX)";
static const char *HT_14600 = "LUKS";
static const char *HT_14700 = "iTunes backup < 10.0";
static const char *HT_14800 = "iTunes backup >= 10.0";
static const char *HT_14900 = "Skip32 (PT = $salt, key = $pass)";
static const char *HT_15000 = "FileZilla Server >= 0.9.55";
static const char *HT_15100 = "Juniper/NetBSD sha1crypt";
static const char *HT_15200 = "Blockchain, My Wallet, V2";
static const char *HT_15300 = "DPAPI masterkey file v1";
static const char *HT_15400 = "ChaCha20";
static const char *HT_15500 = "JKS Java Key Store Private Keys (SHA1)";
static const char *HT_15600 = "Ethereum Wallet, PBKDF2-HMAC-SHA256";
static const char *HT_15700 = "Ethereum Wallet, SCRYPT";
static const char *HT_15900 = "DPAPI masterkey file v2";
static const char *HT_16000 = "Tripcode";
static const char *HT_16100 = "TACACS+";
static const char *HT_16200 = "Apple Secure Notes";
static const char *HT_16300 = "Ethereum Pre-Sale Wallet, PBKDF2-HMAC-SHA256";
static const char *HT_16400 = "CRAM-MD5 Dovecot";
static const char *HT_16500 = "JWT (JSON Web Token)";
static const char *HT_16600 = "Electrum Wallet (Salt-Type 1-3)";
static const char *HT_16700 = "FileVault 2";
static const char *HT_16900 = "Ansible Vault";
static const char *HT_17500 = "SHA3-384";
static const char *HT_17600 = "SHA3-512";
static const char *HT_17900 = "Keccak-384";
static const char *HT_18000 = "Keccak-512";
static const char *HT_18100 = "TOTP (HMAC-SHA1)";
static const char *HT_18200 = "Kerberos 5 AS-REP etype 23";
static const char *HT_18300 = "Apple File System (APFS)";
static const char *HT_99999 = "Plaintext";


static const char *HT_00011 = "Joomla < 2.5.18";
static const char *HT_00012 = "PostgreSQL";
static const char *HT_00021 = "osCommerce, xt:Commerce";
static const char *HT_00022 = "Juniper NetScreen/SSG (ScreenOS)";
static const char *HT_00023 = "Skype";
static const char *HT_00101 = "nsldap, SHA-1(Base64), Netscape LDAP SHA";
static const char *HT_00111 = "nsldaps, SSHA-1(Base64), Netscape LDAP SSHA";
static const char *HT_00112 = "Oracle S: Type (Oracle 11+)";
static const char *HT_00121 = "SMF (Simple Machines Forum) > v1.1";
static const char *HT_00122 = "macOS v10.4, macOS v10.5, MacOS v10.6";
static const char *HT_00124 = "Django (SHA-1)";
static const char *HT_00125 = "ArubaOS";
static const char *HT_00131 = "MSSQL (2000)";
static const char *HT_00132 = "MSSQL (2005)";
static const char *HT_00133 = "PeopleSoft";
static const char *HT_00141 = "Episerver 6.x < .NET 4";
static const char *HT_01411 = "SSHA-256(Base64), LDAP {SSHA256}";
static const char *HT_01421 = "hMailServer";
static const char *HT_01441 = "Episerver 6.x >= .NET 4";
static const char *HT_01711 = "SSHA-512(Base64), LDAP {SSHA512}";
static const char *HT_01722 = "macOS v10.7";
static const char *HT_01731 = "MSSQL (2012, 2014)";
static const char *HT_02611 = "vBulletin < v3.8.5";
static const char *HT_02612 = "PHPS";
static const char *HT_02711 = "vBulletin >= v3.8.5";
static const char *HT_02811 = "IPB2+ (Invision Power Board), MyBB 1.2+";
static const char *HT_04521 = "Redmine";
static const char *HT_04522 = "PunBB";
static const char *HT_06211 = "TrueCrypt PBKDF2-HMAC-RIPEMD160 + XTS 512 bit";
static const char *HT_06212 = "TrueCrypt PBKDF2-HMAC-RIPEMD160 + XTS 1024 bit";
static const char *HT_06213 = "TrueCrypt PBKDF2-HMAC-RIPEMD160 + XTS 1536 bit";
static const char *HT_06221 = "TrueCrypt PBKDF2-HMAC-SHA512 + XTS 512 bit";
static const char *HT_06222 = "TrueCrypt PBKDF2-HMAC-SHA512 + XTS 1024 bit";
static const char *HT_06223 = "TrueCrypt PBKDF2-HMAC-SHA512 + XTS 1536 bit";
static const char *HT_06231 = "TrueCrypt PBKDF2-HMAC-Whirlpool + XTS 512 bit";
static const char *HT_06232 = "TrueCrypt PBKDF2-HMAC-Whirlpool + XTS 1024 bit";
static const char *HT_06233 = "TrueCrypt PBKDF2-HMAC-Whirlpool + XTS 1536 bit";
static const char *HT_06241 = "TrueCrypt PBKDF2-HMAC-RIPEMD160 + XTS 512 bit + boot-mode";
static const char *HT_06242 = "TrueCrypt PBKDF2-HMAC-RIPEMD160 + XTS 1024 bit + boot-mode";
static const char *HT_06243 = "TrueCrypt PBKDF2-HMAC-RIPEMD160 + XTS 1536 bit + boot-mode";
static const char *HT_13711 = "VeraCrypt PBKDF2-HMAC-RIPEMD160 + XTS 512 bit";
static const char *HT_13712 = "VeraCrypt PBKDF2-HMAC-RIPEMD160 + XTS 1024 bit";
static const char *HT_13713 = "VeraCrypt PBKDF2-HMAC-RIPEMD160 + XTS 1536 bit";
static const char *HT_13721 = "VeraCrypt PBKDF2-HMAC-SHA512 + XTS 512 bit";
static const char *HT_13722 = "VeraCrypt PBKDF2-HMAC-SHA512 + XTS 1024 bit";
static const char *HT_13723 = "VeraCrypt PBKDF2-HMAC-SHA512 + XTS 1536 bit";
static const char *HT_13731 = "VeraCrypt PBKDF2-HMAC-Whirlpool + XTS 512 bit";
static const char *HT_13732 = "VeraCrypt PBKDF2-HMAC-Whirlpool + XTS 1024 bit";
static const char *HT_13733 = "VeraCrypt PBKDF2-HMAC-Whirlpool + XTS 1536 bit";
static const char *HT_13741 = "VeraCrypt PBKDF2-HMAC-RIPEMD160 + XTS 512 bit + boot-mode";
static const char *HT_13742 = "VeraCrypt PBKDF2-HMAC-RIPEMD160 + XTS 1024 bit + boot-mode";
static const char *HT_13743 = "VeraCrypt PBKDF2-HMAC-RIPEMD160 + XTS 1536 bit + boot-mode";
static const char *HT_13751 = "VeraCrypt PBKDF2-HMAC-SHA256 + XTS 512 bit";
static const char *HT_13752 = "VeraCrypt PBKDF2-HMAC-SHA256 + XTS 1024 bit";
static const char *HT_13753 = "VeraCrypt PBKDF2-HMAC-SHA256 + XTS 1536 bit";
static const char *HT_13761 = "VeraCrypt PBKDF2-HMAC-SHA256 + XTS 512 bit + boot-mode";
static const char *HT_13762 = "VeraCrypt PBKDF2-HMAC-SHA256 + XTS 1024 bit + boot-mode";
static const char *HT_13763 = "VeraCrypt PBKDF2-HMAC-SHA256 + XTS 1536 bit + boot-mode";
static const char *HT_13771 = "VeraCrypt PBKDF2-HMAC-Streebog-512 + XTS 512 bit";
static const char *HT_13772 = "VeraCrypt PBKDF2-HMAC-Streebog-512 + XTS 1024 bit";
static const char *HT_13773 = "VeraCrypt PBKDF2-HMAC-Streebog-512 + XTS 1536 bit";
static const char *HT_12001 = "Atlassian (PBKDF2-HMAC-SHA1)";

static const char *SIGNATURE_ANDROIDFDE         = "$fde$";
static const char *SIGNATURE_AXCRYPT            = "$axcrypt$";
static const char *SIGNATURE_AXCRYPT_SHA1       = "$axcrypt_sha1$";
static const char *SIGNATURE_BITCOIN_WALLET     = "$bitcoin$";
static const char *SIGNATURE_BSDICRYPT          = "_";
static const char *SIGNATURE_CISCO8             = "$8$";
static const char *SIGNATURE_CISCO9             = "$9$";
static const char *SIGNATURE_CRAM_MD5           = "$cram_md5$";
static const char *SIGNATURE_CRAM_MD5_DOVECOT   = "{CRAM-MD5}";
static const char *SIGNATURE_DCC2               = "$DCC2$";
static const char *SIGNATURE_DJANGOPBKDF2       = "pbkdf2_sha256";
static const char *SIGNATURE_DJANGOSHA1         = "sha1$";
static const char *SIGNATURE_DPAPIMK            = "$DPAPImk$";
static const char *SIGNATURE_DRUPAL7            = "$S$";
static const char *SIGNATURE_ECRYPTFS           = "$ecryptfs$";
static const char *SIGNATURE_EPISERVER          = "$episerver$";
static const char *SIGNATURE_KEEPASS            = "$keepass$";
static const char *SIGNATURE_KRB5TGS            = "$krb5tgs$23$";
static const char *SIGNATURE_KRB5ASREP          = "$krb5asrep$23$";
static const char *SIGNATURE_MD5AIX             = "{smd5}";
static const char *SIGNATURE_MD5APR1            = "$apr1$";
static const char *SIGNATURE_MEDIAWIKI_B        = "$B$";
static const char *SIGNATURE_MS_DRSR            = "v1;PPH1_MD4";
static const char *SIGNATURE_MSSQL              = "0x0100";
static const char *SIGNATURE_MSSQL2012          = "0x0200";
static const char *SIGNATURE_MYSQL_AUTH         = "$mysqlna$";
static const char *SIGNATURE_MYWALLET           = "$blockchain$";
static const char *SIGNATURE_MYWALLETV2         = "$blockchain$v2$";
static const char *SIGNATURE_NETSCALER          = "1";
static const char *SIGNATURE_OFFICE2007         = "$office$";
static const char *SIGNATURE_OFFICE2010         = "$office$";
static const char *SIGNATURE_OFFICE2013         = "$office$";
static const char *SIGNATURE_OLDOFFICE          = "$oldoffice$";
static const char *SIGNATURE_OLDOFFICE0         = "$oldoffice$0";
static const char *SIGNATURE_OLDOFFICE1         = "$oldoffice$1";
static const char *SIGNATURE_OLDOFFICE3         = "$oldoffice$3";
static const char *SIGNATURE_OLDOFFICE4         = "$oldoffice$4";
static const char *SIGNATURE_PBKDF2_MD5         = "md5";
static const char *SIGNATURE_PBKDF2_SHA256      = "sha256";
static const char *SIGNATURE_PBKDF2_SHA512      = "sha512";
static const char *SIGNATURE_PDF                = "$pdf$";
static const char *SIGNATURE_PHPS               = "$PHPS$";
static const char *SIGNATURE_POSTGRESQL_AUTH    = "$postgres$";
static const char *SIGNATURE_PSAFE3             = "PWS3";
static const char *SIGNATURE_RACF               = "$racf$";
static const char *SIGNATURE_RAR3               = "$RAR3$";
static const char *SIGNATURE_RAR5               = "$rar5$";
static const char *SIGNATURE_SAPH_SHA1          = "{x-issha, ";
static const char *SIGNATURE_SCRYPT             = "SCRYPT";
static const char *SIGNATURE_SEVEN_ZIP          = "$7z$";
static const char *SIGNATURE_SHA1AIX            = "{ssha1}";
static const char *SIGNATURE_SHA1B64            = "{SHA}";
static const char *SIGNATURE_SHA256AIX          = "{ssha256}";
static const char *SIGNATURE_SHA256B64S         = "{SSHA256}";
static const char *SIGNATURE_SHA256CRYPT        = "$5$";
static const char *SIGNATURE_SHA512AIX          = "{ssha512}";
static const char *SIGNATURE_SHA512B64S         = "{SSHA512}";
static const char *SIGNATURE_SHA512GRUB         = "grub.pbkdf2.sha512.";
static const char *SIGNATURE_SHA512MACOS        = "$ml$";
static const char *SIGNATURE_SIP_AUTH           = "$sip$";
static const char *SIGNATURE_SSHA1B64_lower     = "{ssha}";
static const char *SIGNATURE_SSHA1B64_upper     = "{SSHA}";
static const char *SIGNATURE_SYBASEASE          = "0xc007";
static const char *SIGNATURE_ZIP2_START         = "$zip2$";
static const char *SIGNATURE_ZIP2_STOP          = "$/zip2$";
static const char *SIGNATURE_ITUNES_BACKUP      = "$itunes_backup$";
static const char *SIGNATURE_FORTIGATE          = "AK1";
static const char *SIGNATURE_ATLASSIAN          = "{PKCS5S2}";
static const char *SIGNATURE_NETBSD_SHA1CRYPT   = "$sha1$";
static const char *SIGNATURE_CHACHA20           = "$chacha20$";
static const char *SIGNATURE_JKS_SHA1           = "$jksprivk$";
static const char *SIGNATURE_ETHEREUM_PBKDF2    = "$ethereum$p";
static const char *SIGNATURE_ETHEREUM_SCRYPT    = "$ethereum$s";
static const char *SIGNATURE_TACACS_PLUS        = "$tacacs-plus$0$";
static const char *SIGNATURE_APPLE_SECURE_NOTES = "$ASN$";
static const char *SIGNATURE_ETHEREUM_PRESALE   = "$ethereum$w";
static const char *SIGNATURE_ELECTRUM_WALLET    = "$electrum$";
static const char *SIGNATURE_FILEVAULT2         = "$fvde$";
static const char *SIGNATURE_ANSIBLE_VAULT      = "$ansible$";
static const char *SIGNATURE_APFS               = "$fvde$";

/**
 * decoder / encoder
 */

static void sha1aix_decode (u8 digest[20], const u8 buf[27])
{
  int l;

  l  = itoa64_to_int (buf[ 0]) <<  0;
  l |= itoa64_to_int (buf[ 1]) <<  6;
  l |= itoa64_to_int (buf[ 2]) << 12;
  l |= itoa64_to_int (buf[ 3]) << 18;

  digest[ 2] = (l >>  0) & 0xff;
  digest[ 1] = (l >>  8) & 0xff;
  digest[ 0] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[ 4]) <<  0;
  l |= itoa64_to_int (buf[ 5]) <<  6;
  l |= itoa64_to_int (buf[ 6]) << 12;
  l |= itoa64_to_int (buf[ 7]) << 18;

  digest[ 5] = (l >>  0) & 0xff;
  digest[ 4] = (l >>  8) & 0xff;
  digest[ 3] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[ 8]) <<  0;
  l |= itoa64_to_int (buf[ 9]) <<  6;
  l |= itoa64_to_int (buf[10]) << 12;
  l |= itoa64_to_int (buf[11]) << 18;

  digest[ 8] = (l >>  0) & 0xff;
  digest[ 7] = (l >>  8) & 0xff;
  digest[ 6] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[12]) <<  0;
  l |= itoa64_to_int (buf[13]) <<  6;
  l |= itoa64_to_int (buf[14]) << 12;
  l |= itoa64_to_int (buf[15]) << 18;

  digest[11] = (l >>  0) & 0xff;
  digest[10] = (l >>  8) & 0xff;
  digest[ 9] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[16]) <<  0;
  l |= itoa64_to_int (buf[17]) <<  6;
  l |= itoa64_to_int (buf[18]) << 12;
  l |= itoa64_to_int (buf[19]) << 18;

  digest[14] = (l >>  0) & 0xff;
  digest[13] = (l >>  8) & 0xff;
  digest[12] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[20]) <<  0;
  l |= itoa64_to_int (buf[21]) <<  6;
  l |= itoa64_to_int (buf[22]) << 12;
  l |= itoa64_to_int (buf[23]) << 18;

  digest[17] = (l >>  0) & 0xff;
  digest[16] = (l >>  8) & 0xff;
  digest[15] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[24]) <<  0;
  l |= itoa64_to_int (buf[25]) <<  6;
  l |= itoa64_to_int (buf[26]) << 12;

  digest[19] = (l >>  8) & 0xff;
  digest[18] = (l >> 16) & 0xff;
}

static void sha1aix_encode (const u8 digest[20], u8 buf[27])
{
  int l;

  l = (digest[ 2] << 0) | (digest[ 1] << 8) | (digest[ 0] << 16);

  buf[ 0] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 1] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 2] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 3] = int_to_itoa64 (l & 0x3f);

  l = (digest[ 5] << 0) | (digest[ 4] << 8) | (digest[ 3] << 16);

  buf[ 4] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 5] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 6] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 7] = int_to_itoa64 (l & 0x3f);

  l = (digest[ 8] << 0) | (digest[ 7] << 8) | (digest[ 6] << 16);

  buf[ 8] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 9] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[10] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[11] = int_to_itoa64 (l & 0x3f);

  l = (digest[11] << 0) | (digest[10] << 8) | (digest[ 9] << 16);

  buf[12] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[13] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[14] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[15] = int_to_itoa64 (l & 0x3f);

  l = (digest[14] << 0) | (digest[13] << 8) | (digest[12] << 16);

  buf[16] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[17] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[18] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[19] = int_to_itoa64 (l & 0x3f);

  l = (digest[17] << 0) | (digest[16] << 8) | (digest[15] << 16);

  buf[20] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[21] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[22] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[23] = int_to_itoa64 (l & 0x3f);

  l =                 0 | (digest[19] << 8) | (digest[18] << 16);

  buf[24] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[25] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[26] = int_to_itoa64 (l & 0x3f);
}

static void sha256aix_decode (u8 digest[32], const u8 buf[43])
{
  int l;

  l  = itoa64_to_int (buf[ 0]) <<  0;
  l |= itoa64_to_int (buf[ 1]) <<  6;
  l |= itoa64_to_int (buf[ 2]) << 12;
  l |= itoa64_to_int (buf[ 3]) << 18;

  digest[ 2] = (l >>  0) & 0xff;
  digest[ 1] = (l >>  8) & 0xff;
  digest[ 0] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[ 4]) <<  0;
  l |= itoa64_to_int (buf[ 5]) <<  6;
  l |= itoa64_to_int (buf[ 6]) << 12;
  l |= itoa64_to_int (buf[ 7]) << 18;

  digest[ 5] = (l >>  0) & 0xff;
  digest[ 4] = (l >>  8) & 0xff;
  digest[ 3] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[ 8]) <<  0;
  l |= itoa64_to_int (buf[ 9]) <<  6;
  l |= itoa64_to_int (buf[10]) << 12;
  l |= itoa64_to_int (buf[11]) << 18;

  digest[ 8] = (l >>  0) & 0xff;
  digest[ 7] = (l >>  8) & 0xff;
  digest[ 6] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[12]) <<  0;
  l |= itoa64_to_int (buf[13]) <<  6;
  l |= itoa64_to_int (buf[14]) << 12;
  l |= itoa64_to_int (buf[15]) << 18;

  digest[11] = (l >>  0) & 0xff;
  digest[10] = (l >>  8) & 0xff;
  digest[ 9] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[16]) <<  0;
  l |= itoa64_to_int (buf[17]) <<  6;
  l |= itoa64_to_int (buf[18]) << 12;
  l |= itoa64_to_int (buf[19]) << 18;

  digest[14] = (l >>  0) & 0xff;
  digest[13] = (l >>  8) & 0xff;
  digest[12] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[20]) <<  0;
  l |= itoa64_to_int (buf[21]) <<  6;
  l |= itoa64_to_int (buf[22]) << 12;
  l |= itoa64_to_int (buf[23]) << 18;

  digest[17] = (l >>  0) & 0xff;
  digest[16] = (l >>  8) & 0xff;
  digest[15] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[24]) <<  0;
  l |= itoa64_to_int (buf[25]) <<  6;
  l |= itoa64_to_int (buf[26]) << 12;
  l |= itoa64_to_int (buf[27]) << 18;

  digest[20] = (l >>  0) & 0xff;
  digest[19] = (l >>  8) & 0xff;
  digest[18] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[28]) <<  0;
  l |= itoa64_to_int (buf[29]) <<  6;
  l |= itoa64_to_int (buf[30]) << 12;
  l |= itoa64_to_int (buf[31]) << 18;

  digest[23] = (l >>  0) & 0xff;
  digest[22] = (l >>  8) & 0xff;
  digest[21] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[32]) <<  0;
  l |= itoa64_to_int (buf[33]) <<  6;
  l |= itoa64_to_int (buf[34]) << 12;
  l |= itoa64_to_int (buf[35]) << 18;

  digest[26] = (l >>  0) & 0xff;
  digest[25] = (l >>  8) & 0xff;
  digest[24] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[36]) <<  0;
  l |= itoa64_to_int (buf[37]) <<  6;
  l |= itoa64_to_int (buf[38]) << 12;
  l |= itoa64_to_int (buf[39]) << 18;

  digest[29] = (l >>  0) & 0xff;
  digest[28] = (l >>  8) & 0xff;
  digest[27] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[40]) <<  0;
  l |= itoa64_to_int (buf[41]) <<  6;
  l |= itoa64_to_int (buf[42]) << 12;

  //digest[32] = (l >>  0) & 0xff;
  digest[31] = (l >>  8) & 0xff;
  digest[30] = (l >> 16) & 0xff;
}

static void sha256aix_encode (const u8 digest[32], u8 buf[43])
{
  int l;

  l = (digest[ 2] << 0) | (digest[ 1] << 8) | (digest[ 0] << 16);

  buf[ 0] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 1] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 2] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 3] = int_to_itoa64 (l & 0x3f);

  l = (digest[ 5] << 0) | (digest[ 4] << 8) | (digest[ 3] << 16);

  buf[ 4] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 5] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 6] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 7] = int_to_itoa64 (l & 0x3f);

  l = (digest[ 8] << 0) | (digest[ 7] << 8) | (digest[ 6] << 16);

  buf[ 8] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 9] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[10] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[11] = int_to_itoa64 (l & 0x3f);

  l = (digest[11] << 0) | (digest[10] << 8) | (digest[ 9] << 16);

  buf[12] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[13] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[14] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[15] = int_to_itoa64 (l & 0x3f);

  l = (digest[14] << 0) | (digest[13] << 8) | (digest[12] << 16);

  buf[16] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[17] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[18] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[19] = int_to_itoa64 (l & 0x3f);

  l = (digest[17] << 0) | (digest[16] << 8) | (digest[15] << 16);

  buf[20] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[21] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[22] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[23] = int_to_itoa64 (l & 0x3f);

  l = (digest[20] << 0) | (digest[19] << 8) | (digest[18] << 16);

  buf[24] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[25] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[26] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[27] = int_to_itoa64 (l & 0x3f);

  l = (digest[23] << 0) | (digest[22] << 8) | (digest[21] << 16);

  buf[28] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[29] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[30] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[31] = int_to_itoa64 (l & 0x3f);

  l = (digest[26] << 0) | (digest[25] << 8) | (digest[24] << 16);

  buf[32] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[33] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[34] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[35] = int_to_itoa64 (l & 0x3f);

  l = (digest[29] << 0) | (digest[28] << 8) | (digest[27] << 16);

  buf[36] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[37] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[38] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[39] = int_to_itoa64 (l & 0x3f);

  l =                 0 | (digest[31] << 8) | (digest[30] << 16);

  buf[40] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[41] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[42] = int_to_itoa64 (l & 0x3f); //l >>= 6;
}

static void sha512aix_decode (u8 digest[64], const u8 buf[86])
{
  int l;

  l  = itoa64_to_int (buf[ 0]) <<  0;
  l |= itoa64_to_int (buf[ 1]) <<  6;
  l |= itoa64_to_int (buf[ 2]) << 12;
  l |= itoa64_to_int (buf[ 3]) << 18;

  digest[ 2] = (l >>  0) & 0xff;
  digest[ 1] = (l >>  8) & 0xff;
  digest[ 0] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[ 4]) <<  0;
  l |= itoa64_to_int (buf[ 5]) <<  6;
  l |= itoa64_to_int (buf[ 6]) << 12;
  l |= itoa64_to_int (buf[ 7]) << 18;

  digest[ 5] = (l >>  0) & 0xff;
  digest[ 4] = (l >>  8) & 0xff;
  digest[ 3] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[ 8]) <<  0;
  l |= itoa64_to_int (buf[ 9]) <<  6;
  l |= itoa64_to_int (buf[10]) << 12;
  l |= itoa64_to_int (buf[11]) << 18;

  digest[ 8] = (l >>  0) & 0xff;
  digest[ 7] = (l >>  8) & 0xff;
  digest[ 6] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[12]) <<  0;
  l |= itoa64_to_int (buf[13]) <<  6;
  l |= itoa64_to_int (buf[14]) << 12;
  l |= itoa64_to_int (buf[15]) << 18;

  digest[11] = (l >>  0) & 0xff;
  digest[10] = (l >>  8) & 0xff;
  digest[ 9] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[16]) <<  0;
  l |= itoa64_to_int (buf[17]) <<  6;
  l |= itoa64_to_int (buf[18]) << 12;
  l |= itoa64_to_int (buf[19]) << 18;

  digest[14] = (l >>  0) & 0xff;
  digest[13] = (l >>  8) & 0xff;
  digest[12] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[20]) <<  0;
  l |= itoa64_to_int (buf[21]) <<  6;
  l |= itoa64_to_int (buf[22]) << 12;
  l |= itoa64_to_int (buf[23]) << 18;

  digest[17] = (l >>  0) & 0xff;
  digest[16] = (l >>  8) & 0xff;
  digest[15] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[24]) <<  0;
  l |= itoa64_to_int (buf[25]) <<  6;
  l |= itoa64_to_int (buf[26]) << 12;
  l |= itoa64_to_int (buf[27]) << 18;

  digest[20] = (l >>  0) & 0xff;
  digest[19] = (l >>  8) & 0xff;
  digest[18] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[28]) <<  0;
  l |= itoa64_to_int (buf[29]) <<  6;
  l |= itoa64_to_int (buf[30]) << 12;
  l |= itoa64_to_int (buf[31]) << 18;

  digest[23] = (l >>  0) & 0xff;
  digest[22] = (l >>  8) & 0xff;
  digest[21] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[32]) <<  0;
  l |= itoa64_to_int (buf[33]) <<  6;
  l |= itoa64_to_int (buf[34]) << 12;
  l |= itoa64_to_int (buf[35]) << 18;

  digest[26] = (l >>  0) & 0xff;
  digest[25] = (l >>  8) & 0xff;
  digest[24] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[36]) <<  0;
  l |= itoa64_to_int (buf[37]) <<  6;
  l |= itoa64_to_int (buf[38]) << 12;
  l |= itoa64_to_int (buf[39]) << 18;

  digest[29] = (l >>  0) & 0xff;
  digest[28] = (l >>  8) & 0xff;
  digest[27] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[40]) <<  0;
  l |= itoa64_to_int (buf[41]) <<  6;
  l |= itoa64_to_int (buf[42]) << 12;
  l |= itoa64_to_int (buf[43]) << 18;

  digest[32] = (l >>  0) & 0xff;
  digest[31] = (l >>  8) & 0xff;
  digest[30] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[44]) <<  0;
  l |= itoa64_to_int (buf[45]) <<  6;
  l |= itoa64_to_int (buf[46]) << 12;
  l |= itoa64_to_int (buf[47]) << 18;

  digest[35] = (l >>  0) & 0xff;
  digest[34] = (l >>  8) & 0xff;
  digest[33] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[48]) <<  0;
  l |= itoa64_to_int (buf[49]) <<  6;
  l |= itoa64_to_int (buf[50]) << 12;
  l |= itoa64_to_int (buf[51]) << 18;

  digest[38] = (l >>  0) & 0xff;
  digest[37] = (l >>  8) & 0xff;
  digest[36] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[52]) <<  0;
  l |= itoa64_to_int (buf[53]) <<  6;
  l |= itoa64_to_int (buf[54]) << 12;
  l |= itoa64_to_int (buf[55]) << 18;

  digest[41] = (l >>  0) & 0xff;
  digest[40] = (l >>  8) & 0xff;
  digest[39] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[56]) <<  0;
  l |= itoa64_to_int (buf[57]) <<  6;
  l |= itoa64_to_int (buf[58]) << 12;
  l |= itoa64_to_int (buf[59]) << 18;

  digest[44] = (l >>  0) & 0xff;
  digest[43] = (l >>  8) & 0xff;
  digest[42] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[60]) <<  0;
  l |= itoa64_to_int (buf[61]) <<  6;
  l |= itoa64_to_int (buf[62]) << 12;
  l |= itoa64_to_int (buf[63]) << 18;

  digest[47] = (l >>  0) & 0xff;
  digest[46] = (l >>  8) & 0xff;
  digest[45] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[64]) <<  0;
  l |= itoa64_to_int (buf[65]) <<  6;
  l |= itoa64_to_int (buf[66]) << 12;
  l |= itoa64_to_int (buf[67]) << 18;

  digest[50] = (l >>  0) & 0xff;
  digest[49] = (l >>  8) & 0xff;
  digest[48] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[68]) <<  0;
  l |= itoa64_to_int (buf[69]) <<  6;
  l |= itoa64_to_int (buf[70]) << 12;
  l |= itoa64_to_int (buf[71]) << 18;

  digest[53] = (l >>  0) & 0xff;
  digest[52] = (l >>  8) & 0xff;
  digest[51] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[72]) <<  0;
  l |= itoa64_to_int (buf[73]) <<  6;
  l |= itoa64_to_int (buf[74]) << 12;
  l |= itoa64_to_int (buf[75]) << 18;

  digest[56] = (l >>  0) & 0xff;
  digest[55] = (l >>  8) & 0xff;
  digest[54] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[76]) <<  0;
  l |= itoa64_to_int (buf[77]) <<  6;
  l |= itoa64_to_int (buf[78]) << 12;
  l |= itoa64_to_int (buf[79]) << 18;

  digest[59] = (l >>  0) & 0xff;
  digest[58] = (l >>  8) & 0xff;
  digest[57] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[80]) <<  0;
  l |= itoa64_to_int (buf[81]) <<  6;
  l |= itoa64_to_int (buf[82]) << 12;
  l |= itoa64_to_int (buf[83]) << 18;

  digest[62] = (l >>  0) & 0xff;
  digest[61] = (l >>  8) & 0xff;
  digest[60] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[84]) <<  0;
  l |= itoa64_to_int (buf[85]) <<  6;

  digest[63] = (l >> 16) & 0xff;
}

static void sha512aix_encode (const u8 digest[64], u8 buf[86])
{
  int l;

  l = (digest[ 2] << 0) | (digest[ 1] << 8) | (digest[ 0] << 16);

  buf[ 0] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 1] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 2] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 3] = int_to_itoa64 (l & 0x3f);

  l = (digest[ 5] << 0) | (digest[ 4] << 8) | (digest[ 3] << 16);

  buf[ 4] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 5] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 6] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 7] = int_to_itoa64 (l & 0x3f);

  l = (digest[ 8] << 0) | (digest[ 7] << 8) | (digest[ 6] << 16);

  buf[ 8] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 9] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[10] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[11] = int_to_itoa64 (l & 0x3f);

  l = (digest[11] << 0) | (digest[10] << 8) | (digest[ 9] << 16);

  buf[12] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[13] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[14] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[15] = int_to_itoa64 (l & 0x3f);

  l = (digest[14] << 0) | (digest[13] << 8) | (digest[12] << 16);

  buf[16] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[17] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[18] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[19] = int_to_itoa64 (l & 0x3f);

  l = (digest[17] << 0) | (digest[16] << 8) | (digest[15] << 16);

  buf[20] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[21] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[22] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[23] = int_to_itoa64 (l & 0x3f);

  l = (digest[20] << 0) | (digest[19] << 8) | (digest[18] << 16);

  buf[24] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[25] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[26] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[27] = int_to_itoa64 (l & 0x3f);

  l = (digest[23] << 0) | (digest[22] << 8) | (digest[21] << 16);

  buf[28] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[29] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[30] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[31] = int_to_itoa64 (l & 0x3f);

  l = (digest[26] << 0) | (digest[25] << 8) | (digest[24] << 16);

  buf[32] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[33] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[34] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[35] = int_to_itoa64 (l & 0x3f);

  l = (digest[29] << 0) | (digest[28] << 8) | (digest[27] << 16);

  buf[36] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[37] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[38] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[39] = int_to_itoa64 (l & 0x3f);

  l = (digest[32] << 0) | (digest[31] << 8) | (digest[30] << 16);

  buf[40] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[41] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[42] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[43] = int_to_itoa64 (l & 0x3f);

  l = (digest[35] << 0) | (digest[34] << 8) | (digest[33] << 16);

  buf[44] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[45] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[46] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[47] = int_to_itoa64 (l & 0x3f);

  l = (digest[38] << 0) | (digest[37] << 8) | (digest[36] << 16);

  buf[48] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[49] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[50] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[51] = int_to_itoa64 (l & 0x3f);

  l = (digest[41] << 0) | (digest[40] << 8) | (digest[39] << 16);

  buf[52] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[53] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[54] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[55] = int_to_itoa64 (l & 0x3f);

  l = (digest[44] << 0) | (digest[43] << 8) | (digest[42] << 16);

  buf[56] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[57] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[58] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[59] = int_to_itoa64 (l & 0x3f);

  l = (digest[47] << 0) | (digest[46] << 8) | (digest[45] << 16);

  buf[60] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[61] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[62] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[63] = int_to_itoa64 (l & 0x3f);

  l = (digest[50] << 0) | (digest[49] << 8) | (digest[48] << 16);

  buf[64] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[65] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[66] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[67] = int_to_itoa64 (l & 0x3f);

  l = (digest[53] << 0) | (digest[52] << 8) | (digest[51] << 16);

  buf[68] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[69] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[70] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[71] = int_to_itoa64 (l & 0x3f);

  l = (digest[56] << 0) | (digest[55] << 8) | (digest[54] << 16);

  buf[72] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[73] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[74] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[75] = int_to_itoa64 (l & 0x3f);

  l = (digest[59] << 0) | (digest[58] << 8) | (digest[57] << 16);

  buf[76] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[77] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[78] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[79] = int_to_itoa64 (l & 0x3f);

  l = (digest[62] << 0) | (digest[61] << 8) | (digest[60] << 16);

  buf[80] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[81] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[82] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[83] = int_to_itoa64 (l & 0x3f);

  l =                                         (digest[63] << 16);

  buf[84] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[85] = int_to_itoa64 (l & 0x3f); //l >>= 6;
}

static void netbsd_sha1crypt_decode (u8 digest[20], const u8 buf[28], u8 *additional_byte)
{
  int l;

  l  = itoa64_to_int (buf[ 0]) <<  0;
  l |= itoa64_to_int (buf[ 1]) <<  6;
  l |= itoa64_to_int (buf[ 2]) << 12;
  l |= itoa64_to_int (buf[ 3]) << 18;

  digest[ 2] = (l >>  0) & 0xff;
  digest[ 1] = (l >>  8) & 0xff;
  digest[ 0] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[ 4]) <<  0;
  l |= itoa64_to_int (buf[ 5]) <<  6;
  l |= itoa64_to_int (buf[ 6]) << 12;
  l |= itoa64_to_int (buf[ 7]) << 18;

  digest[ 5] = (l >>  0) & 0xff;
  digest[ 4] = (l >>  8) & 0xff;
  digest[ 3] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[ 8]) <<  0;
  l |= itoa64_to_int (buf[ 9]) <<  6;
  l |= itoa64_to_int (buf[10]) << 12;
  l |= itoa64_to_int (buf[11]) << 18;

  digest[ 8] = (l >>  0) & 0xff;
  digest[ 7] = (l >>  8) & 0xff;
  digest[ 6] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[12]) <<  0;
  l |= itoa64_to_int (buf[13]) <<  6;
  l |= itoa64_to_int (buf[14]) << 12;
  l |= itoa64_to_int (buf[15]) << 18;

  digest[11] = (l >>  0) & 0xff;
  digest[10] = (l >>  8) & 0xff;
  digest[ 9] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[16]) <<  0;
  l |= itoa64_to_int (buf[17]) <<  6;
  l |= itoa64_to_int (buf[18]) << 12;
  l |= itoa64_to_int (buf[19]) << 18;

  digest[14] = (l >>  0) & 0xff;
  digest[13] = (l >>  8) & 0xff;
  digest[12] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[20]) <<  0;
  l |= itoa64_to_int (buf[21]) <<  6;
  l |= itoa64_to_int (buf[22]) << 12;
  l |= itoa64_to_int (buf[23]) << 18;

  digest[17] = (l >>  0) & 0xff;
  digest[16] = (l >>  8) & 0xff;
  digest[15] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[24]) <<  0;
  l |= itoa64_to_int (buf[25]) <<  6;
  l |= itoa64_to_int (buf[26]) << 12;
  l |= itoa64_to_int (buf[27]) << 18;

  additional_byte[0] = (l >>  0) & 0xff;
  digest[19] = (l >>  8) & 0xff;
  digest[18] = (l >> 16) & 0xff;
}

static void netbsd_sha1crypt_encode (const u8 digest[20], u8 additional_byte, u8 buf[30])
{
  int l;

  l = (digest[ 2] << 0) | (digest[ 1] << 8) | (digest[ 0] << 16);

  buf[ 0] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 1] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 2] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 3] = int_to_itoa64 (l & 0x3f);

  l = (digest[ 5] << 0) | (digest[ 4] << 8) | (digest[ 3] << 16);

  buf[ 4] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 5] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 6] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 7] = int_to_itoa64 (l & 0x3f);

  l = (digest[ 8] << 0) | (digest[ 7] << 8) | (digest[ 6] << 16);

  buf[ 8] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 9] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[10] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[11] = int_to_itoa64 (l & 0x3f);

  l = (digest[11] << 0) | (digest[10] << 8) | (digest[ 9] << 16);

  buf[12] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[13] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[14] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[15] = int_to_itoa64 (l & 0x3f);

  l = (digest[14] << 0) | (digest[13] << 8) | (digest[12] << 16);

  buf[16] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[17] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[18] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[19] = int_to_itoa64 (l & 0x3f);

  l = (digest[17] << 0) | (digest[16] << 8) | (digest[15] << 16);

  buf[20] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[21] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[22] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[23] = int_to_itoa64 (l & 0x3f);

  l = (additional_byte << 0) | (digest[19] << 8) | (digest[18] << 16);

  buf[24] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[25] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[26] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[27] = int_to_itoa64 (l & 0x3f);
  buf[28] = 0;
}

static void sha256crypt_decode (u8 digest[32], const u8 buf[43])
{
  int l;

  l  = itoa64_to_int (buf[ 0]) <<  0;
  l |= itoa64_to_int (buf[ 1]) <<  6;
  l |= itoa64_to_int (buf[ 2]) << 12;
  l |= itoa64_to_int (buf[ 3]) << 18;

  digest[ 0] = (l >> 16) & 0xff;
  digest[10] = (l >>  8) & 0xff;
  digest[20] = (l >>  0) & 0xff;

  l  = itoa64_to_int (buf[ 4]) <<  0;
  l |= itoa64_to_int (buf[ 5]) <<  6;
  l |= itoa64_to_int (buf[ 6]) << 12;
  l |= itoa64_to_int (buf[ 7]) << 18;

  digest[21] = (l >> 16) & 0xff;
  digest[ 1] = (l >>  8) & 0xff;
  digest[11] = (l >>  0) & 0xff;

  l  = itoa64_to_int (buf[ 8]) <<  0;
  l |= itoa64_to_int (buf[ 9]) <<  6;
  l |= itoa64_to_int (buf[10]) << 12;
  l |= itoa64_to_int (buf[11]) << 18;

  digest[12] = (l >> 16) & 0xff;
  digest[22] = (l >>  8) & 0xff;
  digest[ 2] = (l >>  0) & 0xff;

  l  = itoa64_to_int (buf[12]) <<  0;
  l |= itoa64_to_int (buf[13]) <<  6;
  l |= itoa64_to_int (buf[14]) << 12;
  l |= itoa64_to_int (buf[15]) << 18;

  digest[ 3] = (l >> 16) & 0xff;
  digest[13] = (l >>  8) & 0xff;
  digest[23] = (l >>  0) & 0xff;

  l  = itoa64_to_int (buf[16]) <<  0;
  l |= itoa64_to_int (buf[17]) <<  6;
  l |= itoa64_to_int (buf[18]) << 12;
  l |= itoa64_to_int (buf[19]) << 18;

  digest[24] = (l >> 16) & 0xff;
  digest[ 4] = (l >>  8) & 0xff;
  digest[14] = (l >>  0) & 0xff;

  l  = itoa64_to_int (buf[20]) <<  0;
  l |= itoa64_to_int (buf[21]) <<  6;
  l |= itoa64_to_int (buf[22]) << 12;
  l |= itoa64_to_int (buf[23]) << 18;

  digest[15] = (l >> 16) & 0xff;
  digest[25] = (l >>  8) & 0xff;
  digest[ 5] = (l >>  0) & 0xff;

  l  = itoa64_to_int (buf[24]) <<  0;
  l |= itoa64_to_int (buf[25]) <<  6;
  l |= itoa64_to_int (buf[26]) << 12;
  l |= itoa64_to_int (buf[27]) << 18;

  digest[ 6] = (l >> 16) & 0xff;
  digest[16] = (l >>  8) & 0xff;
  digest[26] = (l >>  0) & 0xff;

  l  = itoa64_to_int (buf[28]) <<  0;
  l |= itoa64_to_int (buf[29]) <<  6;
  l |= itoa64_to_int (buf[30]) << 12;
  l |= itoa64_to_int (buf[31]) << 18;

  digest[27] = (l >> 16) & 0xff;
  digest[ 7] = (l >>  8) & 0xff;
  digest[17] = (l >>  0) & 0xff;

  l  = itoa64_to_int (buf[32]) <<  0;
  l |= itoa64_to_int (buf[33]) <<  6;
  l |= itoa64_to_int (buf[34]) << 12;
  l |= itoa64_to_int (buf[35]) << 18;

  digest[18] = (l >> 16) & 0xff;
  digest[28] = (l >>  8) & 0xff;
  digest[ 8] = (l >>  0) & 0xff;

  l  = itoa64_to_int (buf[36]) <<  0;
  l |= itoa64_to_int (buf[37]) <<  6;
  l |= itoa64_to_int (buf[38]) << 12;
  l |= itoa64_to_int (buf[39]) << 18;

  digest[ 9] = (l >> 16) & 0xff;
  digest[19] = (l >>  8) & 0xff;
  digest[29] = (l >>  0) & 0xff;

  l  = itoa64_to_int (buf[40]) <<  0;
  l |= itoa64_to_int (buf[41]) <<  6;
  l |= itoa64_to_int (buf[42]) << 12;

  digest[31] = (l >>  8) & 0xff;
  digest[30] = (l >>  0) & 0xff;
}

static void sha256crypt_encode (const u8 digest[32], u8 buf[43])
{
  int l;

  l = (digest[ 0] << 16) | (digest[10] << 8) | (digest[20] << 0);

  buf[ 0] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 1] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 2] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 3] = int_to_itoa64 (l & 0x3f); //l >>= 6;

  l = (digest[21] << 16) | (digest[ 1] << 8) | (digest[11] << 0);

  buf[ 4] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 5] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 6] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 7] = int_to_itoa64 (l & 0x3f); //l >>= 6;

  l = (digest[12] << 16) | (digest[22] << 8) | (digest[ 2] << 0);

  buf[ 8] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 9] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[10] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[11] = int_to_itoa64 (l & 0x3f); //l >>= 6;

  l = (digest[ 3] << 16) | (digest[13] << 8) | (digest[23] << 0);

  buf[12] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[13] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[14] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[15] = int_to_itoa64 (l & 0x3f); //l >>= 6;

  l = (digest[24] << 16) | (digest[ 4] << 8) | (digest[14] << 0);

  buf[16] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[17] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[18] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[19] = int_to_itoa64 (l & 0x3f); //l >>= 6;

  l = (digest[15] << 16) | (digest[25] << 8) | (digest[ 5] << 0);

  buf[20] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[21] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[22] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[23] = int_to_itoa64 (l & 0x3f); //l >>= 6;

  l = (digest[ 6] << 16) | (digest[16] << 8) | (digest[26] << 0);

  buf[24] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[25] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[26] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[27] = int_to_itoa64 (l & 0x3f); //l >>= 6;

  l = (digest[27] << 16) | (digest[ 7] << 8) | (digest[17] << 0);

  buf[28] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[29] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[30] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[31] = int_to_itoa64 (l & 0x3f); //l >>= 6;

  l = (digest[18] << 16) | (digest[28] << 8) | (digest[ 8] << 0);

  buf[32] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[33] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[34] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[35] = int_to_itoa64 (l & 0x3f); //l >>= 6;

  l = (digest[ 9] << 16) | (digest[19] << 8) | (digest[29] << 0);

  buf[36] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[37] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[38] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[39] = int_to_itoa64 (l & 0x3f); //l >>= 6;

  l =                  0 | (digest[31] << 8) | (digest[30] << 0);

  buf[40] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[41] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[42] = int_to_itoa64 (l & 0x3f); //l >>= 6;
}

static void drupal7_decode (u8 digest[64], const u8 buf[44])
{
  int l;

  l  = itoa64_to_int (buf[ 0]) <<  0;
  l |= itoa64_to_int (buf[ 1]) <<  6;
  l |= itoa64_to_int (buf[ 2]) << 12;
  l |= itoa64_to_int (buf[ 3]) << 18;

  digest[ 0] = (l >>  0) & 0xff;
  digest[ 1] = (l >>  8) & 0xff;
  digest[ 2] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[ 4]) <<  0;
  l |= itoa64_to_int (buf[ 5]) <<  6;
  l |= itoa64_to_int (buf[ 6]) << 12;
  l |= itoa64_to_int (buf[ 7]) << 18;

  digest[ 3] = (l >>  0) & 0xff;
  digest[ 4] = (l >>  8) & 0xff;
  digest[ 5] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[ 8]) <<  0;
  l |= itoa64_to_int (buf[ 9]) <<  6;
  l |= itoa64_to_int (buf[10]) << 12;
  l |= itoa64_to_int (buf[11]) << 18;

  digest[ 6] = (l >>  0) & 0xff;
  digest[ 7] = (l >>  8) & 0xff;
  digest[ 8] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[12]) <<  0;
  l |= itoa64_to_int (buf[13]) <<  6;
  l |= itoa64_to_int (buf[14]) << 12;
  l |= itoa64_to_int (buf[15]) << 18;

  digest[ 9] = (l >>  0) & 0xff;
  digest[10] = (l >>  8) & 0xff;
  digest[11] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[16]) <<  0;
  l |= itoa64_to_int (buf[17]) <<  6;
  l |= itoa64_to_int (buf[18]) << 12;
  l |= itoa64_to_int (buf[19]) << 18;

  digest[12] = (l >>  0) & 0xff;
  digest[13] = (l >>  8) & 0xff;
  digest[14] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[20]) <<  0;
  l |= itoa64_to_int (buf[21]) <<  6;
  l |= itoa64_to_int (buf[22]) << 12;
  l |= itoa64_to_int (buf[23]) << 18;

  digest[15] = (l >>  0) & 0xff;
  digest[16] = (l >>  8) & 0xff;
  digest[17] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[24]) <<  0;
  l |= itoa64_to_int (buf[25]) <<  6;
  l |= itoa64_to_int (buf[26]) << 12;
  l |= itoa64_to_int (buf[27]) << 18;

  digest[18] = (l >>  0) & 0xff;
  digest[19] = (l >>  8) & 0xff;
  digest[20] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[28]) <<  0;
  l |= itoa64_to_int (buf[29]) <<  6;
  l |= itoa64_to_int (buf[30]) << 12;
  l |= itoa64_to_int (buf[31]) << 18;

  digest[21] = (l >>  0) & 0xff;
  digest[22] = (l >>  8) & 0xff;
  digest[23] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[32]) <<  0;
  l |= itoa64_to_int (buf[33]) <<  6;
  l |= itoa64_to_int (buf[34]) << 12;
  l |= itoa64_to_int (buf[35]) << 18;

  digest[24] = (l >>  0) & 0xff;
  digest[25] = (l >>  8) & 0xff;
  digest[26] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[36]) <<  0;
  l |= itoa64_to_int (buf[37]) <<  6;
  l |= itoa64_to_int (buf[38]) << 12;
  l |= itoa64_to_int (buf[39]) << 18;

  digest[27] = (l >>  0) & 0xff;
  digest[28] = (l >>  8) & 0xff;
  digest[29] = (l >> 16) & 0xff;

  l  = itoa64_to_int (buf[40]) <<  0;
  l |= itoa64_to_int (buf[41]) <<  6;
  l |= itoa64_to_int (buf[42]) << 12;
  l |= itoa64_to_int (buf[43]) << 18;

  digest[30] = (l >>  0) & 0xff;
  digest[31] = (l >>  8) & 0xff;
  digest[32] = (l >> 16) & 0xff;

  digest[33] = 0;
  digest[34] = 0;
  digest[35] = 0;
  digest[36] = 0;
  digest[37] = 0;
  digest[38] = 0;
  digest[39] = 0;
  digest[40] = 0;
  digest[41] = 0;
  digest[42] = 0;
  digest[43] = 0;
  digest[44] = 0;
  digest[45] = 0;
  digest[46] = 0;
  digest[47] = 0;
  digest[48] = 0;
  digest[49] = 0;
  digest[50] = 0;
  digest[51] = 0;
  digest[52] = 0;
  digest[53] = 0;
  digest[54] = 0;
  digest[55] = 0;
  digest[56] = 0;
  digest[57] = 0;
  digest[58] = 0;
  digest[59] = 0;
  digest[60] = 0;
  digest[61] = 0;
  digest[62] = 0;
  digest[63] = 0;
}

static void drupal7_encode (const u8 digest[64], u8 buf[43])
{
  int l;

  l = (digest[ 0] << 0) | (digest[ 1] << 8) | (digest[ 2] << 16);

  buf[ 0] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 1] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 2] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 3] = int_to_itoa64 (l & 0x3f);

  l = (digest[ 3] << 0) | (digest[ 4] << 8) | (digest[ 5] << 16);

  buf[ 4] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 5] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 6] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 7] = int_to_itoa64 (l & 0x3f);

  l = (digest[ 6] << 0) | (digest[ 7] << 8) | (digest[ 8] << 16);

  buf[ 8] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[ 9] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[10] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[11] = int_to_itoa64 (l & 0x3f);

  l = (digest[ 9] << 0) | (digest[10] << 8) | (digest[11] << 16);

  buf[12] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[13] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[14] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[15] = int_to_itoa64 (l & 0x3f);

  l = (digest[12] << 0) | (digest[13] << 8) | (digest[14] << 16);

  buf[16] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[17] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[18] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[19] = int_to_itoa64 (l & 0x3f);

  l = (digest[15] << 0) | (digest[16] << 8) | (digest[17] << 16);

  buf[20] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[21] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[22] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[23] = int_to_itoa64 (l & 0x3f);

  l = (digest[18] << 0) | (digest[19] << 8) | (digest[20] << 16);

  buf[24] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[25] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[26] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[27] = int_to_itoa64 (l & 0x3f);

  l = (digest[21] << 0) | (digest[22] << 8) | (digest[23] << 16);

  buf[28] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[29] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[30] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[31] = int_to_itoa64 (l & 0x3f);

  l = (digest[24] << 0) | (digest[25] << 8) | (digest[26] << 16);

  buf[32] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[33] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[34] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[35] = int_to_itoa64 (l & 0x3f);

  l = (digest[27] << 0) | (digest[28] << 8) | (digest[29] << 16);

  buf[36] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[37] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[38] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[39] = int_to_itoa64 (l & 0x3f);

  l = (digest[30] << 0) | (digest[31] << 8) | (digest[32] << 16);

  buf[40] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[41] = int_to_itoa64 (l & 0x3f); l >>= 6;
  buf[42] = int_to_itoa64 (l & 0x3f); //l >>= 6;
  //buf[43] = int_to_itoa64 (l & 0x3f);
}





int luks_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig, const int keyslot_idx)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  luks_t *luks = (luks_t *) hash_buf->esalt;

  if (input_len == 0) return (PARSER_HASH_LENGTH);

  FILE *fp = fopen ((const char *) input_buf, "rb");

  if (fp == NULL) return (PARSER_HASH_FILE);

  struct luks_phdr hdr;

  const size_t nread = hc_fread (&hdr, sizeof (hdr), 1, fp);

  if (nread != 1)
  {
    fclose (fp);

    return (PARSER_LUKS_FILE_SIZE);
  }

  // copy digest which we're not using ;)

  u32 *mkDigest_ptr = (u32 *) hdr.mkDigest;

  digest[0] = mkDigest_ptr[0];
  digest[1] = mkDigest_ptr[1];
  digest[2] = mkDigest_ptr[2];
  digest[3] = mkDigest_ptr[3];
  digest[4] = mkDigest_ptr[4];
  digest[5] = 0;
  digest[6] = 0;
  digest[7] = 0;

  // verify the content

  char luks_magic[6] = LUKS_MAGIC;

  if (memcmp (hdr.magic, luks_magic, LUKS_MAGIC_L) != 0)
  {
    fclose (fp);

    return (PARSER_LUKS_MAGIC);
  }

  if (byte_swap_16 (hdr.version) != 1)
  {
    fclose (fp);

    return (PARSER_LUKS_VERSION);
  }

  if (strcmp (hdr.cipherName, "aes") == 0)
  {
    luks->cipher_type = HC_LUKS_CIPHER_TYPE_AES;
  }
  else if (strcmp (hdr.cipherName, "serpent") == 0)
  {
    luks->cipher_type = HC_LUKS_CIPHER_TYPE_SERPENT;
  }
  else if (strcmp (hdr.cipherName, "twofish") == 0)
  {
    luks->cipher_type = HC_LUKS_CIPHER_TYPE_TWOFISH;
  }
  else
  {
    fclose (fp);

    return (PARSER_LUKS_CIPHER_TYPE);
  }

  if (strcmp (hdr.cipherMode, "cbc-essiv:sha256") == 0)
  {
    luks->cipher_mode = HC_LUKS_CIPHER_MODE_CBC_ESSIV;
  }
  else if (strcmp (hdr.cipherMode, "cbc-plain") == 0)
  {
    luks->cipher_mode = HC_LUKS_CIPHER_MODE_CBC_PLAIN;
  }
  else if (strcmp (hdr.cipherMode, "cbc-plain64") == 0)
  {
    luks->cipher_mode = HC_LUKS_CIPHER_MODE_CBC_PLAIN;
  }
  else if (strcmp (hdr.cipherMode, "xts-plain") == 0)
  {
    luks->cipher_mode = HC_LUKS_CIPHER_MODE_XTS_PLAIN;
  }
  else if (strcmp (hdr.cipherMode, "xts-plain64") == 0)
  {
    luks->cipher_mode = HC_LUKS_CIPHER_MODE_XTS_PLAIN;
  }
  else
  {
    fclose (fp);

    return (PARSER_LUKS_CIPHER_MODE);
  }

  if (strcmp (hdr.hashSpec, "sha1") == 0)
  {
    luks->hash_type = HC_LUKS_HASH_TYPE_SHA1;
  }
  else if (strcmp (hdr.hashSpec, "sha256") == 0)
  {
    luks->hash_type = HC_LUKS_HASH_TYPE_SHA256;
  }
  else if (strcmp (hdr.hashSpec, "sha512") == 0)
  {
    luks->hash_type = HC_LUKS_HASH_TYPE_SHA512;
  }
  else if (strcmp (hdr.hashSpec, "ripemd160") == 0)
  {
    luks->hash_type = HC_LUKS_HASH_TYPE_RIPEMD160;
  }
  else if (strcmp (hdr.hashSpec, "whirlpool") == 0)
  {
    luks->hash_type = HC_LUKS_HASH_TYPE_WHIRLPOOL;
  }
  else
  {
    fclose (fp);

    return (PARSER_LUKS_HASH_TYPE);
  }

  const u32 keyBytes = byte_swap_32 (hdr.keyBytes);

  if (keyBytes == 16)
  {
    luks->key_size = HC_LUKS_KEY_SIZE_128;
  }
  else if (keyBytes == 32)
  {
    luks->key_size = HC_LUKS_KEY_SIZE_256;
  }
  else if (keyBytes == 64)
  {
    luks->key_size = HC_LUKS_KEY_SIZE_512;
  }
  else
  {
    fclose (fp);

    return (PARSER_LUKS_KEY_SIZE);
  }

  // find the correct kernel based on hash and cipher

  // we need to do this kind of check, otherwise an eventual matching hash from the potfile overwrites the kern_type with an eventual invalid one

  if (hashconfig->kern_type == (u32) -1)
  {
    if ((luks->hash_type == HC_LUKS_HASH_TYPE_SHA1) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_AES))
    {
      hashconfig->kern_type = KERN_TYPE_LUKS_SHA1_AES;
    }
    else if ((luks->hash_type == HC_LUKS_HASH_TYPE_SHA1) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_SERPENT))
    {
      hashconfig->kern_type = KERN_TYPE_LUKS_SHA1_SERPENT;
    }
    else if ((luks->hash_type == HC_LUKS_HASH_TYPE_SHA1) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_TWOFISH))
    {
      hashconfig->kern_type = KERN_TYPE_LUKS_SHA1_TWOFISH;
    }
    else if ((luks->hash_type == HC_LUKS_HASH_TYPE_SHA256) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_AES))
    {
      hashconfig->kern_type = KERN_TYPE_LUKS_SHA256_AES;
    }
    else if ((luks->hash_type == HC_LUKS_HASH_TYPE_SHA256) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_SERPENT))
    {
      hashconfig->kern_type = KERN_TYPE_LUKS_SHA256_SERPENT;
    }
    else if ((luks->hash_type == HC_LUKS_HASH_TYPE_SHA256) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_TWOFISH))
    {
      hashconfig->kern_type = KERN_TYPE_LUKS_SHA256_TWOFISH;
    }
    else if ((luks->hash_type == HC_LUKS_HASH_TYPE_SHA512) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_AES))
    {
      hashconfig->kern_type = KERN_TYPE_LUKS_SHA512_AES;
    }
    else if ((luks->hash_type == HC_LUKS_HASH_TYPE_SHA512) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_SERPENT))
    {
      hashconfig->kern_type = KERN_TYPE_LUKS_SHA512_SERPENT;
    }
    else if ((luks->hash_type == HC_LUKS_HASH_TYPE_SHA512) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_TWOFISH))
    {
      hashconfig->kern_type = KERN_TYPE_LUKS_SHA512_TWOFISH;
    }
    else if ((luks->hash_type == HC_LUKS_HASH_TYPE_RIPEMD160) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_AES))
    {
      hashconfig->kern_type = KERN_TYPE_LUKS_RIPEMD160_AES;
    }
    else if ((luks->hash_type == HC_LUKS_HASH_TYPE_RIPEMD160) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_SERPENT))
    {
      hashconfig->kern_type = KERN_TYPE_LUKS_RIPEMD160_SERPENT;
    }
    else if ((luks->hash_type == HC_LUKS_HASH_TYPE_RIPEMD160) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_TWOFISH))
    {
      hashconfig->kern_type = KERN_TYPE_LUKS_RIPEMD160_TWOFISH;
    }
    else if ((luks->hash_type == HC_LUKS_HASH_TYPE_WHIRLPOOL) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_AES))
    {
      hashconfig->kern_type = KERN_TYPE_LUKS_WHIRLPOOL_AES;
    }
    else if ((luks->hash_type == HC_LUKS_HASH_TYPE_WHIRLPOOL) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_SERPENT))
    {
      hashconfig->kern_type = KERN_TYPE_LUKS_WHIRLPOOL_SERPENT;
    }
    else if ((luks->hash_type == HC_LUKS_HASH_TYPE_WHIRLPOOL) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_TWOFISH))
    {
      hashconfig->kern_type = KERN_TYPE_LUKS_WHIRLPOOL_TWOFISH;
    }
    else
    {
      fclose (fp);

      return (PARSER_LUKS_HASH_CIPHER);
    }
  }
  else
  {
         if ((hashconfig->kern_type == KERN_TYPE_LUKS_SHA1_AES)          && (luks->hash_type == HC_LUKS_HASH_TYPE_SHA1) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_AES))
    {
      // OK
    }
    else if ((hashconfig->kern_type == KERN_TYPE_LUKS_SHA1_SERPENT)      && (luks->hash_type == HC_LUKS_HASH_TYPE_SHA1) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_SERPENT))
    {
      // OK
    }
    else if ((hashconfig->kern_type == KERN_TYPE_LUKS_SHA1_TWOFISH)      && (luks->hash_type == HC_LUKS_HASH_TYPE_SHA1) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_TWOFISH))
    {
      // OK
    }
    else if ((hashconfig->kern_type == KERN_TYPE_LUKS_SHA256_AES)        && (luks->hash_type == HC_LUKS_HASH_TYPE_SHA256) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_AES))
    {
      // OK
    }
    else if ((hashconfig->kern_type == KERN_TYPE_LUKS_SHA256_SERPENT)    && (luks->hash_type == HC_LUKS_HASH_TYPE_SHA256) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_SERPENT))
    {
      // OK
    }
    else if ((hashconfig->kern_type == KERN_TYPE_LUKS_SHA256_TWOFISH)    && (luks->hash_type == HC_LUKS_HASH_TYPE_SHA256) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_TWOFISH))
    {
      // OK
    }
    else if ((hashconfig->kern_type == KERN_TYPE_LUKS_SHA512_AES)        && (luks->hash_type == HC_LUKS_HASH_TYPE_SHA512) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_AES))
    {
      // OK
    }
    else if ((hashconfig->kern_type == KERN_TYPE_LUKS_SHA512_SERPENT)    && (luks->hash_type == HC_LUKS_HASH_TYPE_SHA512) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_SERPENT))
    {
      // OK
    }
    else if ((hashconfig->kern_type == KERN_TYPE_LUKS_SHA512_TWOFISH)    && (luks->hash_type == HC_LUKS_HASH_TYPE_SHA512) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_TWOFISH))
    {
      // OK
    }
    else if ((hashconfig->kern_type == KERN_TYPE_LUKS_RIPEMD160_AES)     && (luks->hash_type == HC_LUKS_HASH_TYPE_RIPEMD160) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_AES))
    {
      // OK
    }
    else if ((hashconfig->kern_type == KERN_TYPE_LUKS_RIPEMD160_SERPENT) && (luks->hash_type == HC_LUKS_HASH_TYPE_RIPEMD160) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_SERPENT))
    {
      // OK
    }
    else if ((hashconfig->kern_type == KERN_TYPE_LUKS_RIPEMD160_TWOFISH) && (luks->hash_type == HC_LUKS_HASH_TYPE_RIPEMD160) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_TWOFISH))
    {
      // OK
    }
    else if ((hashconfig->kern_type == KERN_TYPE_LUKS_WHIRLPOOL_AES)     && (luks->hash_type == HC_LUKS_HASH_TYPE_WHIRLPOOL) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_AES))
    {
      // OK
    }
    else if ((hashconfig->kern_type == KERN_TYPE_LUKS_WHIRLPOOL_SERPENT) && (luks->hash_type == HC_LUKS_HASH_TYPE_WHIRLPOOL) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_SERPENT))
    {
      // OK
    }
    else if ((hashconfig->kern_type == KERN_TYPE_LUKS_WHIRLPOOL_TWOFISH) && (luks->hash_type == HC_LUKS_HASH_TYPE_WHIRLPOOL) && (luks->cipher_type == HC_LUKS_CIPHER_TYPE_TWOFISH))
    {
      // OK
    }
    else
    {
      fclose (fp);

      return (PARSER_LUKS_HASH_CIPHER);
    }
  }

  // verify the selected keyslot informations

  const u32 active  = byte_swap_32 (hdr.keyblock[keyslot_idx].active);
  const u32 stripes = byte_swap_32 (hdr.keyblock[keyslot_idx].stripes);

  if (active  != LUKS_KEY_ENABLED)
  {
    fclose (fp);

    return (PARSER_LUKS_KEY_DISABLED);
  }

  if (stripes != LUKS_STRIPES)
  {
    fclose (fp);

    return (PARSER_LUKS_KEY_STRIPES);
  }

  // configure the salt (not esalt)

  u32 *passwordSalt_ptr = (u32 *) hdr.keyblock[keyslot_idx].passwordSalt;

  salt->salt_buf[0] = passwordSalt_ptr[0];
  salt->salt_buf[1] = passwordSalt_ptr[1];
  salt->salt_buf[2] = passwordSalt_ptr[2];
  salt->salt_buf[3] = passwordSalt_ptr[3];
  salt->salt_buf[4] = passwordSalt_ptr[4];
  salt->salt_buf[5] = passwordSalt_ptr[5];
  salt->salt_buf[6] = passwordSalt_ptr[6];
  salt->salt_buf[7] = passwordSalt_ptr[7];

  salt->salt_len = LUKS_SALTSIZE;

  const u32 passwordIterations = byte_swap_32 (hdr.keyblock[keyslot_idx].passwordIterations);

  salt->salt_iter = passwordIterations - 1;

  // Load AF data for this keyslot into esalt

  const u32 keyMaterialOffset = byte_swap_32 (hdr.keyblock[keyslot_idx].keyMaterialOffset);

  const int rc_seek1 = fseeko (fp, keyMaterialOffset * 512, SEEK_SET);

  if (rc_seek1 == -1)
  {
    fclose (fp);

    return (PARSER_LUKS_FILE_SIZE);
  }

  const size_t nread2 = hc_fread (luks->af_src_buf, keyBytes, stripes, fp);

  if (nread2 != stripes)
  {
    fclose (fp);

    return (PARSER_LUKS_FILE_SIZE);
  }

  // finally, copy some encrypted payload data for entropy check

  const u32 payloadOffset = byte_swap_32 (hdr.payloadOffset);

  const int rc_seek2 = fseeko (fp, payloadOffset * 512, SEEK_SET);

  if (rc_seek2 == -1)
  {
    fclose (fp);

    return (PARSER_LUKS_FILE_SIZE);
  }

  const size_t nread3 = hc_fread (luks->ct_buf, sizeof (u32), 128, fp);

  if (nread3 != 128)
  {
    fclose (fp);

    return (PARSER_LUKS_FILE_SIZE);
  }

  // that should be it, close the fp

  fclose (fp);

  return (PARSER_OK);
}

int cisco4_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt = 1;

  token.len[0]  = 43;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_BASE64B;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];
  const int hash_len = token.len[0];

  u8 tmp_buf[100] = { 0 };

  base64_decode (itoa64_to_int, (const u8 *) hash_pos, hash_len, tmp_buf);

  memcpy (digest, tmp_buf, 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA256M_A;
    digest[1] -= SHA256M_B;
    digest[2] -= SHA256M_C;
    digest[3] -= SHA256M_D;
    digest[4] -= SHA256M_E;
    digest[5] -= SHA256M_F;
    digest[6] -= SHA256M_G;
    digest[7] -= SHA256M_H;
  }

  return (PARSER_OK);
}

int arubaos_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt = 2;

  token.len[0]  = 10;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  token.len[1]  = 40;
  token.attr[1] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[1];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA1M_A;
    digest[1] -= SHA1M_B;
    digest[2] -= SHA1M_C;
    digest[3] -= SHA1M_D;
    digest[4] -= SHA1M_E;
  }

  const u8 *salt_pos = token.buf[0];
  const int salt_len = token.len[0];

  if ((salt_pos[8] != '0') || (salt_pos[9] != '1')) return (PARSER_SIGNATURE_UNMATCHED);

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int macos1_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt = 2;

  token.len[0]  = 8;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  token.len[1]  = 40;
  token.attr[1] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[1];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA1M_A;
    digest[1] -= SHA1M_B;
    digest[2] -= SHA1M_C;
    digest[3] -= SHA1M_D;
    digest[4] -= SHA1M_E;
  }

  const u8 *salt_pos = token.buf[0];
  const int salt_len = token.len[0];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int macos512_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u64 *digest = (u64 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt = 2;

  token.len[0]  = 8;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  token.len[1]  = 128;
  token.attr[1] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[1];

  digest[0] = hex_to_u64 (hash_pos +   0);
  digest[1] = hex_to_u64 (hash_pos +  16);
  digest[2] = hex_to_u64 (hash_pos +  32);
  digest[3] = hex_to_u64 (hash_pos +  48);
  digest[4] = hex_to_u64 (hash_pos +  64);
  digest[5] = hex_to_u64 (hash_pos +  80);
  digest[6] = hex_to_u64 (hash_pos +  96);
  digest[7] = hex_to_u64 (hash_pos + 112);

  digest[0] = byte_swap_64 (digest[0]);
  digest[1] = byte_swap_64 (digest[1]);
  digest[2] = byte_swap_64 (digest[2]);
  digest[3] = byte_swap_64 (digest[3]);
  digest[4] = byte_swap_64 (digest[4]);
  digest[5] = byte_swap_64 (digest[5]);
  digest[6] = byte_swap_64 (digest[6]);
  digest[7] = byte_swap_64 (digest[7]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA512M_A;
    digest[1] -= SHA512M_B;
    digest[2] -= SHA512M_C;
    digest[3] -= SHA512M_D;
    digest[4] -= SHA512M_E;
    digest[5] -= SHA512M_F;
    digest[6] -= SHA512M_G;
    digest[7] -= SHA512M_H;
  }

  const u8 *salt_pos = token.buf[0];
  const int salt_len = token.len[0];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int osc_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 32;
  token.len_max[0] = 32;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len[1]     = 2;
  token.attr[1]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= MD5M_A;
    digest[1] -= MD5M_B;
    digest[2] -= MD5M_C;
    digest[3] -= MD5M_D;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int netscreen_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 30;
  token.len_max[0] = 30;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  token.len_min[1] = 1;
  token.len_max[1] = SALT_MAX;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  // unscramble

  u8 clean_input_buf[32] = { 0 };

  char sig[6] = { 'n', 'r', 'c', 's', 't', 'n' };
  int  pos[6] = {   0,   6,  12,  17,  23,  29 };

  for (int i = 0, j = 0, k = 0; i < 30; i++)
  {
    if (i == pos[j])
    {
      if (sig[j] != hash_pos[i]) return (PARSER_SIGNATURE_UNMATCHED);

      j++;
    }
    else
    {
      clean_input_buf[k] = hash_pos[i];

      k++;
    }
  }

  // base64 decode

  u32 a, b, c, d, e, f;

  a = base64_to_int (clean_input_buf[ 0] & 0x7f);
  b = base64_to_int (clean_input_buf[ 1] & 0x7f);
  c = base64_to_int (clean_input_buf[ 2] & 0x7f);
  d = base64_to_int (clean_input_buf[ 3] & 0x7f);
  e = base64_to_int (clean_input_buf[ 4] & 0x7f);
  f = base64_to_int (clean_input_buf[ 5] & 0x7f);

  digest[0] = (((a << 12) | (b << 6) | (c)) << 16)
            | (((d << 12) | (e << 6) | (f)) <<  0);

  a = base64_to_int (clean_input_buf[ 6] & 0x7f);
  b = base64_to_int (clean_input_buf[ 7] & 0x7f);
  c = base64_to_int (clean_input_buf[ 8] & 0x7f);
  d = base64_to_int (clean_input_buf[ 9] & 0x7f);
  e = base64_to_int (clean_input_buf[10] & 0x7f);
  f = base64_to_int (clean_input_buf[11] & 0x7f);

  digest[1] = (((a << 12) | (b << 6) | (c)) << 16)
            | (((d << 12) | (e << 6) | (f)) <<  0);

  a = base64_to_int (clean_input_buf[12] & 0x7f);
  b = base64_to_int (clean_input_buf[13] & 0x7f);
  c = base64_to_int (clean_input_buf[14] & 0x7f);
  d = base64_to_int (clean_input_buf[15] & 0x7f);
  e = base64_to_int (clean_input_buf[16] & 0x7f);
  f = base64_to_int (clean_input_buf[17] & 0x7f);

  digest[2] = (((a << 12) | (b << 6) | (c)) << 16)
            | (((d << 12) | (e << 6) | (f)) <<  0);

  a = base64_to_int (clean_input_buf[18] & 0x7f);
  b = base64_to_int (clean_input_buf[19] & 0x7f);
  c = base64_to_int (clean_input_buf[20] & 0x7f);
  d = base64_to_int (clean_input_buf[21] & 0x7f);
  e = base64_to_int (clean_input_buf[22] & 0x7f);
  f = base64_to_int (clean_input_buf[23] & 0x7f);

  digest[3] = (((a << 12) | (b << 6) | (c)) << 16)
            | (((d << 12) | (e << 6) | (f)) <<  0);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= MD5M_A;
    digest[1] -= MD5M_B;
    digest[2] -= MD5M_C;
    digest[3] -= MD5M_D;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  // max. salt length: 55 (max for MD5) - 22 (":Administration Tools:") - 1 (0x80) = 32
  // 32 - 4 bytes (to fit w0lr for all attack modes) = 28

  if (salt->salt_len > 28) return (PARSER_SALT_LENGTH);

  u8 *salt_buf_ptr = (u8 *) salt->salt_buf;

  static const char *adm = ":Administration Tools:";

  memcpy (salt_buf_ptr + salt->salt_len, adm, strlen (adm));

  salt->salt_len += strlen (adm);

  return (PARSER_OK);
}

int dcc2_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_DCC2;

  token.len[0]     = 6;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.sep[1]     = '#';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = SALT_MIN;
  token.len_max[2] = SALT_MAX;
  token.sep[2]     = '#';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[3] = 32;
  token.len_max[3] = 32;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[3];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  const u8 *iter_pos = token.buf[1];

  u32 iter = hc_strtoul ((const char *) iter_pos, NULL, 10);

  salt->salt_iter = iter - 1;

  return (PARSER_OK);
}

int dpapimk_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  dpapimk_t *dpapimk = (dpapimk_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 10;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_DPAPIMK;

  // signature
  token.len[0]     = 9;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  // version
  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  // context
  token.len_min[2] = 1;
  token.len_max[2] = 1;
  token.sep[2]     = '*';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  // sid
  token.len_min[3] = 10;
  token.len_max[3] = 60;
  token.sep[3]     = '*';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH;

  // cipher
  token.len_min[4] = 4;
  token.len_max[4] = 6;
  token.sep[4]     = '*';
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH;

  // hash
  token.len_min[5] = 4;
  token.len_max[5] = 6;
  token.sep[5]     = '*';
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH;

  // iterations
  token.len_min[6] = 1;
  token.len_max[6] = 6;
  token.sep[6]     = '*';
  token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  // iv
  token.len_min[7] = 32;
  token.len_max[7] = 32;
  token.sep[7]     = '*';
  token.attr[7]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  // content len
  token.len_min[8] = 1;
  token.len_max[8] = 6;
  token.sep[8]     = '*';
  token.attr[8]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  // content
  token.len_min[9] = 0;
  token.len_max[9] = 1024;
  token.attr[9]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *version_pos       = token.buf[1];
  const u8 *context_pos       = token.buf[2];
  const u8 *SID_pos           = token.buf[3];
  const u8 *rounds_pos        = token.buf[6];
  const u8 *iv_pos            = token.buf[7];
  const u8 *contents_len_pos  = token.buf[8];
  const u8 *contents_pos      = token.buf[9];

  /**
   * content verification
   */

  const int version      = hc_strtoul ((const char *) version_pos,      NULL, 10);
  const int contents_len = hc_strtoul ((const char *) contents_len_pos, NULL, 10);

  if (version == 1)
  {
    if (contents_len != 208) return (PARSER_SALT_LENGTH);
  }
  else if (version == 2)
  {
    if (contents_len != 288) return (PARSER_SALT_LENGTH);
  }
  else
  {
    return (PARSER_SALT_VALUE);
  }

  if (contents_len != token.len[9]) return (PARSER_SALT_LENGTH);

  dpapimk->contents_len = contents_len;

  dpapimk->context = hc_strtoul ((const char *) context_pos, NULL, 10);

  // division by 4 should be fine because contents_len is either 208 or 288

  for (u32 i = 0; i < dpapimk->contents_len / 4; i++)
  {
    dpapimk->contents[i] = hex_to_u32 ((const u8 *) &contents_pos[i * 8]);

    dpapimk->contents[i] = byte_swap_32 (dpapimk->contents[i]);
  }

  // SID

  const int SID_len = token.len[3];

  u8 SID_utf16le[128] = { 0 };

  for (int i = 0; i < SID_len; i++)
  {
    SID_utf16le[i * 2] = SID_pos[i];
  }

  /* Specific to DPAPI: needs trailing '\0' while computing hash */

  dpapimk->SID_len = (SID_len + 1) * 2;

  SID_utf16le[dpapimk->SID_len] = 0x80;

  memcpy ((u8 *) dpapimk->SID, SID_utf16le, sizeof (SID_utf16le));

  for (u32 i = 0; i < 32; i++)
  {
    dpapimk->SID[i] = byte_swap_32 (dpapimk->SID[i]);
  }

  // iv

  dpapimk->iv[0] = hex_to_u32 ((const u8 *) &iv_pos[ 0]);
  dpapimk->iv[1] = hex_to_u32 ((const u8 *) &iv_pos[ 8]);
  dpapimk->iv[2] = hex_to_u32 ((const u8 *) &iv_pos[16]);
  dpapimk->iv[3] = hex_to_u32 ((const u8 *) &iv_pos[24]);

  dpapimk->iv[0] = byte_swap_32 (dpapimk->iv[0]);
  dpapimk->iv[1] = byte_swap_32 (dpapimk->iv[1]);
  dpapimk->iv[2] = byte_swap_32 (dpapimk->iv[2]);
  dpapimk->iv[3] = byte_swap_32 (dpapimk->iv[3]);

  digest[0] = dpapimk->iv[0];
  digest[1] = dpapimk->iv[1];
  digest[2] = dpapimk->iv[2];
  digest[3] = dpapimk->iv[3];

  salt->salt_buf[0] = dpapimk->iv[0];
  salt->salt_buf[1] = dpapimk->iv[1];
  salt->salt_buf[2] = dpapimk->iv[2];
  salt->salt_buf[3] = dpapimk->iv[3];

  salt->salt_len = 16;

  // iter

  salt->salt_iter = hc_strtoul ((const char *) rounds_pos, NULL, 10) - 1;

  return (PARSER_OK);
}

int psafe2_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  if (input_len == 0) return (PARSER_HASH_LENGTH);

  FILE *fp = fopen ((const char *) input_buf, "rb");

  if (fp == NULL) return (PARSER_HASH_FILE);

  psafe2_hdr buf;

  memset (&buf, 0, sizeof (psafe2_hdr));

  const size_t n = hc_fread (&buf, sizeof (psafe2_hdr), 1, fp);

  fclose (fp);

  if (n != 1) return (PARSER_PSAFE2_FILE_SIZE);

  salt->salt_buf[0] = buf.random[0];
  salt->salt_buf[1] = buf.random[1];

  salt->salt_len  = 8;
  salt->salt_iter = 1000;

  digest[0] = byte_swap_32 (buf.hash[0]);
  digest[1] = byte_swap_32 (buf.hash[1]);
  digest[2] = byte_swap_32 (buf.hash[2]);
  digest[3] = byte_swap_32 (buf.hash[3]);
  digest[4] = byte_swap_32 (buf.hash[4]);

  return (PARSER_OK);
}

int psafe3_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  if (input_len == 0) return (PARSER_HASH_LENGTH);

  FILE *fp = fopen ((const char *) input_buf, "rb");

  if (fp == NULL) return (PARSER_HASH_FILE);

  psafe3_t in;

  memset (&in, 0, sizeof (psafe3_t));

  const size_t n = hc_fread (&in, sizeof (psafe3_t), 1, fp);

  fclose (fp);

  if (n != 1) return (PARSER_PSAFE3_FILE_SIZE);

  if (memcmp (SIGNATURE_PSAFE3, in.signature, 4) != 0) return (PARSER_SIGNATURE_UNMATCHED);

  salt->salt_iter = in.iterations + 1;

  salt->salt_buf[0] = in.salt_buf[0];
  salt->salt_buf[1] = in.salt_buf[1];
  salt->salt_buf[2] = in.salt_buf[2];
  salt->salt_buf[3] = in.salt_buf[3];
  salt->salt_buf[4] = in.salt_buf[4];
  salt->salt_buf[5] = in.salt_buf[5];
  salt->salt_buf[6] = in.salt_buf[6];
  salt->salt_buf[7] = in.salt_buf[7];

  salt->salt_len = 32;

  digest[0] = in.hash_buf[0];
  digest[1] = in.hash_buf[1];
  digest[2] = in.hash_buf[2];
  digest[3] = in.hash_buf[3];
  digest[4] = in.hash_buf[4];
  digest[5] = in.hash_buf[5];
  digest[6] = in.hash_buf[6];
  digest[7] = in.hash_buf[7];

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  return (PARSER_OK);
}

int episerver_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_EPISERVER;

  token.len_min[0] = 11;
  token.len_max[0] = 11;
  token.sep[0]     = '*';
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 0;
  token.len_max[2] = 44;
  token.sep[2]     = '*';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  token.len_min[3] = 27;
  token.len_max[3] = 27;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[3];
  const int hash_len = token.len[3];

  u8 tmp_buf[100] = { 0 };

  base64_decode (base64_to_int, hash_pos, hash_len, tmp_buf);

  memcpy (digest, tmp_buf, 20);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA1M_A;
    digest[1] -= SHA1M_B;
    digest[2] -= SHA1M_C;
    digest[3] -= SHA1M_D;
    digest[4] -= SHA1M_E;
  }

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int md4_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.len_min[0] = 32;
  token.len_max[0] = 32;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= MD4M_A;
    digest[1] -= MD4M_B;
    digest[2] -= MD4M_C;
    digest[3] -= MD4M_D;
  }

  return (PARSER_OK);
}

int md4s_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 32;
  token.len_max[0] = 32;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = SALT_MIN;
  token.len_max[1] = SALT_MAX;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  if (hashconfig->opts_type & OPTS_TYPE_ST_HEX)
  {
    token.len_min[1] *= 2;
    token.len_max[1] *= 2;

    token.attr[1] |= TOKEN_ATTR_VERIFY_HEX;
  }

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= MD4M_A;
    digest[1] -= MD4M_B;
    digest[2] -= MD4M_C;
    digest[3] -= MD4M_D;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int md5_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.len_min[0] = 32;
  token.len_max[0] = 32;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= MD5M_A;
    digest[1] -= MD5M_B;
    digest[2] -= MD5M_C;
    digest[3] -= MD5M_D;
  }

  return (PARSER_OK);
}

int md5s_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 32;
  token.len_max[0] = 32;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = SALT_MIN;
  token.len_max[1] = SALT_MAX;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  if (hashconfig->opts_type & OPTS_TYPE_ST_HEX)
  {
    token.len_min[1] *= 2;
    token.len_max[1] *= 2;

    token.attr[1] |= TOKEN_ATTR_VERIFY_HEX;
  }

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= MD5M_A;
    digest[1] -= MD5M_B;
    digest[2] -= MD5M_C;
    digest[3] -= MD5M_D;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  if (hashconfig->opts_type & OPTS_TYPE_ST_HASH_MD5)
  {
    // precompute md5 of the salt

    precompute_salt_md5 (salt->salt_buf, salt->salt_len, (u8 *) salt->salt_buf_pc);
  }

  return (PARSER_OK);
}

int md5pix_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.sep[0]     = ':';
  token.len_min[0] = 16;
  token.len_max[0] = 16;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64B;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = itoa64_to_int (hash_pos[ 0]) <<  0
            | itoa64_to_int (hash_pos[ 1]) <<  6
            | itoa64_to_int (hash_pos[ 2]) << 12
            | itoa64_to_int (hash_pos[ 3]) << 18;
  digest[1] = itoa64_to_int (hash_pos[ 4]) <<  0
            | itoa64_to_int (hash_pos[ 5]) <<  6
            | itoa64_to_int (hash_pos[ 6]) << 12
            | itoa64_to_int (hash_pos[ 7]) << 18;
  digest[2] = itoa64_to_int (hash_pos[ 8]) <<  0
            | itoa64_to_int (hash_pos[ 9]) <<  6
            | itoa64_to_int (hash_pos[10]) << 12
            | itoa64_to_int (hash_pos[11]) << 18;
  digest[3] = itoa64_to_int (hash_pos[12]) <<  0
            | itoa64_to_int (hash_pos[13]) <<  6
            | itoa64_to_int (hash_pos[14]) << 12
            | itoa64_to_int (hash_pos[15]) << 18;

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= MD5M_A;
    digest[1] -= MD5M_B;
    digest[2] -= MD5M_C;
    digest[3] -= MD5M_D;
  }

  digest[0] &= 0x00ffffff;
  digest[1] &= 0x00ffffff;
  digest[2] &= 0x00ffffff;
  digest[3] &= 0x00ffffff;

  return (PARSER_OK);
}

int md5asa_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = ':';
  token.len_min[0] = 16;
  token.len_max[0] = 16;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64B;

  token.len_min[1] = 1;
  token.len_max[1] = 4;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = itoa64_to_int (hash_pos[ 0]) <<  0
            | itoa64_to_int (hash_pos[ 1]) <<  6
            | itoa64_to_int (hash_pos[ 2]) << 12
            | itoa64_to_int (hash_pos[ 3]) << 18;
  digest[1] = itoa64_to_int (hash_pos[ 4]) <<  0
            | itoa64_to_int (hash_pos[ 5]) <<  6
            | itoa64_to_int (hash_pos[ 6]) << 12
            | itoa64_to_int (hash_pos[ 7]) << 18;
  digest[2] = itoa64_to_int (hash_pos[ 8]) <<  0
            | itoa64_to_int (hash_pos[ 9]) <<  6
            | itoa64_to_int (hash_pos[10]) << 12
            | itoa64_to_int (hash_pos[11]) << 18;
  digest[3] = itoa64_to_int (hash_pos[12]) <<  0
            | itoa64_to_int (hash_pos[13]) <<  6
            | itoa64_to_int (hash_pos[14]) << 12
            | itoa64_to_int (hash_pos[15]) << 18;

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= MD5M_A;
    digest[1] -= MD5M_B;
    digest[2] -= MD5M_C;
    digest[3] -= MD5M_D;
  }

  digest[0] &= 0x00ffffff;
  digest[1] &= 0x00ffffff;
  digest[2] &= 0x00ffffff;
  digest[3] &= 0x00ffffff;

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int postgresql_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 32;
  token.len_max[0] = 32;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 0;
  token.len_max[1] = 32;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= MD5M_A;
    digest[1] -= MD5M_B;
    digest[2] -= MD5M_C;
    digest[3] -= MD5M_D;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int md5md5_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 1;

  token.len_min[0] = 32;
  token.len_max[0] = 32;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= MD5M_A;
    digest[1] -= MD5M_B;
    digest[2] -= MD5M_C;
    digest[3] -= MD5M_D;
  }

  /**
   * This is a virtual salt. While the algorithm is basically not salted
   * we can exploit the salt buffer to set the 0x80 and the w[14] value.
   * This way we can save a special md5md5 kernel and reuse the one from vbull.
   */

  static const u8 *zero = (const u8*) "";

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, zero, 0, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int vb30_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 32;
  token.len_max[0] = 32;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 23;
  token.len_max[1] = 31;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int sha1_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.len_min[0] = 40;
  token.len_max[0] = 40;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA1M_A;
    digest[1] -= SHA1M_B;
    digest[2] -= SHA1M_C;
    digest[3] -= SHA1M_D;
    digest[4] -= SHA1M_E;
  }

  return (PARSER_OK);
}

int sha1axcrypt_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 2;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_AXCRYPT_SHA1;

  token.len[0]     = 14;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 32;
  token.len_max[1] = 40;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[1];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = 0;

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = 0;

  return (PARSER_OK);
}

int sha1s_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 40;
  token.len_max[0] = 40;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = SALT_MIN;
  token.len_max[1] = SALT_MAX;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  if (hashconfig->opts_type & OPTS_TYPE_ST_HEX)
  {
    token.len_min[1] *= 2;
    token.len_max[1] *= 2;

    token.attr[1] |= TOKEN_ATTR_VERIFY_HEX;
  }

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA1M_A;
    digest[1] -= SHA1M_B;
    digest[2] -= SHA1M_C;
    digest[3] -= SHA1M_D;
    digest[4] -= SHA1M_E;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int totp_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  // this is going to start off like HMAC-SHA1
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 6;
  token.len_max[0] = 6;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = SALT_MIN;
  token.len_max[1] = SALT_MAX;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  if (hashconfig->opts_type & OPTS_TYPE_ST_HEX)
  {
    token.len_min[1] *= 2;
    token.len_max[1] *= 2;

    token.attr[1] |= TOKEN_ATTR_VERIFY_DIGIT;
  }

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // now we need to reduce our hash into a token
  int otp_code = hc_strtoul ((const char *) input_buf, NULL, 10);

  digest[0] = otp_code;

  const u8 *salt_pos = token.buf[1];

  // convert ascii timestamp to ulong timestamp
  u64 timestamp = hc_strtoull ((const char *) salt_pos, NULL, 10);

  // store the original salt value. Step division will destroy granularity for output
  salt->salt_buf[3] = ((u32) (timestamp >>  0));
  salt->salt_buf[2] = ((u32) (timestamp >> 32));

  // divide our timestamp by our step. We will use the RFC 6238 default of 30 for now
  timestamp /= 30;

  // convert counter to 8-byte salt
  salt->salt_buf[1] = byte_swap_32 ((u32) (timestamp >>  0));
  salt->salt_buf[0] = byte_swap_32 ((u32) (timestamp >> 32));

  // our salt will always be 8 bytes, but we are going to cheat and store it twice, so...
  salt->salt_len = 16;

  return (PARSER_OK);
}

int pstoken_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  pstoken_t *pstoken = (pstoken_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 40;
  token.len_max[0] = 40;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 32;
  token.len_max[1] = 1024;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  u8 *pstoken_ptr = (u8 *) pstoken->salt_buf;

  for (int i = 0, j = 0; i < salt_len; i += 2, j += 1)
  {
    pstoken_ptr[j] = hex_to_u8 (salt_pos + i);
  }

  pstoken->salt_len = salt_len / 2;

  /* some fake salt for the sorting mechanisms */

  salt->salt_buf[0] = pstoken->salt_buf[0];
  salt->salt_buf[1] = pstoken->salt_buf[1];
  salt->salt_buf[2] = pstoken->salt_buf[2];
  salt->salt_buf[3] = pstoken->salt_buf[3];
  salt->salt_buf[4] = pstoken->salt_buf[4];
  salt->salt_buf[5] = pstoken->salt_buf[5];
  salt->salt_buf[6] = pstoken->salt_buf[6];
  salt->salt_buf[7] = pstoken->salt_buf[7];

  salt->salt_len = 32;

  /* we need to check if we can precompute some of the data --
     this is possible since the scheme is badly designed */

  pstoken->pc_digest[0] = SHA1M_A;
  pstoken->pc_digest[1] = SHA1M_B;
  pstoken->pc_digest[2] = SHA1M_C;
  pstoken->pc_digest[3] = SHA1M_D;
  pstoken->pc_digest[4] = SHA1M_E;

  pstoken->pc_offset = 0;

  for (int i = 0; i < (int) pstoken->salt_len - 63; i += 64)
  {
    u32 w[16];

    w[ 0] = byte_swap_32 (pstoken->salt_buf[pstoken->pc_offset +  0]);
    w[ 1] = byte_swap_32 (pstoken->salt_buf[pstoken->pc_offset +  1]);
    w[ 2] = byte_swap_32 (pstoken->salt_buf[pstoken->pc_offset +  2]);
    w[ 3] = byte_swap_32 (pstoken->salt_buf[pstoken->pc_offset +  3]);
    w[ 4] = byte_swap_32 (pstoken->salt_buf[pstoken->pc_offset +  4]);
    w[ 5] = byte_swap_32 (pstoken->salt_buf[pstoken->pc_offset +  5]);
    w[ 6] = byte_swap_32 (pstoken->salt_buf[pstoken->pc_offset +  6]);
    w[ 7] = byte_swap_32 (pstoken->salt_buf[pstoken->pc_offset +  7]);
    w[ 8] = byte_swap_32 (pstoken->salt_buf[pstoken->pc_offset +  8]);
    w[ 9] = byte_swap_32 (pstoken->salt_buf[pstoken->pc_offset +  9]);
    w[10] = byte_swap_32 (pstoken->salt_buf[pstoken->pc_offset + 10]);
    w[11] = byte_swap_32 (pstoken->salt_buf[pstoken->pc_offset + 11]);
    w[12] = byte_swap_32 (pstoken->salt_buf[pstoken->pc_offset + 12]);
    w[13] = byte_swap_32 (pstoken->salt_buf[pstoken->pc_offset + 13]);
    w[14] = byte_swap_32 (pstoken->salt_buf[pstoken->pc_offset + 14]);
    w[15] = byte_swap_32 (pstoken->salt_buf[pstoken->pc_offset + 15]);

    sha1_64 (w, pstoken->pc_digest);

    pstoken->pc_offset += 16;
  }

  return (PARSER_OK);
}

int sha1b64_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 2;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_SHA1B64;

  token.len[0]     = 5;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 28;
  token.len_max[1] = 28;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[1];
  const int hash_len = token.len[1];

  u8 tmp_buf[100] = { 0 };

  base64_decode (base64_to_int, hash_pos, hash_len, tmp_buf);

  memcpy (digest, tmp_buf, 20);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA1M_A;
    digest[1] -= SHA1M_B;
    digest[2] -= SHA1M_C;
    digest[3] -= SHA1M_D;
    digest[4] -= SHA1M_E;
  }

  return (PARSER_OK);
}

int sha1b64s_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.signatures_cnt    = 2;
  token.signatures_buf[0] = SIGNATURE_SSHA1B64_lower;
  token.signatures_buf[1] = SIGNATURE_SSHA1B64_upper;

  token.len[0]     = 6;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 28;
  token.len_max[1] = 368; // 368 = 20 + 256 where 20 is digest length and 256 is SALT_MAX
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hashsalt_pos = token.buf[1];
  const int hashsalt_len = token.len[1];

  u8 tmp_buf[512] = { 0 };

  const int tmp_len = base64_decode (base64_to_int, hashsalt_pos, hashsalt_len, tmp_buf);

  if (tmp_len < 20) return (PARSER_HASH_LENGTH);

  u8 *hash_pos = tmp_buf;

  memcpy (digest, hash_pos, 20);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA1M_A;
    digest[1] -= SHA1M_B;
    digest[2] -= SHA1M_C;
    digest[3] -= SHA1M_D;
    digest[4] -= SHA1M_E;
  }

  // salt

  u8 *salt_pos = tmp_buf + 20;
  int salt_len = tmp_len - 20;

  salt->salt_len = salt_len;

  memcpy (salt->salt_buf, salt_pos, salt_len);

  if (hashconfig->opts_type & OPTS_TYPE_ST_ADD80)
  {
    u8 *ptr = (u8 *) salt->salt_buf;

    ptr[salt_len] = 0x80;
  }

  return (PARSER_OK);
}

int mssql2000_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_MSSQL;

  token.len[0]     = 6;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len[1]     = 8;
  token.attr[1]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len[2]     = 40;
  token.attr[2]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len[3]     = 40;
  token.attr[3]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[3];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA1M_A;
    digest[1] -= SHA1M_B;
    digest[2] -= SHA1M_C;
    digest[3] -= SHA1M_D;
    digest[4] -= SHA1M_E;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int mssql2005_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 3;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_MSSQL;

  token.len[0]     = 6;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len[1]     = 8;
  token.attr[1]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len[2]     = 40;
  token.attr[2]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[2];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA1M_A;
    digest[1] -= SHA1M_B;
    digest[2] -= SHA1M_C;
    digest[3] -= SHA1M_D;
    digest[4] -= SHA1M_E;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int mssql2012_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u64 *digest = (u64 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 3;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_MSSQL2012;

  token.len[0]     = 6;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len[1]     = 8;
  token.attr[1]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len[2]     = 128;
  token.attr[2]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[2];

  digest[0] = hex_to_u64 (hash_pos +   0);
  digest[1] = hex_to_u64 (hash_pos +  16);
  digest[2] = hex_to_u64 (hash_pos +  32);
  digest[3] = hex_to_u64 (hash_pos +  48);
  digest[4] = hex_to_u64 (hash_pos +  64);
  digest[5] = hex_to_u64 (hash_pos +  80);
  digest[6] = hex_to_u64 (hash_pos +  96);
  digest[7] = hex_to_u64 (hash_pos + 112);

  digest[0] = byte_swap_64 (digest[0]);
  digest[1] = byte_swap_64 (digest[1]);
  digest[2] = byte_swap_64 (digest[2]);
  digest[3] = byte_swap_64 (digest[3]);
  digest[4] = byte_swap_64 (digest[4]);
  digest[5] = byte_swap_64 (digest[5]);
  digest[6] = byte_swap_64 (digest[6]);
  digest[7] = byte_swap_64 (digest[7]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA512M_A;
    digest[1] -= SHA512M_B;
    digest[2] -= SHA512M_C;
    digest[3] -= SHA512M_D;
    digest[4] -= SHA512M_E;
    digest[5] -= SHA512M_F;
    digest[6] -= SHA512M_G;
    digest[7] -= SHA512M_H;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int oracleh_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 16;
  token.len_max[0] = 16;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 0;
  token.len_max[1] = 30;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos + 0);
  digest[1] = hex_to_u32 (hash_pos + 8);
  digest[2] = 0;
  digest[3] = 0;

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int oracles_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 40;
  token.len_max[0] = 40;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 20;
  token.len_max[1] = 20;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA1M_A;
    digest[1] -= SHA1M_B;
    digest[2] -= SHA1M_C;
    digest[3] -= SHA1M_D;
    digest[4] -= SHA1M_E;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int oraclet_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt = 2;

  token.len[0]  = 128;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  token.len[1]  = 32;
  token.attr[1] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[ 0] = hex_to_u32 (hash_pos +   0);
  digest[ 1] = hex_to_u32 (hash_pos +   8);
  digest[ 2] = hex_to_u32 (hash_pos +  16);
  digest[ 3] = hex_to_u32 (hash_pos +  24);
  digest[ 4] = hex_to_u32 (hash_pos +  32);
  digest[ 5] = hex_to_u32 (hash_pos +  40);
  digest[ 6] = hex_to_u32 (hash_pos +  48);
  digest[ 7] = hex_to_u32 (hash_pos +  56);
  digest[ 8] = hex_to_u32 (hash_pos +  64);
  digest[ 9] = hex_to_u32 (hash_pos +  72);
  digest[10] = hex_to_u32 (hash_pos +  80);
  digest[11] = hex_to_u32 (hash_pos +  88);
  digest[12] = hex_to_u32 (hash_pos +  96);
  digest[13] = hex_to_u32 (hash_pos + 104);
  digest[14] = hex_to_u32 (hash_pos + 112);
  digest[15] = hex_to_u32 (hash_pos + 120);

  digest[ 0] = byte_swap_32 (digest[ 0]);
  digest[ 1] = byte_swap_32 (digest[ 1]);
  digest[ 2] = byte_swap_32 (digest[ 2]);
  digest[ 3] = byte_swap_32 (digest[ 3]);
  digest[ 4] = byte_swap_32 (digest[ 4]);
  digest[ 5] = byte_swap_32 (digest[ 5]);
  digest[ 6] = byte_swap_32 (digest[ 6]);
  digest[ 7] = byte_swap_32 (digest[ 7]);
  digest[ 8] = byte_swap_32 (digest[ 8]);
  digest[ 9] = byte_swap_32 (digest[ 9]);
  digest[10] = byte_swap_32 (digest[10]);
  digest[11] = byte_swap_32 (digest[11]);
  digest[12] = byte_swap_32 (digest[12]);
  digest[13] = byte_swap_32 (digest[13]);
  digest[14] = byte_swap_32 (digest[14]);
  digest[15] = byte_swap_32 (digest[15]);

  const u8 *salt_pos = token.buf[1];

  salt->salt_buf[0] = hex_to_u32 (salt_pos +  0);
  salt->salt_buf[1] = hex_to_u32 (salt_pos +  8);
  salt->salt_buf[2] = hex_to_u32 (salt_pos + 16);
  salt->salt_buf[3] = hex_to_u32 (salt_pos + 24);

  salt->salt_buf[0] = byte_swap_32 (salt->salt_buf[0]);
  salt->salt_buf[1] = byte_swap_32 (salt->salt_buf[1]);
  salt->salt_buf[2] = byte_swap_32 (salt->salt_buf[2]);
  salt->salt_buf[3] = byte_swap_32 (salt->salt_buf[3]);

  salt->salt_iter = ROUNDS_ORACLET - 1;
  salt->salt_len  = 16;

  return (PARSER_OK);
}

int sha224_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.len_min[0] = 56;
  token.len_max[0] = 56;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);
  digest[5] = hex_to_u32 (hash_pos + 40);
  digest[6] = hex_to_u32 (hash_pos + 48);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA224M_A;
    digest[1] -= SHA224M_B;
    digest[2] -= SHA224M_C;
    digest[3] -= SHA224M_D;
    digest[4] -= SHA224M_E;
    digest[5] -= SHA224M_F;
    digest[6] -= SHA224M_G;
  }

  return (PARSER_OK);
}

int sha256_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.len_min[0] = 64;
  token.len_max[0] = 64;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);
  digest[5] = hex_to_u32 (hash_pos + 40);
  digest[6] = hex_to_u32 (hash_pos + 48);
  digest[7] = hex_to_u32 (hash_pos + 56);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA256M_A;
    digest[1] -= SHA256M_B;
    digest[2] -= SHA256M_C;
    digest[3] -= SHA256M_D;
    digest[4] -= SHA256M_E;
    digest[5] -= SHA256M_F;
    digest[6] -= SHA256M_G;
    digest[7] -= SHA256M_H;
  }

  return (PARSER_OK);
}

int sha256s_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 64;
  token.len_max[0] = 64;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = SALT_MIN;
  token.len_max[1] = SALT_MAX;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  if (hashconfig->opts_type & OPTS_TYPE_ST_HEX)
  {
    token.len_min[1] *= 2;
    token.len_max[1] *= 2;

    token.attr[1] |= TOKEN_ATTR_VERIFY_HEX;
  }

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);
  digest[5] = hex_to_u32 (hash_pos + 40);
  digest[6] = hex_to_u32 (hash_pos + 48);
  digest[7] = hex_to_u32 (hash_pos + 56);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA256M_A;
    digest[1] -= SHA256M_B;
    digest[2] -= SHA256M_C;
    digest[3] -= SHA256M_D;
    digest[4] -= SHA256M_E;
    digest[5] -= SHA256M_F;
    digest[6] -= SHA256M_G;
    digest[7] -= SHA256M_H;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int sha384_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u64 *digest = (u64 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.len_min[0] = 96;
  token.len_max[0] = 96;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u64 (hash_pos +  0);
  digest[1] = hex_to_u64 (hash_pos + 16);
  digest[2] = hex_to_u64 (hash_pos + 32);
  digest[3] = hex_to_u64 (hash_pos + 48);
  digest[4] = hex_to_u64 (hash_pos + 64);
  digest[5] = hex_to_u64 (hash_pos + 80);
  digest[6] = 0;
  digest[7] = 0;

  digest[0] = byte_swap_64 (digest[0]);
  digest[1] = byte_swap_64 (digest[1]);
  digest[2] = byte_swap_64 (digest[2]);
  digest[3] = byte_swap_64 (digest[3]);
  digest[4] = byte_swap_64 (digest[4]);
  digest[5] = byte_swap_64 (digest[5]);
  digest[6] = 0;
  digest[7] = 0;

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA384M_A;
    digest[1] -= SHA384M_B;
    digest[2] -= SHA384M_C;
    digest[3] -= SHA384M_D;
    digest[4] -= SHA384M_E;
    digest[5] -= SHA384M_F;
    digest[6] -= 0;
    digest[7] -= 0;
  }

  return (PARSER_OK);
}

int sha512_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u64 *digest = (u64 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.len_min[0] = 128;
  token.len_max[0] = 128;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u64 (hash_pos +   0);
  digest[1] = hex_to_u64 (hash_pos +  16);
  digest[2] = hex_to_u64 (hash_pos +  32);
  digest[3] = hex_to_u64 (hash_pos +  48);
  digest[4] = hex_to_u64 (hash_pos +  64);
  digest[5] = hex_to_u64 (hash_pos +  80);
  digest[6] = hex_to_u64 (hash_pos +  96);
  digest[7] = hex_to_u64 (hash_pos + 112);

  digest[0] = byte_swap_64 (digest[0]);
  digest[1] = byte_swap_64 (digest[1]);
  digest[2] = byte_swap_64 (digest[2]);
  digest[3] = byte_swap_64 (digest[3]);
  digest[4] = byte_swap_64 (digest[4]);
  digest[5] = byte_swap_64 (digest[5]);
  digest[6] = byte_swap_64 (digest[6]);
  digest[7] = byte_swap_64 (digest[7]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA512M_A;
    digest[1] -= SHA512M_B;
    digest[2] -= SHA512M_C;
    digest[3] -= SHA512M_D;
    digest[4] -= SHA512M_E;
    digest[5] -= SHA512M_F;
    digest[6] -= SHA512M_G;
    digest[7] -= SHA512M_H;
  }

  return (PARSER_OK);
}

int sha512s_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u64 *digest = (u64 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 128;
  token.len_max[0] = 128;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = SALT_MIN;
  token.len_max[1] = SALT_MAX;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  if (hashconfig->opts_type & OPTS_TYPE_ST_HEX)
  {
    token.len_min[1] *= 2;
    token.len_max[1] *= 2;

    token.attr[1] |= TOKEN_ATTR_VERIFY_HEX;
  }

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u64 (hash_pos +   0);
  digest[1] = hex_to_u64 (hash_pos +  16);
  digest[2] = hex_to_u64 (hash_pos +  32);
  digest[3] = hex_to_u64 (hash_pos +  48);
  digest[4] = hex_to_u64 (hash_pos +  64);
  digest[5] = hex_to_u64 (hash_pos +  80);
  digest[6] = hex_to_u64 (hash_pos +  96);
  digest[7] = hex_to_u64 (hash_pos + 112);

  digest[0] = byte_swap_64 (digest[0]);
  digest[1] = byte_swap_64 (digest[1]);
  digest[2] = byte_swap_64 (digest[2]);
  digest[3] = byte_swap_64 (digest[3]);
  digest[4] = byte_swap_64 (digest[4]);
  digest[5] = byte_swap_64 (digest[5]);
  digest[6] = byte_swap_64 (digest[6]);
  digest[7] = byte_swap_64 (digest[7]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA512M_A;
    digest[1] -= SHA512M_B;
    digest[2] -= SHA512M_C;
    digest[3] -= SHA512M_D;
    digest[4] -= SHA512M_E;
    digest[5] -= SHA512M_F;
    digest[6] -= SHA512M_G;
    digest[7] -= SHA512M_H;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int keccak_384_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u64 *digest = (u64 *) hash_buf->digest;

  token_t token;

  token.token_cnt = 1;

  token.len[0]  = 96;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];
  const int hash_len = token.len[0];

  if (hash_len != 96) return (PARSER_GLOBAL_LENGTH);

  digest[0] = hex_to_u64 (hash_pos +  0);
  digest[1] = hex_to_u64 (hash_pos + 16);
  digest[2] = hex_to_u64 (hash_pos + 32);
  digest[3] = hex_to_u64 (hash_pos + 48);
  digest[4] = hex_to_u64 (hash_pos + 64);
  digest[5] = hex_to_u64 (hash_pos + 80);

  return (PARSER_OK);
}

int keccak_512_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u64 *digest = (u64 *) hash_buf->digest;

  token_t token;

  token.token_cnt = 1;

  token.len[0]  = 128;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];
  const int hash_len = token.len[0];

  if (hash_len != 128) return (PARSER_GLOBAL_LENGTH);

  digest[0] = hex_to_u64 (hash_pos +   0);
  digest[1] = hex_to_u64 (hash_pos +  16);
  digest[2] = hex_to_u64 (hash_pos +  32);
  digest[3] = hex_to_u64 (hash_pos +  48);
  digest[4] = hex_to_u64 (hash_pos +  64);
  digest[5] = hex_to_u64 (hash_pos +  80);
  digest[6] = hex_to_u64 (hash_pos +  96);
  digest[7] = hex_to_u64 (hash_pos + 112);

  return (PARSER_OK);
}

int chacha20_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  chacha20_t *chacha20 = (chacha20_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 6;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_CHACHA20;

  token.sep[0]     = '*';
  token.len_min[0] = 10;
  token.len_max[0] = 10;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '*';
  token.len_min[1] = 16;
  token.len_max[1] = 16;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[2]     = '*';
  token.len_min[2] = 1;
  token.len_max[2] = 2;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[3]     = '*';
  token.len_min[3] = 16;
  token.len_max[3] = 16;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[4]     = '*';
  token.len_min[4] = 16;
  token.len_max[4] = 16;
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[5]     = '*';
  token.len_min[5] = 16;
  token.len_max[5] = 16;
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // offset

  const u8 *offset_marker = token.buf[2];

  const int offset = strtol ((const char *) offset_marker, NULL, 10);

  if (offset > 63) return (PARSER_SALT_VALUE);

  chacha20->offset = offset;

  // position

  const u8 *position_marker = token.buf[1];

  chacha20->position[0] = hex_to_u32 ((const u8 *) position_marker + 0);
  chacha20->position[1] = hex_to_u32 ((const u8 *) position_marker + 8);

  // iv

  const u8 *iv_marker = token.buf[3];

  chacha20->iv[0] = hex_to_u32 ((const u8 *) iv_marker + 8);
  chacha20->iv[1] = hex_to_u32 ((const u8 *) iv_marker + 0);

  // plain

  const u8 *plain_marker = token.buf[4];

  chacha20->plain[0] = hex_to_u32 ((const u8 *) plain_marker + 0);
  chacha20->plain[1] = hex_to_u32 ((const u8 *) plain_marker + 8);

  /* some fake salt for the sorting mechanisms */

  salt->salt_buf[0] = chacha20->iv[0];
  salt->salt_buf[1] = chacha20->iv[1];
  salt->salt_buf[2] = chacha20->plain[0];
  salt->salt_buf[3] = chacha20->plain[1];
  salt->salt_buf[4] = chacha20->position[0];
  salt->salt_buf[5] = chacha20->position[1];
  salt->salt_buf[6] = chacha20->offset;
  salt->salt_buf[7] = 0;
  salt->salt_len    = 32;

  /* Store cipher for search mechanism */

  const u8 *cipher_marker = token.buf[5];

  digest[0] = hex_to_u32 ((const u8 *) cipher_marker + 8);
  digest[1] = hex_to_u32 ((const u8 *) cipher_marker + 0);

  return (PARSER_OK);
}

int ikepsk_md5_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  ikepsk_t *ikepsk = (ikepsk_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt = 9;

  token.sep[0]     = ':';
  token.len_min[0] = 0;
  token.len_max[0] = 1024;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[1]     = ':';
  token.len_min[1] = 0;
  token.len_max[1] = 1024;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[2]     = ':';
  token.len_min[2] = 0;
  token.len_max[2] = 1024;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[3]     = ':';
  token.len_min[3] = 0;
  token.len_max[3] = 1024;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[4]     = ':';
  token.len_min[4] = 0;
  token.len_max[4] = 1024;
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[5]     = ':';
  token.len_min[5] = 0;
  token.len_max[5] = 1024;
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[6]     = ':';
  token.len_min[6] = 0;
  token.len_max[6] = 128;
  token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[7]     = ':';
  token.len_min[7] = 0;
  token.len_max[7] = 128;
  token.attr[7]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[8]     = ':';
  token.len_min[8] = 32;
  token.len_max[8] = 32;
  token.attr[8]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  ikepsk->msg_len[0] =                      token.len[0] / 2;
  ikepsk->msg_len[1] = ikepsk->msg_len[0] + token.len[1] / 2;
  ikepsk->msg_len[2] = ikepsk->msg_len[1] + token.len[2] / 2;
  ikepsk->msg_len[3] = ikepsk->msg_len[2] + token.len[3] / 2;
  ikepsk->msg_len[4] = ikepsk->msg_len[3] + token.len[4] / 2;
  ikepsk->msg_len[5] = ikepsk->msg_len[4] + token.len[5] / 2;
  ikepsk->nr_len  = (token.len[6] + token.len[7]) / 2;

  if (ikepsk->msg_len[5] > 512) return (PARSER_SALT_LENGTH);
  if (ikepsk->nr_len  > 64)  return (PARSER_SALT_LENGTH);

  u8 *ptr1 = (u8 *) ikepsk->msg_buf;
  u8 *ptr2 = (u8 *) ikepsk->nr_buf;

  for (int i = 0; i < token.len[0]; i += 2) *ptr1++ = hex_to_u8 (token.buf[0] + i);
  for (int i = 0; i < token.len[1]; i += 2) *ptr1++ = hex_to_u8 (token.buf[1] + i);
  for (int i = 0; i < token.len[2]; i += 2) *ptr1++ = hex_to_u8 (token.buf[2] + i);
  for (int i = 0; i < token.len[3]; i += 2) *ptr1++ = hex_to_u8 (token.buf[3] + i);
  for (int i = 0; i < token.len[4]; i += 2) *ptr1++ = hex_to_u8 (token.buf[4] + i);
  for (int i = 0; i < token.len[5]; i += 2) *ptr1++ = hex_to_u8 (token.buf[5] + i);
  for (int i = 0; i < token.len[6]; i += 2) *ptr2++ = hex_to_u8 (token.buf[6] + i);
  for (int i = 0; i < token.len[7]; i += 2) *ptr2++ = hex_to_u8 (token.buf[7] + i);

  *ptr1++ = 0x80;
  *ptr2++ = 0x80;

  /**
   * Store to database
   */

  const u8 *hash_pos = token.buf[8];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  salt->salt_len = 32;

  salt->salt_buf[0] = ikepsk->nr_buf[0];
  salt->salt_buf[1] = ikepsk->nr_buf[1];
  salt->salt_buf[2] = ikepsk->nr_buf[2];
  salt->salt_buf[3] = ikepsk->nr_buf[3];
  salt->salt_buf[4] = ikepsk->nr_buf[4];
  salt->salt_buf[5] = ikepsk->nr_buf[5];
  salt->salt_buf[6] = ikepsk->nr_buf[6];
  salt->salt_buf[7] = ikepsk->nr_buf[7];

  return (PARSER_OK);
}

int ikepsk_sha1_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  ikepsk_t *ikepsk = (ikepsk_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt = 9;

  token.sep[0]     = ':';
  token.len_min[0] = 0;
  token.len_max[0] = 1024;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[1]     = ':';
  token.len_min[1] = 0;
  token.len_max[1] = 1024;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[2]     = ':';
  token.len_min[2] = 0;
  token.len_max[2] = 1024;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[3]     = ':';
  token.len_min[3] = 0;
  token.len_max[3] = 1024;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[4]     = ':';
  token.len_min[4] = 0;
  token.len_max[4] = 1024;
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[5]     = ':';
  token.len_min[5] = 0;
  token.len_max[5] = 1024;
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[6]     = ':';
  token.len_min[6] = 0;
  token.len_max[6] = 128;
  token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[7]     = ':';
  token.len_min[7] = 0;
  token.len_max[7] = 128;
  token.attr[7]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[8]     = ':';
  token.len_min[8] = 40;
  token.len_max[8] = 40;
  token.attr[8]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  ikepsk->msg_len[0] =                      token.len[0] / 2;
  ikepsk->msg_len[1] = ikepsk->msg_len[0] + token.len[1] / 2;
  ikepsk->msg_len[2] = ikepsk->msg_len[1] + token.len[2] / 2;
  ikepsk->msg_len[3] = ikepsk->msg_len[2] + token.len[3] / 2;
  ikepsk->msg_len[4] = ikepsk->msg_len[3] + token.len[4] / 2;
  ikepsk->msg_len[5] = ikepsk->msg_len[4] + token.len[5] / 2;
  ikepsk->nr_len  = (token.len[6] + token.len[7]) / 2;

  if (ikepsk->msg_len[5] > 512) return (PARSER_SALT_LENGTH);
  if (ikepsk->nr_len  > 64)  return (PARSER_SALT_LENGTH);

  u8 *ptr1 = (u8 *) ikepsk->msg_buf;
  u8 *ptr2 = (u8 *) ikepsk->nr_buf;

  for (int i = 0; i < token.len[0]; i += 2) *ptr1++ = hex_to_u8 (token.buf[0] + i);
  for (int i = 0; i < token.len[1]; i += 2) *ptr1++ = hex_to_u8 (token.buf[1] + i);
  for (int i = 0; i < token.len[2]; i += 2) *ptr1++ = hex_to_u8 (token.buf[2] + i);
  for (int i = 0; i < token.len[3]; i += 2) *ptr1++ = hex_to_u8 (token.buf[3] + i);
  for (int i = 0; i < token.len[4]; i += 2) *ptr1++ = hex_to_u8 (token.buf[4] + i);
  for (int i = 0; i < token.len[5]; i += 2) *ptr1++ = hex_to_u8 (token.buf[5] + i);
  for (int i = 0; i < token.len[6]; i += 2) *ptr2++ = hex_to_u8 (token.buf[6] + i);
  for (int i = 0; i < token.len[7]; i += 2) *ptr2++ = hex_to_u8 (token.buf[7] + i);

  *ptr1++ = 0x80;
  *ptr2++ = 0x80;

  /**
   * Store to database
   */

  const u8 *hash_pos = token.buf[8];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  salt->salt_len = 32;

  salt->salt_buf[0] = ikepsk->nr_buf[0];
  salt->salt_buf[1] = ikepsk->nr_buf[1];
  salt->salt_buf[2] = ikepsk->nr_buf[2];
  salt->salt_buf[3] = ikepsk->nr_buf[3];
  salt->salt_buf[4] = ikepsk->nr_buf[4];
  salt->salt_buf[5] = ikepsk->nr_buf[5];
  salt->salt_buf[6] = ikepsk->nr_buf[6];
  salt->salt_buf[7] = ikepsk->nr_buf[7];

  return (PARSER_OK);
}

int ripemd160_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.len_min[0] = 40;
  token.len_max[0] = 40;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  return (PARSER_OK);
}

int whirlpool_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.len_min[0] = 128;
  token.len_max[0] = 128;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[ 0] = hex_to_u32 (hash_pos +   0);
  digest[ 1] = hex_to_u32 (hash_pos +   8);
  digest[ 2] = hex_to_u32 (hash_pos +  16);
  digest[ 3] = hex_to_u32 (hash_pos +  24);
  digest[ 4] = hex_to_u32 (hash_pos +  32);
  digest[ 5] = hex_to_u32 (hash_pos +  40);
  digest[ 6] = hex_to_u32 (hash_pos +  48);
  digest[ 7] = hex_to_u32 (hash_pos +  56);
  digest[ 8] = hex_to_u32 (hash_pos +  64);
  digest[ 9] = hex_to_u32 (hash_pos +  72);
  digest[10] = hex_to_u32 (hash_pos +  80);
  digest[11] = hex_to_u32 (hash_pos +  88);
  digest[12] = hex_to_u32 (hash_pos +  96);
  digest[13] = hex_to_u32 (hash_pos + 104);
  digest[14] = hex_to_u32 (hash_pos + 112);
  digest[15] = hex_to_u32 (hash_pos + 120);

  digest[ 0] = byte_swap_32 (digest[ 0]);
  digest[ 1] = byte_swap_32 (digest[ 1]);
  digest[ 2] = byte_swap_32 (digest[ 2]);
  digest[ 3] = byte_swap_32 (digest[ 3]);
  digest[ 4] = byte_swap_32 (digest[ 4]);
  digest[ 5] = byte_swap_32 (digest[ 5]);
  digest[ 6] = byte_swap_32 (digest[ 6]);
  digest[ 7] = byte_swap_32 (digest[ 7]);
  digest[ 8] = byte_swap_32 (digest[ 8]);
  digest[ 9] = byte_swap_32 (digest[ 9]);
  digest[10] = byte_swap_32 (digest[10]);
  digest[11] = byte_swap_32 (digest[11]);
  digest[12] = byte_swap_32 (digest[12]);
  digest[13] = byte_swap_32 (digest[13]);
  digest[14] = byte_swap_32 (digest[14]);
  digest[15] = byte_swap_32 (digest[15]);

  return (PARSER_OK);
}

int androidpin_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 40;
  token.len_max[0] = 40;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 1;
  token.len_max[1] = 16;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  salt->salt_iter = ROUNDS_ANDROIDPIN - 1;

  return (PARSER_OK);
}

int truecrypt_parse_hash_1k (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  tc_t *tc = (tc_t *) hash_buf->esalt;

  if (input_len == 0) return (PARSER_HASH_LENGTH);

  FILE *fp = fopen ((const char *) input_buf, "rb");

  if (fp == NULL) return (PARSER_HASH_FILE);

  u8 buf[512];

  const size_t n = hc_fread ((char *) buf, 1, sizeof (buf), fp);

  fclose (fp);

  if (n != sizeof (buf)) return (PARSER_TC_FILE_SIZE);

  const float entropy = get_entropy (buf, n);

  if (entropy < MIN_SUFFICIENT_ENTROPY_FILE) return (PARSER_INSUFFICIENT_ENTROPY);

  memcpy (tc->salt_buf, buf, 64);

  memcpy (tc->data_buf, buf + 64, 512 - 64);

  salt->salt_buf[0] = tc->salt_buf[0];

  salt->salt_len = 4;

  salt->salt_iter = ROUNDS_TRUECRYPT_1K - 1;

  tc->signature = 0x45555254; // "TRUE"

  digest[0] = tc->data_buf[0];

  return (PARSER_OK);
}

int truecrypt_parse_hash_2k (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  tc_t *tc = (tc_t *) hash_buf->esalt;

  if (input_len == 0) return (PARSER_HASH_LENGTH);

  FILE *fp = fopen ((const char *) input_buf, "rb");

  if (fp == NULL) return (PARSER_HASH_FILE);

  u8 buf[512];

  const size_t n = hc_fread ((char *) buf, 1, sizeof (buf), fp);

  fclose (fp);

  if (n != sizeof (buf)) return (PARSER_TC_FILE_SIZE);

  const float entropy = get_entropy (buf, n);

  if (entropy < MIN_SUFFICIENT_ENTROPY_FILE) return (PARSER_INSUFFICIENT_ENTROPY);

  memcpy (tc->salt_buf, buf, 64);

  memcpy (tc->data_buf, buf + 64, 512 - 64);

  salt->salt_buf[0] = tc->salt_buf[0];

  salt->salt_len = 4;

  salt->salt_iter = ROUNDS_TRUECRYPT_2K - 1;

  tc->signature = 0x45555254; // "TRUE"

  digest[0] = tc->data_buf[0];

  return (PARSER_OK);
}

int veracrypt_parse_hash_200000 (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  tc_t *tc = (tc_t *) hash_buf->esalt;

  if (input_len == 0) return (PARSER_HASH_LENGTH);

  FILE *fp = fopen ((const char *) input_buf, "rb");

  if (fp == NULL) return (PARSER_HASH_FILE);

  u8 buf[512];

  const size_t n = hc_fread ((char *) buf, 1, sizeof (buf), fp);

  fclose (fp);

  if (n != sizeof (buf)) return (PARSER_VC_FILE_SIZE);

  const float entropy = get_entropy (buf, n);

  if (entropy < MIN_SUFFICIENT_ENTROPY_FILE) return (PARSER_INSUFFICIENT_ENTROPY);

  memcpy (tc->salt_buf, buf, 64);

  memcpy (tc->data_buf, buf + 64, 512 - 64);

  salt->salt_buf[0] = tc->salt_buf[0];

  salt->salt_len = 4;

  salt->salt_iter = ROUNDS_VERACRYPT_200000 - 1;

  tc->signature = 0x41524556; // "VERA"

  digest[0] = tc->data_buf[0];

  return (PARSER_OK);
}

int veracrypt_parse_hash_500000 (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  tc_t *tc = (tc_t *) hash_buf->esalt;

  if (input_len == 0) return (PARSER_HASH_LENGTH);

  FILE *fp = fopen ((const char *) input_buf, "rb");

  if (fp == NULL) return (PARSER_HASH_FILE);

  u8 buf[512];

  const size_t n = hc_fread ((char *) buf, 1, sizeof (buf), fp);

  fclose (fp);

  if (n != sizeof (buf)) return (PARSER_VC_FILE_SIZE);

  const float entropy = get_entropy (buf, n);

  if (entropy < MIN_SUFFICIENT_ENTROPY_FILE) return (PARSER_INSUFFICIENT_ENTROPY);

  memcpy (tc->salt_buf, buf, 64);

  memcpy (tc->data_buf, buf + 64, 512 - 64);

  salt->salt_buf[0] = tc->salt_buf[0];

  salt->salt_len = 4;

  salt->salt_iter = ROUNDS_VERACRYPT_500000 - 1;

  tc->signature = 0x41524556; // "VERA"

  digest[0] = tc->data_buf[0];

  return (PARSER_OK);
}

int veracrypt_parse_hash_327661 (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  tc_t *tc = (tc_t *) hash_buf->esalt;

  if (input_len == 0) return (PARSER_HASH_LENGTH);

  FILE *fp = fopen ((const char *) input_buf, "rb");

  if (fp == NULL) return (PARSER_HASH_FILE);

  u8 buf[512];

  const size_t n = hc_fread ((char *) buf, 1, sizeof (buf), fp);

  fclose (fp);

  if (n != sizeof (buf)) return (PARSER_VC_FILE_SIZE);

  const float entropy = get_entropy (buf, n);

  if (entropy < MIN_SUFFICIENT_ENTROPY_FILE) return (PARSER_INSUFFICIENT_ENTROPY);

  memcpy (tc->salt_buf, buf, 64);

  memcpy (tc->data_buf, buf + 64, 512 - 64);

  salt->salt_buf[0] = tc->salt_buf[0];

  salt->salt_len = 4;

  salt->salt_iter = ROUNDS_VERACRYPT_327661 - 1;

  tc->signature = 0x41524556; // "VERA"

  digest[0] = tc->data_buf[0];

  return (PARSER_OK);
}

int veracrypt_parse_hash_655331 (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  tc_t *tc = (tc_t *) hash_buf->esalt;

  if (input_len == 0) return (PARSER_HASH_LENGTH);

  FILE *fp = fopen ((const char *) input_buf, "rb");

  if (fp == NULL) return (PARSER_HASH_FILE);

  u8 buf[512];

  const size_t n = hc_fread ((char *) buf, 1, sizeof (buf), fp);

  fclose (fp);

  if (n != sizeof (buf)) return (PARSER_VC_FILE_SIZE);

  const float entropy = get_entropy (buf, n);

  if (entropy < MIN_SUFFICIENT_ENTROPY_FILE) return (PARSER_INSUFFICIENT_ENTROPY);

  memcpy (tc->salt_buf, buf, 64);

  memcpy (tc->data_buf, buf + 64, 512 - 64);

  salt->salt_buf[0] = tc->salt_buf[0];

  salt->salt_len = 4;

  salt->salt_iter = ROUNDS_VERACRYPT_655331 - 1;

  tc->signature = 0x41524556; // "VERA"

  digest[0] = tc->data_buf[0];

  return (PARSER_OK);
}

int sha1aix_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_SHA1AIX;

  token.len[0]     = 7;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 2;
  token.len_max[1] = 2;
  token.sep[1]     = '$';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[2] = 16;
  token.len_max[2] = 48;
  token.sep[2]     = '$';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len[3]     = 27;
  token.attr[3]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64B;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *iter_pos = token.buf[1];

  char salt_iter[3] = { iter_pos[0], iter_pos[1], 0 };

  salt->salt_sign[0] = hc_strtoul ((const char *) salt_iter, NULL, 10);

  salt->salt_iter = (1u << hc_strtoul ((const char *) salt_iter, NULL, 10)) - 1;

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  const u8 *hash_pos = token.buf[3];

  sha1aix_decode ((u8 *) digest, hash_pos);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  return (PARSER_OK);
}

int sha256aix_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_SHA256AIX;

  token.len[0]     = 9;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 2;
  token.len_max[1] = 2;
  token.sep[1]     = '$';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[2] = 16;
  token.len_max[2] = 48;
  token.sep[2]     = '$';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len[3]     = 43;
  token.attr[3]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64B;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *iter_pos = token.buf[1];

  char salt_iter[3] = { iter_pos[0], iter_pos[1], 0 };

  salt->salt_sign[0] = hc_strtoul ((const char *) salt_iter, NULL, 10);

  salt->salt_iter = (1u << hc_strtoul ((const char *) salt_iter, NULL, 10)) - 1;

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  const u8 *hash_pos = token.buf[3];

  sha256aix_decode ((u8 *) digest, hash_pos);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  return (PARSER_OK);
}

int sha512aix_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u64 *digest = (u64 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_SHA512AIX;

  token.len[0]     = 9;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 2;
  token.len_max[1] = 2;
  token.sep[1]     = '$';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[2] = 16;
  token.len_max[2] = 48;
  token.sep[2]     = '$';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len[3]     = 86;
  token.attr[3]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64B;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *iter_pos = token.buf[1];

  char salt_iter[3] = { iter_pos[0], iter_pos[1], 0 };

  salt->salt_sign[0] = hc_strtoul ((const char *) salt_iter, NULL, 10);

  salt->salt_iter = (1u << hc_strtoul ((const char *) salt_iter, NULL, 10)) - 1;

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  const u8 *hash_pos = token.buf[3];

  sha512aix_decode ((u8 *) digest, hash_pos);

  digest[0] = byte_swap_64 (digest[0]);
  digest[1] = byte_swap_64 (digest[1]);
  digest[2] = byte_swap_64 (digest[2]);
  digest[3] = byte_swap_64 (digest[3]);
  digest[4] = byte_swap_64 (digest[4]);
  digest[5] = byte_swap_64 (digest[5]);
  digest[6] = byte_swap_64 (digest[6]);
  digest[7] = byte_swap_64 (digest[7]);

  return (PARSER_OK);
}

int agilekey_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  agilekey_t *agilekey = (agilekey_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 3;

  token.len_min[0] = 1;
  token.len_max[0] = 6;
  token.sep[0]     = ':';
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[1] = 16;
  token.len_max[1] = 16;
  token.sep[1]     = ':';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[2] = 2080;
  token.len_max[2] = 2080;
  token.sep[2]     = ':';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  /**
   * pbkdf2 iterations
   */

  const u8 *iter_pos = token.buf[0];

  salt->salt_iter = hc_strtoul ((const char *) iter_pos, NULL, 10) - 1;

  /**
   * handle salt encoding
   */

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  u8 *saltbuf_ptr = (u8 *) salt->salt_buf;

  for (int i = 0; i < salt_len; i += 2)
  {
    const u8 p0 = salt_pos[i + 0];
    const u8 p1 = salt_pos[i + 1];

    *saltbuf_ptr++ = hex_convert (p1) << 0
                   | hex_convert (p0) << 4;
  }

  salt->salt_len = salt_len / 2;

  /**
   * handle cipher encoding
   */

  const u8 *cipher_pos = token.buf[2];
  const int cipher_len = token.len[2];

  u32 tmp[32] = { 0 };

  u8 *cipherbuf_ptr = (u8 *) tmp;

  for (int i = 2016; i < cipher_len; i += 2)
  {
    const u8 p0 = cipher_pos[i + 0];
    const u8 p1 = cipher_pos[i + 1];

    *cipherbuf_ptr++ = hex_convert (p1) << 0
                     | hex_convert (p0) << 4;
  }

  // iv   is stored at salt_buf 4 (length 16)
  // data is stored at salt_buf 8 (length 16)

  salt->salt_buf[ 4] = byte_swap_32 (tmp[0]);
  salt->salt_buf[ 5] = byte_swap_32 (tmp[1]);
  salt->salt_buf[ 6] = byte_swap_32 (tmp[2]);
  salt->salt_buf[ 7] = byte_swap_32 (tmp[3]);

  salt->salt_buf[ 8] = byte_swap_32 (tmp[4]);
  salt->salt_buf[ 9] = byte_swap_32 (tmp[5]);
  salt->salt_buf[10] = byte_swap_32 (tmp[6]);
  salt->salt_buf[11] = byte_swap_32 (tmp[7]);

  for (int i = 0, j = 0; i < 1040; i += 1, j += 2)
  {
    const u8 p0 = cipher_pos[j + 0];
    const u8 p1 = cipher_pos[j + 1];

    agilekey->cipher[i] = hex_convert (p1) << 0
                        | hex_convert (p0) << 4;
  }

  /**
   * digest buf
   */

  digest[0] = 0x10101010;
  digest[1] = 0x10101010;
  digest[2] = 0x10101010;
  digest[3] = 0x10101010;

  return (PARSER_OK);
}

int lastpass_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 3;

  token.len_min[0] = 32;
  token.len_max[0] = 64;
  token.sep[0]     = ':';
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.sep[1]     = ':';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[2] = 0;
  token.len_max[2] = 32;
  token.sep[2]     = ':';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);

  const u8 *iter_pos = token.buf[1];

  salt->salt_iter = hc_strtoul ((const char *) iter_pos, NULL, 10) - 1;

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int gost_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.len_min[0] = 64;
  token.len_max[0] = 64;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);
  digest[5] = hex_to_u32 (hash_pos + 40);
  digest[6] = hex_to_u32 (hash_pos + 48);
  digest[7] = hex_to_u32 (hash_pos + 56);

  return (PARSER_OK);
}

int sha256crypt_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 3;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_SHA256CRYPT;

  token.len[0]     = 3;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 0;
  token.len_max[1] = 16;
  token.sep[1]     = '$';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_OPTIONAL_ROUNDS;

  token.len[2]     = 43;
  token.attr[2]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64B;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  salt->salt_iter = ROUNDS_SHA256CRYPT;

  if (token.opt_len != -1)
  {
    salt->salt_iter = hc_strtoul ((const char *) token.opt_buf + 7, NULL, 10); // 7 = "rounds="
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  const u8 *hash_pos = token.buf[2];

  sha256crypt_decode ((u8 *) digest, hash_pos);

  return (PARSER_OK);
}

int sha512macos_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u64 *digest = (u64 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  pbkdf2_sha512_t *pbkdf2_sha512 = (pbkdf2_sha512_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_SHA512MACOS;

  token.len[0]     = 4;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.sep[1]     = '$';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 64;
  token.len_max[2] = 64;
  token.sep[2]     = '$';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[3] = 128;
  token.len_max[3] = 128;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[3];

  digest[0] = hex_to_u64 (hash_pos +   0);
  digest[1] = hex_to_u64 (hash_pos +  16);
  digest[2] = hex_to_u64 (hash_pos +  32);
  digest[3] = hex_to_u64 (hash_pos +  48);
  digest[4] = hex_to_u64 (hash_pos +  64);
  digest[5] = hex_to_u64 (hash_pos +  80);
  digest[6] = hex_to_u64 (hash_pos +  96);
  digest[7] = hex_to_u64 (hash_pos + 112);

  digest[0] = byte_swap_64 (digest[0]);
  digest[1] = byte_swap_64 (digest[1]);
  digest[2] = byte_swap_64 (digest[2]);
  digest[3] = byte_swap_64 (digest[3]);
  digest[4] = byte_swap_64 (digest[4]);
  digest[5] = byte_swap_64 (digest[5]);
  digest[6] = byte_swap_64 (digest[6]);
  digest[7] = byte_swap_64 (digest[7]);

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2] / 2;

  pbkdf2_sha512->salt_buf[0] = hex_to_u32 (salt_pos +  0);
  pbkdf2_sha512->salt_buf[1] = hex_to_u32 (salt_pos +  8);
  pbkdf2_sha512->salt_buf[2] = hex_to_u32 (salt_pos + 16);
  pbkdf2_sha512->salt_buf[3] = hex_to_u32 (salt_pos + 24);
  pbkdf2_sha512->salt_buf[4] = hex_to_u32 (salt_pos + 32);
  pbkdf2_sha512->salt_buf[5] = hex_to_u32 (salt_pos + 40);
  pbkdf2_sha512->salt_buf[6] = hex_to_u32 (salt_pos + 48);
  pbkdf2_sha512->salt_buf[7] = hex_to_u32 (salt_pos + 56);

  salt->salt_buf[0] = pbkdf2_sha512->salt_buf[0];
  salt->salt_buf[1] = pbkdf2_sha512->salt_buf[1];
  salt->salt_buf[2] = pbkdf2_sha512->salt_buf[2];
  salt->salt_buf[3] = pbkdf2_sha512->salt_buf[3];
  salt->salt_buf[4] = pbkdf2_sha512->salt_buf[4];
  salt->salt_buf[5] = pbkdf2_sha512->salt_buf[5];
  salt->salt_buf[6] = pbkdf2_sha512->salt_buf[6];
  salt->salt_buf[7] = pbkdf2_sha512->salt_buf[7];
  salt->salt_len    = salt_len;

  const u8 *iter_pos = token.buf[1];

  salt->salt_iter = hc_strtoul ((const char *) iter_pos, NULL, 10) - 1;

  return (PARSER_OK);
}

int episerver4_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_EPISERVER;

  token.len_min[0] = 11;
  token.len_max[0] = 11;
  token.sep[0]     = '*';
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 0;
  token.len_max[2] = 24;
  token.sep[2]     = '*';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  token.len_min[3] = 43;
  token.len_max[3] = 43;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[3];
  const int hash_len = token.len[3];

  u8 tmp_buf[100] = { 0 };

  base64_decode (base64_to_int, hash_pos, hash_len, tmp_buf);

  memcpy (digest, tmp_buf, 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA256M_A;
    digest[1] -= SHA256M_B;
    digest[2] -= SHA256M_C;
    digest[3] -= SHA256M_D;
    digest[4] -= SHA256M_E;
    digest[5] -= SHA256M_F;
    digest[6] -= SHA256M_G;
    digest[7] -= SHA256M_H;
  }

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int sha512grub_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u64 *digest = (u64 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  pbkdf2_sha512_t *pbkdf2_sha512 = (pbkdf2_sha512_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_SHA512GRUB;

  token.len[0]     = 19;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.sep[1]     = '.';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = SALT_MIN;
  token.len_max[2] = SALT_MAX;
  token.sep[2]     = '.';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[3] = 128;
  token.len_max[3] = 128;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[3];

  digest[0] = hex_to_u64 (hash_pos +   0);
  digest[1] = hex_to_u64 (hash_pos +  16);
  digest[2] = hex_to_u64 (hash_pos +  32);
  digest[3] = hex_to_u64 (hash_pos +  48);
  digest[4] = hex_to_u64 (hash_pos +  64);
  digest[5] = hex_to_u64 (hash_pos +  80);
  digest[6] = hex_to_u64 (hash_pos +  96);
  digest[7] = hex_to_u64 (hash_pos + 112);

  digest[0] = byte_swap_64 (digest[0]);
  digest[1] = byte_swap_64 (digest[1]);
  digest[2] = byte_swap_64 (digest[2]);
  digest[3] = byte_swap_64 (digest[3]);
  digest[4] = byte_swap_64 (digest[4]);
  digest[5] = byte_swap_64 (digest[5]);
  digest[6] = byte_swap_64 (digest[6]);
  digest[7] = byte_swap_64 (digest[7]);

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2] / 2;

  u8 *salt_buf_ptr = (u8 *) pbkdf2_sha512->salt_buf;

  for (int i = 0, j = 0; i < salt_len; i += 1, j += 2)
  {
    salt_buf_ptr[i] = hex_to_u8 (salt_pos + j);
  }

  salt_buf_ptr[salt_len + 3] = 0x01;
  salt_buf_ptr[salt_len + 4] = 0x80;

  salt->salt_buf[0] = pbkdf2_sha512->salt_buf[0];
  salt->salt_buf[1] = pbkdf2_sha512->salt_buf[1];
  salt->salt_buf[2] = pbkdf2_sha512->salt_buf[2];
  salt->salt_buf[3] = pbkdf2_sha512->salt_buf[3];
  salt->salt_buf[4] = pbkdf2_sha512->salt_buf[4];
  salt->salt_buf[5] = pbkdf2_sha512->salt_buf[5];
  salt->salt_buf[6] = pbkdf2_sha512->salt_buf[6];
  salt->salt_buf[7] = pbkdf2_sha512->salt_buf[7];
  salt->salt_len    = salt_len;

  const u8 *iter_pos = token.buf[1];

  salt->salt_iter = hc_strtoul ((const char *) iter_pos, NULL, 10) - 1;

  return (PARSER_OK);
}

int sha512b64s_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u64 *digest = (u64 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_SHA512B64S;

  token.len[0]     = 9;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 88;
  token.len_max[1] = 428; // 428 = 64 + 256 where 64 is digest length and 256 is SALT_MAX
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hashsalt_pos = token.buf[1];
  const int hashsalt_len = token.len[1];

  u8 tmp_buf[512] = { 0 };

  const int tmp_len = base64_decode (base64_to_int, hashsalt_pos, hashsalt_len, tmp_buf);

  if (tmp_len < 64) return (PARSER_HASH_LENGTH);

  u8 *hash_pos = tmp_buf;

  memcpy (digest, hash_pos, 64);

  digest[0] = byte_swap_64 (digest[0]);
  digest[1] = byte_swap_64 (digest[1]);
  digest[2] = byte_swap_64 (digest[2]);
  digest[3] = byte_swap_64 (digest[3]);
  digest[4] = byte_swap_64 (digest[4]);
  digest[5] = byte_swap_64 (digest[5]);
  digest[6] = byte_swap_64 (digest[6]);
  digest[7] = byte_swap_64 (digest[7]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA512M_A;
    digest[1] -= SHA512M_B;
    digest[2] -= SHA512M_C;
    digest[3] -= SHA512M_D;
    digest[4] -= SHA512M_E;
    digest[5] -= SHA512M_F;
    digest[6] -= SHA512M_G;
    digest[7] -= SHA512M_H;
  }

  // salt

  u8 *salt_pos = tmp_buf + 64;
  int salt_len = tmp_len - 64;

  salt->salt_len = salt_len;

  memcpy (salt->salt_buf, salt_pos, salt_len);

  if (hashconfig->opts_type & OPTS_TYPE_ST_ADD80)
  {
    u8 *ptr = (u8 *) salt->salt_buf;

    ptr[salt_len] = 0x80;
  }

  return (PARSER_OK);
}

int sapb_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.len_min[0] = 1;
  token.len_max[0] = 40;
  token.sep[0]     = '$';
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[1] = 16;
  token.len_max[1] = 16;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  /**
   * salt
   */

  const u8 *salt_pos = token.buf[0];
  const int salt_len = token.len[0];

  int user_len = 0;

  for (int i = 0; i < salt_len; i++)
  {
    if (salt_pos[i] == ' ') continue;

    user_len++;
  }

  // SAP user names cannot be longer than 12 characters
  if (user_len > 12) return (PARSER_SALT_LENGTH);

  // SAP user name cannot start with ! or ?
  if (salt_pos[0] == '!' || salt_pos[0] == '?') return (PARSER_SALT_VALUE);

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  /**
   * hash
   */

  const u8 *hash_pos = token.buf[1];

  digest[0] = hex_to_u32 (hash_pos + 0);
  digest[1] = hex_to_u32 (hash_pos + 8);
  digest[2] = 0;
  digest[3] = 0;

  return (PARSER_OK);
}

int sapg_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.len_min[0] = 1;
  token.len_max[0] = 40;
  token.sep[0]     = '$';
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[1] = 40;
  token.len_max[1] = 40;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  /**
   * salt
   */

  const u8 *salt_pos = token.buf[0];
  const int salt_len = token.len[0];

  int user_len = 0;

  for (int i = 0; i < salt_len; i++)
  {
    if (salt_pos[i] == ' ') continue;

    user_len++;
  }

  // SAP user names cannot be longer than 12 characters
  if (user_len > 12) return (PARSER_SALT_LENGTH);

  // SAP user name cannot start with ! or ?
  if (salt_pos[0] == '!' || salt_pos[0] == '?') return (PARSER_SALT_VALUE);

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  /**
   * hash
   */

  const u8 *hash_pos = token.buf[1];

  digest[0] = hex_to_u32 ((const u8 *) &hash_pos[ 0]);
  digest[1] = hex_to_u32 ((const u8 *) &hash_pos[ 8]);
  digest[2] = hex_to_u32 ((const u8 *) &hash_pos[16]);
  digest[3] = hex_to_u32 ((const u8 *) &hash_pos[24]);
  digest[4] = hex_to_u32 ((const u8 *) &hash_pos[32]);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  return (PARSER_OK);
}

int drupal7_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u64 *digest = (u64 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_DRUPAL7;

  token.len[0]     = 3;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len[1]     = 1;
  token.attr[1]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64B;

  token.len[2]     = 8;
  token.attr[2]    = TOKEN_ATTR_FIXED_LENGTH;

  token.len[3]     = 43;
  token.attr[3]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64B;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // iter

  const u8 *iter_pos = token.buf[1];

  u32 salt_iter = 1u << itoa64_to_int (iter_pos[0]);

  if (salt_iter > 0x80000000) return (PARSER_SALT_ITERATION);

  memcpy ((u8 *) salt->salt_sign, input_buf, 4);

  salt->salt_iter = salt_iter;

  // salt

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2];

  memcpy ((u8 *) salt->salt_buf, salt_pos, salt_len);

  salt->salt_len = salt_len;

  // hash

  const u8 *hash_pos = token.buf[3];

  drupal7_decode ((u8 *) digest, hash_pos);

  // ugly hack start

  u8 *tmp = (u8 *) salt->salt_buf_pc;

  tmp[0] = hash_pos[42];

  // ugly hack end

  digest[ 0] = byte_swap_64 (digest[ 0]);
  digest[ 1] = byte_swap_64 (digest[ 1]);
  digest[ 2] = byte_swap_64 (digest[ 2]);
  digest[ 3] = byte_swap_64 (digest[ 3]);
  digest[ 4] = 0;
  digest[ 5] = 0;
  digest[ 6] = 0;
  digest[ 7] = 0;

  return (PARSER_OK);
}

int sybasease_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 3;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_SYBASEASE;

  token.len[0]  = 6;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len[1]  = 16;
  token.attr[1] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  token.len[2]  = 64;
  token.attr[2] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // salt

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  // hash

  const u8 *hash_pos = token.buf[2];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);
  digest[5] = hex_to_u32 (hash_pos + 40);
  digest[6] = hex_to_u32 (hash_pos + 48);
  digest[7] = hex_to_u32 (hash_pos + 56);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  return (PARSER_OK);
}

int mysql323_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.len_min[0] = 16;
  token.len_max[0] = 16;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = 0;
  digest[3] = 0;

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = 0;
  digest[3] = 0;

  return (PARSER_OK);
}

int rakp_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  rakp_t *rakp = (rakp_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 2;

  token.len_min[0] = 64;
  token.len_max[0] = 512;
  token.sep[0]     = hashconfig->separator;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 40;
  token.len_max[1] = 40;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *salt_pos = token.buf[0];
  const int salt_len = token.len[0];

  u8 *rakp_ptr = (u8 *) rakp->salt_buf;

  int i;
  int j;

  for (i = 0, j = 0; i < salt_len; i += 2, j += 1)
  {
    rakp_ptr[j] = hex_to_u8 (salt_pos + i);
  }

  rakp_ptr[j] = 0x80;

  rakp->salt_len = j;

  for (i = 0; i < 64; i++)
  {
    rakp->salt_buf[i] = byte_swap_32 (rakp->salt_buf[i]);
  }

  salt->salt_buf[0] = rakp->salt_buf[0];
  salt->salt_buf[1] = rakp->salt_buf[1];
  salt->salt_buf[2] = rakp->salt_buf[2];
  salt->salt_buf[3] = rakp->salt_buf[3];
  salt->salt_buf[4] = rakp->salt_buf[4];
  salt->salt_buf[5] = rakp->salt_buf[5];
  salt->salt_buf[6] = rakp->salt_buf[6];
  salt->salt_buf[7] = rakp->salt_buf[7];

  salt->salt_len = 32; // muss min. 32 haben

  const u8 *hash_pos = token.buf[1];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  return (PARSER_OK);
}

int netscaler_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 3;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_NETSCALER;

  token.len[0]  = 1;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len[1]  = 8;
  token.attr[1] = TOKEN_ATTR_FIXED_LENGTH;

  token.len[2]  = 40;
  token.attr[2] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // salt

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  memcpy (salt->salt_buf, salt_pos, salt_len);

  salt->salt_buf[0] = byte_swap_32 (salt->salt_buf[0]);
  salt->salt_buf[1] = byte_swap_32 (salt->salt_buf[1]);

  salt->salt_len = salt_len;

  // hash

  const u8 *hash_pos = token.buf[2];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA1M_A;
    digest[1] -= SHA1M_B;
    digest[2] -= SHA1M_C;
    digest[3] -= SHA1M_D;
    digest[4] -= SHA1M_E;
  }

  return (PARSER_OK);
}

int chap_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 3;

  token.sep[0]     = ':';
  token.len_min[0] = 32;
  token.len_max[0] = 32;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[1]     = ':';
  token.len_min[1] = 32;
  token.len_max[1] = 32;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[2] = 2;
  token.len_max[2] = 2;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= MD5M_A;
    digest[1] -= MD5M_B;
    digest[2] -= MD5M_C;
    digest[3] -= MD5M_D;
  }

  const u8 *salt_pos = token.buf[1];

  salt->salt_buf[0] = hex_to_u32 (salt_pos +  0);
  salt->salt_buf[1] = hex_to_u32 (salt_pos +  8);
  salt->salt_buf[2] = hex_to_u32 (salt_pos + 16);
  salt->salt_buf[3] = hex_to_u32 (salt_pos + 24);

  salt->salt_len = 16 + 1;

  salt->salt_buf[4] = hex_to_u8 (token.buf[2]);

  return (PARSER_OK);
}

int cloudkey_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  cloudkey_t *cloudkey = (cloudkey_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 4;

  token.sep[0]     = ':';
  token.len_min[0] = 64;
  token.len_max[0] = 64;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[1]     = ':';
  token.len_min[1] = 32;
  token.len_max[1] = 32;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[2]     = ':';
  token.len_min[2] = 1;
  token.len_max[2] = 6;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[3] = 2;
  token.len_max[3] = 2048;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // hash

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);
  digest[5] = hex_to_u32 (hash_pos + 40);
  digest[6] = hex_to_u32 (hash_pos + 48);
  digest[7] = hex_to_u32 (hash_pos + 56);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  // salt

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  u8 *saltbuf_ptr = (u8 *) salt->salt_buf;

  for (int i = 0; i < salt_len; i += 2)
  {
    const u8 p0 = salt_pos[i + 0];
    const u8 p1 = salt_pos[i + 1];

    *saltbuf_ptr++ = hex_convert (p1) << 0
                   | hex_convert (p0) << 4;
  }

  salt->salt_buf[4] = 0x01000000;
  salt->salt_buf[5] = 0x80;

  salt->salt_len = salt_len / 2;

  // iteration

  const u8 *iter_pos = token.buf[2];

  salt->salt_iter = hc_strtoul ((const char *) iter_pos, NULL, 10) - 1;

  // data

  const u8 *data_pos = token.buf[3];
  const int data_len = token.len[3];

  u8 *databuf_ptr = (u8 *) cloudkey->data_buf;

  for (int i = 0; i < data_len; i += 2)
  {
    const u8 p0 = data_pos[i + 0];
    const u8 p1 = data_pos[i + 1];

    *databuf_ptr++ = hex_convert (p1) << 0
                   | hex_convert (p0) << 4;
  }

  *databuf_ptr++ = 0x80;

  for (int i = 0; i < 512; i++)
  {
    cloudkey->data_buf[i] = byte_swap_32 (cloudkey->data_buf[i]);
  }

  cloudkey->data_len = data_len / 2;

  return (PARSER_OK);
}

int nsec3_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 4;

  token.sep[0]     = ':';
  token.len_min[0] = 32;
  token.len_max[0] = 32;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[1]     = ':';
  token.len_min[1] = 1;
  token.len_max[1] = 32;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[2]     = ':';
  token.len_min[2] = 1;
  token.len_max[2] = 32;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[3]     = ':';
  token.len_min[3] = 1;
  token.len_max[3] = 6;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // ok, the plan for this algorithm is the following:
  // we have 2 salts here, the domain-name and a random salt
  // while both are used in the initial transformation,
  // only the random salt is used in the following iterations
  // so we create two buffer, one that includes domain-name (stored into salt_buf_pc[])
  // and one that includes only the real salt (stored into salt_buf[]).
  // the domain-name length is put into array position 7 of salt_buf_pc[] since there is not salt_pc_len

  const u8 *hash_pos = token.buf[0];
  const int hash_len = token.len[0];

  u8 tmp_buf[100] = { 0 };

  base32_decode (itoa32_to_int, hash_pos, hash_len, tmp_buf);

  memcpy (digest, tmp_buf, 20);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  // domain

  const u8 *domain_pos = token.buf[1];
  const int domain_len = token.len[1];

  u8 *salt_buf_pc_ptr = (u8 *) salt->salt_buf_pc;

  memcpy (salt_buf_pc_ptr, domain_pos, domain_len);

  if (salt_buf_pc_ptr[0] != '.') return (PARSER_SALT_VALUE);

  u8 *len_ptr = salt_buf_pc_ptr;

  *len_ptr = 0;

  for (int i = 1; i < domain_len; i++)
  {
    if (salt_buf_pc_ptr[i] == '.')
    {
      len_ptr = salt_buf_pc_ptr + i;

      *len_ptr = 0;
    }
    else
    {
      *len_ptr += 1;
    }
  }

  salt->salt_len_pc = domain_len;

  // "real" salt

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  // iteration

  const u8 *iter_pos = token.buf[3];

  salt->salt_iter = hc_strtoul ((const char *) iter_pos, NULL, 10);

  return (PARSER_OK);
}

int wbb3_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 40;
  token.len_max[0] = 40;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 40;
  token.len_max[1] = 40;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int opencart_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 40;
  token.len_max[0] = 40;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 9;
  token.len_max[1] = 9;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int racf_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  const u8 ascii_to_ebcdic[] =
  {
    0x00, 0x01, 0x02, 0x03, 0x37, 0x2d, 0x2e, 0x2f, 0x16, 0x05, 0x25, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
    0x10, 0x11, 0x12, 0x13, 0x3c, 0x3d, 0x32, 0x26, 0x18, 0x19, 0x3f, 0x27, 0x1c, 0x1d, 0x1e, 0x1f,
    0x40, 0x4f, 0x7f, 0x7b, 0x5b, 0x6c, 0x50, 0x7d, 0x4d, 0x5d, 0x5c, 0x4e, 0x6b, 0x60, 0x4b, 0x61,
    0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0x7a, 0x5e, 0x4c, 0x7e, 0x6e, 0x6f,
    0x7c, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6,
    0xd7, 0xd8, 0xd9, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0x4a, 0xe0, 0x5a, 0x5f, 0x6d,
    0x79, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96,
    0x97, 0x98, 0x99, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xc0, 0x6a, 0xd0, 0xa1, 0x07,
    0x20, 0x21, 0x22, 0x23, 0x24, 0x15, 0x06, 0x17, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x09, 0x0a, 0x1b,
    0x30, 0x31, 0x1a, 0x33, 0x34, 0x35, 0x36, 0x08, 0x38, 0x39, 0x3a, 0x3b, 0x04, 0x14, 0x3e, 0xe1,
    0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57,
    0x58, 0x59, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75,
    0x76, 0x77, 0x78, 0x80, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e,
    0x9f, 0xa0, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7,
    0xb8, 0xb9, 0xba, 0xbb, 0xbc, 0xbd, 0xbe, 0xbf, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xda, 0xdb,
    0xdc, 0xdd, 0xde, 0xdf, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff,
  };

  token_t token;

  token.token_cnt  = 3;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_RACF;

  token.len_min[0] = 6;
  token.len_max[0] = 6;
  token.sep[0]     = '*';
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 0;
  token.len_max[1] = 8;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[2] = 2;
  token.len_max[2] = 16;
  token.sep[2]     = '$';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // salt

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  // salt pc

  u8 *salt_buf_ptr    = (u8 *) salt->salt_buf;
  u8 *salt_buf_pc_ptr = (u8 *) salt->salt_buf_pc;

  for (u32 i = 0; i < salt->salt_len; i++)
  {
    salt_buf_pc_ptr[i] = ascii_to_ebcdic[(int) salt_buf_ptr[i]];
  }
  for (u32 i = salt_len; i < 8; i++)
  {
    salt_buf_pc_ptr[i] = 0x40;
  }

  u32 tt;

  IP (salt->salt_buf_pc[0], salt->salt_buf_pc[1], tt);

  salt->salt_buf_pc[0] = rotl32 (salt->salt_buf_pc[0], 3u);
  salt->salt_buf_pc[1] = rotl32 (salt->salt_buf_pc[1], 3u);

  // hash

  const u8 *hash_pos = token.buf[2];

  digest[0] = hex_to_u32 (hash_pos + 0);
  digest[1] = hex_to_u32 (hash_pos + 8);

  IP (digest[0], digest[1], tt);

  digest[0] = rotr32 (digest[0], 29);
  digest[1] = rotr32 (digest[1], 29);
  digest[2] = 0;
  digest[3] = 0;

  return (PARSER_OK);
}

int lotus5_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.len_min[0] = 32;
  token.len_max[0] = 32;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  return (PARSER_OK);
}

int lotus6_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt = 4;

  token.len[0]  = 1;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH;

  token.len[1]  = 1;
  token.attr[1] = TOKEN_ATTR_FIXED_LENGTH;

  token.len[2]  = 19;
  token.attr[2] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_BASE64A;

  token.len[3]  = 1;
  token.attr[3] = TOKEN_ATTR_FIXED_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  if (token.buf[0][0] != '(') return (PARSER_SIGNATURE_UNMATCHED);
  if (token.buf[1][0] != 'G') return (PARSER_SIGNATURE_UNMATCHED);
  if (token.buf[3][0] != ')') return (PARSER_SIGNATURE_UNMATCHED);

  const u8 *hash_pos = token.buf[2];
  const int hash_len = token.len[2];

  u8 tmp_buf[120] = { 0 };

  base64_decode (lotus64_to_int, hash_pos, hash_len, tmp_buf);

  tmp_buf[3] += -4; // dont ask!

  // salt

  memcpy (salt->salt_buf, tmp_buf, 5);

  salt->salt_len = 5;

  memcpy (digest, tmp_buf + 5, 9);

  // yes, only 9 byte are needed to crack, but 10 to display

  salt->salt_buf_pc[7] = hash_pos[18];

  return (PARSER_OK);
}

int lotus8_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt = 4;

  token.len[0]  = 1;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH;

  token.len[1]  = 1;
  token.attr[1] = TOKEN_ATTR_FIXED_LENGTH;

  token.len[2]  = 48;
  token.attr[2] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_BASE64A;

  token.len[3]  = 1;
  token.attr[3] = TOKEN_ATTR_FIXED_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  if (token.buf[0][0] != '(') return (PARSER_SIGNATURE_UNMATCHED);
  if (token.buf[1][0] != 'H') return (PARSER_SIGNATURE_UNMATCHED);
  if (token.buf[3][0] != ')') return (PARSER_SIGNATURE_UNMATCHED);

  // decode

  const u8 *hash_pos = token.buf[2];
  const int hash_len = token.len[2];

  u8 tmp_buf[120] = { 0 };

  base64_decode (lotus64_to_int, hash_pos, hash_len, tmp_buf);

  tmp_buf[3] += -4; // dont ask!

  // salt

  memcpy (salt->salt_buf, tmp_buf, 16);

  salt->salt_len = 16; // Attention: in theory we have 2 salt_len, one for the -m 8700 part (len: 8), 2nd for the 9100 part (len: 16)

  // iteration

  char tmp_iter_buf[11] = { 0 };

  memcpy (tmp_iter_buf, tmp_buf + 16, 10);

  tmp_iter_buf[10] = 0;

  salt->salt_iter = hc_strtoul ((const char *) tmp_iter_buf, NULL, 10);

  if (salt->salt_iter < 1) // well, the limit hopefully is much higher
  {
    return (PARSER_SALT_ITERATION);
  }

  salt->salt_iter--; // first round in init

  // 2 additional bytes for display only

  salt->salt_buf_pc[0] = tmp_buf[26];
  salt->salt_buf_pc[1] = tmp_buf[27];

  // digest

  memcpy (digest, tmp_buf + 28, 8);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = 0;
  digest[3] = 0;

  return (PARSER_OK);
}

int hmailserver_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.len[0]     = 6;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH;

  token.len_min[1] = 64;
  token.len_max[1] = 64;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[1];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);
  digest[5] = hex_to_u32 (hash_pos + 40);
  digest[6] = hex_to_u32 (hash_pos + 48);
  digest[7] = hex_to_u32 (hash_pos + 56);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA256M_A;
    digest[1] -= SHA256M_B;
    digest[2] -= SHA256M_C;
    digest[3] -= SHA256M_D;
    digest[4] -= SHA256M_E;
    digest[5] -= SHA256M_F;
    digest[6] -= SHA256M_G;
    digest[7] -= SHA256M_H;
  }

  const u8 *salt_pos = token.buf[0];
  const int salt_len = token.len[0];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int phps_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 3;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_PHPS;

  token.len[0]     = 6;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '$';
  token.len_min[1] = 0;
  token.len_max[1] = SALT_MAX;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[2] = 32;
  token.len_max[2] = 32;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[2];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= MD5M_A;
    digest[1] -= MD5M_B;
    digest[2] -= MD5M_C;
    digest[3] -= MD5M_D;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int mediawiki_b_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 3;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_MEDIAWIKI_B;

  token.len[0]     = 3;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '$';
  token.len_min[1] = SALT_MIN;
  token.len_max[1] = SALT_MAX;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[2] = 32;
  token.len_max[2] = 32;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[2];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= MD5M_A;
    digest[1] -= MD5M_B;
    digest[2] -= MD5M_C;
    digest[3] -= MD5M_D;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  u8 *salt_buf_ptr = (u8 *) salt->salt_buf;

  salt_buf_ptr[salt_len] = 0x2d;

  salt->salt_len = salt_len + 1;

  return (PARSER_OK);
}

int peoplesoft_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 1;

  token.len_min[0] = 28;
  token.len_max[0] = 28;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];
  const int hash_len = token.len[0];

  u8 tmp_buf[100] = { 0 };

  base64_decode (base64_to_int, hash_pos, hash_len, tmp_buf);

  memcpy (digest, tmp_buf, 20);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA1M_A;
    digest[1] -= SHA1M_B;
    digest[2] -= SHA1M_C;
    digest[3] -= SHA1M_D;
    digest[4] -= SHA1M_E;
  }

  salt->salt_buf[0] = 0x80;

  salt->salt_len = 0;

  return (PARSER_OK);
}

int skype_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 32;
  token.len_max[0] = 32;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = SALT_MIN;
  token.len_max[1] = SALT_MAX - 8;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= MD5M_A;
    digest[1] -= MD5M_B;
    digest[2] -= MD5M_C;
    digest[3] -= MD5M_D;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  /*
   * add static "salt" part
   */

  u8 *salt_buf_ptr = (u8 *) salt->salt_buf;

  memcpy (salt_buf_ptr + salt_len, "\nskyper\n", 8);

  salt->salt_len += 8;

  return (PARSER_OK);
}

int androidfde_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  androidfde_t *androidfde = (androidfde_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 6;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_ANDROIDFDE;

  token.len[0]     = 5;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 2;
  token.len_max[1] = 2;
  token.sep[1]     = '$';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[2] = 32;
  token.len_max[2] = 32;
  token.sep[2]     = '$';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[3] = 2;
  token.len_max[3] = 2;
  token.sep[3]     = '$';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[4] = 32;
  token.len_max[4] = 32;
  token.sep[4]     = '$';
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[5] = 3072;
  token.len_max[5] = 3072;
  token.sep[5]     = '$';
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // hash

  const u8 *hash_pos = token.buf[4];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);

  // salt

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2];

  salt->salt_buf[0] = hex_to_u32 (salt_pos +  0);
  salt->salt_buf[1] = hex_to_u32 (salt_pos +  8);
  salt->salt_buf[2] = hex_to_u32 (salt_pos + 16);
  salt->salt_buf[3] = hex_to_u32 (salt_pos + 24);

  salt->salt_len  = salt_len / 2;
  salt->salt_iter = ROUNDS_ANDROIDFDE - 1;

  // data

  const u8 *data_pos = token.buf[5];
  const int data_len = token.len[5];

  for (int i = 0, j = 0; i < data_len; i += 8, j += 1)
  {
    androidfde->data[j] = hex_to_u32 (data_pos + i);

    androidfde->data[j] = byte_swap_32 (androidfde->data[j]);
  }

  return (PARSER_OK);
}

int scrypt_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 6;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_SCRYPT;

  token.len_min[0] = 6;
  token.len_max[0] = 6;
  token.sep[0]     = ':';
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.sep[1]     = ':';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[2] = 1;
  token.len_max[2] = 6;
  token.sep[2]     = ':';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[3] = 1;
  token.len_max[3] = 6;
  token.sep[3]     = ':';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[4] = 0;
  token.len_max[4] = 45;
  token.sep[4]     = ':';
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  token.len_min[5] = 44;
  token.len_max[5] = 44;
  token.sep[5]     = ':';
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // scrypt settings

  const u8 *N_pos = token.buf[1];
  const u8 *r_pos = token.buf[2];
  const u8 *p_pos = token.buf[3];

  salt->scrypt_N = hc_strtoul ((const char *) N_pos, NULL, 10);
  salt->scrypt_r = hc_strtoul ((const char *) r_pos, NULL, 10);
  salt->scrypt_p = hc_strtoul ((const char *) p_pos, NULL, 10);

  // salt

  const u8 *salt_pos = token.buf[4];
  const int salt_len = token.len[4];

  u8 tmp_buf[33] = { 0 };

  const int tmp_len = base64_decode (base64_to_int, (const u8 *) salt_pos, salt_len, tmp_buf);

  memcpy (salt->salt_buf, tmp_buf, tmp_len);

  salt->salt_len  = tmp_len;
  salt->salt_iter = 1;

  // digest - base64 decode

  const u8 *hash_pos = token.buf[5];
  const int hash_len = token.len[5];

  memset (tmp_buf, 0, sizeof (tmp_buf));

  base64_decode (base64_to_int, (const u8 *) hash_pos, hash_len, tmp_buf);

  memcpy (digest, tmp_buf, 32);

  return (PARSER_OK);
}

int cisco8_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  pbkdf2_sha256_t *pbkdf2_sha256 = (pbkdf2_sha256_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 3;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_CISCO8;

  token.len[0]     = 3;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 14;
  token.len_max[1] = 14;
  token.sep[1]     = '$';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len[2]     = 43;
  token.attr[2]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64B;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // salt is not encoded

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  u8 *salt_buf_ptr = (u8 *) pbkdf2_sha256->salt_buf;

  memcpy (salt_buf_ptr, salt_pos, salt_len);

  salt_buf_ptr[17] = 0x01;
  salt_buf_ptr[18] = 0x80;

  // add some stuff to normal salt to make sorted happy

  salt->salt_buf[0] = pbkdf2_sha256->salt_buf[0];
  salt->salt_buf[1] = pbkdf2_sha256->salt_buf[1];
  salt->salt_buf[2] = pbkdf2_sha256->salt_buf[2];
  salt->salt_buf[3] = pbkdf2_sha256->salt_buf[3];

  salt->salt_len  = salt_len;
  salt->salt_iter = ROUNDS_CISCO8 - 1;

  // base64 decode hash

  const u8 *hash_pos = token.buf[2];
  const int hash_len = token.len[2];

  u8 tmp_buf[100] = { 0 };

  const int tmp_len = base64_decode (itoa64_to_int, hash_pos, hash_len, tmp_buf);

  if (tmp_len != 32) return (PARSER_HASH_LENGTH);

  memcpy (digest, tmp_buf, 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  return (PARSER_OK);
}

int cisco9_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 3;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_CISCO9;

  token.len[0]     = 3;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 14;
  token.len_max[1] = 14;
  token.sep[1]     = '$';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len[2]     = 43;
  token.attr[2]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64B;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // salt is not encoded

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  u8 *salt_buf_ptr = (u8 *) salt->salt_buf;

  memcpy (salt_buf_ptr, salt_pos, salt_len);

  salt->salt_len  = salt_len;
  salt->salt_iter = 1;

  salt->scrypt_N  = 16384;
  salt->scrypt_r  = 1;
  salt->scrypt_p  = 1;

  // base64 decode hash

  const u8 *hash_pos = token.buf[2];
  const int hash_len = token.len[2];

  u8 tmp_buf[100] = { 0 };

  const int tmp_len = base64_decode (itoa64_to_int, hash_pos, hash_len, tmp_buf);

  if (tmp_len != 32) return (PARSER_HASH_LENGTH);

  memcpy (digest, tmp_buf, 32);

  return (PARSER_OK);
}

int office2007_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  office2007_t *office2007 = (office2007_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 8;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_OFFICE2007;

  token.len_min[0] = 8;
  token.len_max[0] = 8;
  token.sep[0]     = '*';
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 4;
  token.len_max[1] = 4;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 2;
  token.len_max[2] = 2;
  token.sep[2]     = '*';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[3] = 3;
  token.len_max[3] = 3;
  token.sep[3]     = '*';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[4] = 2;
  token.len_max[4] = 2;
  token.sep[4]     = '*';
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[5] = 32;
  token.len_max[5] = 32;
  token.sep[5]     = '*';
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[6] = 32;
  token.len_max[6] = 32;
  token.sep[6]     = '*';
  token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[7] = 40;
  token.len_max[7] = 40;
  token.sep[7]     = '*';
  token.attr[7]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *version_pos               = token.buf[1];
  const u8 *verifierHashSize_pos      = token.buf[2];
  const u8 *keySize_pos               = token.buf[3];
  const u8 *saltSize_pos              = token.buf[4];
  const u8 *osalt_pos                 = token.buf[5];
  const u8 *encryptedVerifier_pos     = token.buf[6];
  const u8 *encryptedVerifierHash_pos = token.buf[7];

  const u32 version           = hc_strtoul ((const char *) version_pos, NULL, 10);
  const u32 verifierHashSize  = hc_strtoul ((const char *) verifierHashSize_pos, NULL, 10);
  const u32 keySize           = hc_strtoul ((const char *) keySize_pos, NULL, 10);
  const u32 saltSize          = hc_strtoul ((const char *) saltSize_pos, NULL, 10);

  if (version           != 2007)            return (PARSER_SALT_VALUE);
  if (verifierHashSize  != 20)              return (PARSER_SALT_VALUE);
  if (saltSize          != 16)              return (PARSER_SALT_VALUE);
  if ((keySize != 128) && (keySize != 256)) return (PARSER_SALT_VALUE);

  office2007->keySize = keySize;

  /**
   * salt
   */

  salt->salt_len  = 16;
  salt->salt_iter = ROUNDS_OFFICE2007;

  salt->salt_buf[0] = hex_to_u32 (osalt_pos +  0);
  salt->salt_buf[1] = hex_to_u32 (osalt_pos +  8);
  salt->salt_buf[2] = hex_to_u32 (osalt_pos + 16);
  salt->salt_buf[3] = hex_to_u32 (osalt_pos + 24);

  salt->salt_buf[0] = byte_swap_32 (salt->salt_buf[0]);
  salt->salt_buf[1] = byte_swap_32 (salt->salt_buf[1]);
  salt->salt_buf[2] = byte_swap_32 (salt->salt_buf[2]);
  salt->salt_buf[3] = byte_swap_32 (salt->salt_buf[3]);

  /**
   * esalt
   */

  office2007->encryptedVerifier[0] = hex_to_u32 (encryptedVerifier_pos +  0);
  office2007->encryptedVerifier[1] = hex_to_u32 (encryptedVerifier_pos +  8);
  office2007->encryptedVerifier[2] = hex_to_u32 (encryptedVerifier_pos + 16);
  office2007->encryptedVerifier[3] = hex_to_u32 (encryptedVerifier_pos + 24);

  office2007->encryptedVerifier[0] = byte_swap_32 (office2007->encryptedVerifier[0]);
  office2007->encryptedVerifier[1] = byte_swap_32 (office2007->encryptedVerifier[1]);
  office2007->encryptedVerifier[2] = byte_swap_32 (office2007->encryptedVerifier[2]);
  office2007->encryptedVerifier[3] = byte_swap_32 (office2007->encryptedVerifier[3]);

  office2007->encryptedVerifierHash[0] = hex_to_u32 (encryptedVerifierHash_pos +  0);
  office2007->encryptedVerifierHash[1] = hex_to_u32 (encryptedVerifierHash_pos +  8);
  office2007->encryptedVerifierHash[2] = hex_to_u32 (encryptedVerifierHash_pos + 16);
  office2007->encryptedVerifierHash[3] = hex_to_u32 (encryptedVerifierHash_pos + 24);
  office2007->encryptedVerifierHash[4] = hex_to_u32 (encryptedVerifierHash_pos + 32);

  office2007->encryptedVerifierHash[0] = byte_swap_32 (office2007->encryptedVerifierHash[0]);
  office2007->encryptedVerifierHash[1] = byte_swap_32 (office2007->encryptedVerifierHash[1]);
  office2007->encryptedVerifierHash[2] = byte_swap_32 (office2007->encryptedVerifierHash[2]);
  office2007->encryptedVerifierHash[3] = byte_swap_32 (office2007->encryptedVerifierHash[3]);
  office2007->encryptedVerifierHash[4] = byte_swap_32 (office2007->encryptedVerifierHash[4]);

  /**
   * digest
   */

  digest[0] = office2007->encryptedVerifierHash[0];
  digest[1] = office2007->encryptedVerifierHash[1];
  digest[2] = office2007->encryptedVerifierHash[2];
  digest[3] = office2007->encryptedVerifierHash[3];

  return (PARSER_OK);
}

int office2010_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  office2010_t *office2010 = (office2010_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 8;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_OFFICE2010;

  token.len_min[0] = 8;
  token.len_max[0] = 8;
  token.sep[0]     = '*';
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 4;
  token.len_max[1] = 4;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 6;
  token.len_max[2] = 6;
  token.sep[2]     = '*';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[3] = 3;
  token.len_max[3] = 3;
  token.sep[3]     = '*';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[4] = 2;
  token.len_max[4] = 2;
  token.sep[4]     = '*';
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[5] = 32;
  token.len_max[5] = 32;
  token.sep[5]     = '*';
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[6] = 32;
  token.len_max[6] = 32;
  token.sep[6]     = '*';
  token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[7] = 64;
  token.len_max[7] = 64;
  token.sep[7]     = '*';
  token.attr[7]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *version_pos               = token.buf[1];
  const u8 *spinCount_pos             = token.buf[2];
  const u8 *keySize_pos               = token.buf[3];
  const u8 *saltSize_pos              = token.buf[4];
  const u8 *osalt_pos                 = token.buf[5];
  const u8 *encryptedVerifier_pos     = token.buf[6];
  const u8 *encryptedVerifierHash_pos = token.buf[7];

  const u32 version   = hc_strtoul ((const char *) version_pos, NULL, 10);
  const u32 spinCount = hc_strtoul ((const char *) spinCount_pos, NULL, 10);
  const u32 keySize   = hc_strtoul ((const char *) keySize_pos, NULL, 10);
  const u32 saltSize  = hc_strtoul ((const char *) saltSize_pos, NULL, 10);

  if (version   != 2010)    return (PARSER_SALT_VALUE);
  if (spinCount != 100000)  return (PARSER_SALT_VALUE);
  if (keySize   != 128)     return (PARSER_SALT_VALUE);
  if (saltSize  != 16)      return (PARSER_SALT_VALUE);

  /**
   * salt
   */

  salt->salt_len  = 16;
  salt->salt_iter = spinCount;

  salt->salt_buf[0] = hex_to_u32 (osalt_pos +  0);
  salt->salt_buf[1] = hex_to_u32 (osalt_pos +  8);
  salt->salt_buf[2] = hex_to_u32 (osalt_pos + 16);
  salt->salt_buf[3] = hex_to_u32 (osalt_pos + 24);

  salt->salt_buf[0] = byte_swap_32 (salt->salt_buf[0]);
  salt->salt_buf[1] = byte_swap_32 (salt->salt_buf[1]);
  salt->salt_buf[2] = byte_swap_32 (salt->salt_buf[2]);
  salt->salt_buf[3] = byte_swap_32 (salt->salt_buf[3]);

  /**
   * esalt
   */

  office2010->encryptedVerifier[0] = hex_to_u32 (encryptedVerifier_pos +  0);
  office2010->encryptedVerifier[1] = hex_to_u32 (encryptedVerifier_pos +  8);
  office2010->encryptedVerifier[2] = hex_to_u32 (encryptedVerifier_pos + 16);
  office2010->encryptedVerifier[3] = hex_to_u32 (encryptedVerifier_pos + 24);

  office2010->encryptedVerifier[0] = byte_swap_32 (office2010->encryptedVerifier[0]);
  office2010->encryptedVerifier[1] = byte_swap_32 (office2010->encryptedVerifier[1]);
  office2010->encryptedVerifier[2] = byte_swap_32 (office2010->encryptedVerifier[2]);
  office2010->encryptedVerifier[3] = byte_swap_32 (office2010->encryptedVerifier[3]);

  office2010->encryptedVerifierHash[0] = hex_to_u32 (encryptedVerifierHash_pos +  0);
  office2010->encryptedVerifierHash[1] = hex_to_u32 (encryptedVerifierHash_pos +  8);
  office2010->encryptedVerifierHash[2] = hex_to_u32 (encryptedVerifierHash_pos + 16);
  office2010->encryptedVerifierHash[3] = hex_to_u32 (encryptedVerifierHash_pos + 24);
  office2010->encryptedVerifierHash[4] = hex_to_u32 (encryptedVerifierHash_pos + 32);
  office2010->encryptedVerifierHash[5] = hex_to_u32 (encryptedVerifierHash_pos + 40);
  office2010->encryptedVerifierHash[6] = hex_to_u32 (encryptedVerifierHash_pos + 48);
  office2010->encryptedVerifierHash[7] = hex_to_u32 (encryptedVerifierHash_pos + 56);

  office2010->encryptedVerifierHash[0] = byte_swap_32 (office2010->encryptedVerifierHash[0]);
  office2010->encryptedVerifierHash[1] = byte_swap_32 (office2010->encryptedVerifierHash[1]);
  office2010->encryptedVerifierHash[2] = byte_swap_32 (office2010->encryptedVerifierHash[2]);
  office2010->encryptedVerifierHash[3] = byte_swap_32 (office2010->encryptedVerifierHash[3]);
  office2010->encryptedVerifierHash[4] = byte_swap_32 (office2010->encryptedVerifierHash[4]);
  office2010->encryptedVerifierHash[5] = byte_swap_32 (office2010->encryptedVerifierHash[5]);
  office2010->encryptedVerifierHash[6] = byte_swap_32 (office2010->encryptedVerifierHash[6]);
  office2010->encryptedVerifierHash[7] = byte_swap_32 (office2010->encryptedVerifierHash[7]);

  /**
   * digest
   */

  digest[0] = office2010->encryptedVerifierHash[0];
  digest[1] = office2010->encryptedVerifierHash[1];
  digest[2] = office2010->encryptedVerifierHash[2];
  digest[3] = office2010->encryptedVerifierHash[3];

  return (PARSER_OK);
}

int office2013_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  office2013_t *office2013 = (office2013_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 8;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_OFFICE2013;

  token.len_min[0] = 8;
  token.len_max[0] = 8;
  token.sep[0]     = '*';
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 4;
  token.len_max[1] = 4;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 6;
  token.len_max[2] = 6;
  token.sep[2]     = '*';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[3] = 3;
  token.len_max[3] = 3;
  token.sep[3]     = '*';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[4] = 2;
  token.len_max[4] = 2;
  token.sep[4]     = '*';
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[5] = 32;
  token.len_max[5] = 32;
  token.sep[5]     = '*';
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[6] = 32;
  token.len_max[6] = 32;
  token.sep[6]     = '*';
  token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[7] = 64;
  token.len_max[7] = 64;
  token.sep[7]     = '*';
  token.attr[7]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *version_pos               = token.buf[1];
  const u8 *spinCount_pos             = token.buf[2];
  const u8 *keySize_pos               = token.buf[3];
  const u8 *saltSize_pos              = token.buf[4];
  const u8 *osalt_pos                 = token.buf[5];
  const u8 *encryptedVerifier_pos     = token.buf[6];
  const u8 *encryptedVerifierHash_pos = token.buf[7];

  const u32 version   =  hc_strtoul ((const char *) version_pos, NULL, 10);
  const u32 spinCount =  hc_strtoul ((const char *) spinCount_pos, NULL, 10);
  const u32 keySize   =  hc_strtoul ((const char *) keySize_pos, NULL, 10);
  const u32 saltSize  =  hc_strtoul ((const char *) saltSize_pos, NULL, 10);

  if (version   != 2013)    return (PARSER_SALT_VALUE);
  if (spinCount != 100000)  return (PARSER_SALT_VALUE);
  if (keySize   != 256)     return (PARSER_SALT_VALUE);
  if (saltSize  != 16)      return (PARSER_SALT_VALUE);

  /**
   * salt
   */

  salt->salt_len  = 16;
  salt->salt_iter = spinCount;

  salt->salt_buf[0] = hex_to_u32 (osalt_pos +  0);
  salt->salt_buf[1] = hex_to_u32 (osalt_pos +  8);
  salt->salt_buf[2] = hex_to_u32 (osalt_pos + 16);
  salt->salt_buf[3] = hex_to_u32 (osalt_pos + 24);

  salt->salt_buf[0] = byte_swap_32 (salt->salt_buf[0]);
  salt->salt_buf[1] = byte_swap_32 (salt->salt_buf[1]);
  salt->salt_buf[2] = byte_swap_32 (salt->salt_buf[2]);
  salt->salt_buf[3] = byte_swap_32 (salt->salt_buf[3]);

  /**
   * esalt
   */

  office2013->encryptedVerifier[0] = hex_to_u32 (encryptedVerifier_pos +  0);
  office2013->encryptedVerifier[1] = hex_to_u32 (encryptedVerifier_pos +  8);
  office2013->encryptedVerifier[2] = hex_to_u32 (encryptedVerifier_pos + 16);
  office2013->encryptedVerifier[3] = hex_to_u32 (encryptedVerifier_pos + 24);

  office2013->encryptedVerifier[0] = byte_swap_32 (office2013->encryptedVerifier[0]);
  office2013->encryptedVerifier[1] = byte_swap_32 (office2013->encryptedVerifier[1]);
  office2013->encryptedVerifier[2] = byte_swap_32 (office2013->encryptedVerifier[2]);
  office2013->encryptedVerifier[3] = byte_swap_32 (office2013->encryptedVerifier[3]);

  office2013->encryptedVerifierHash[0] = hex_to_u32 (encryptedVerifierHash_pos +  0);
  office2013->encryptedVerifierHash[1] = hex_to_u32 (encryptedVerifierHash_pos +  8);
  office2013->encryptedVerifierHash[2] = hex_to_u32 (encryptedVerifierHash_pos + 16);
  office2013->encryptedVerifierHash[3] = hex_to_u32 (encryptedVerifierHash_pos + 24);
  office2013->encryptedVerifierHash[4] = hex_to_u32 (encryptedVerifierHash_pos + 32);
  office2013->encryptedVerifierHash[5] = hex_to_u32 (encryptedVerifierHash_pos + 40);
  office2013->encryptedVerifierHash[6] = hex_to_u32 (encryptedVerifierHash_pos + 48);
  office2013->encryptedVerifierHash[7] = hex_to_u32 (encryptedVerifierHash_pos + 56);

  office2013->encryptedVerifierHash[0] = byte_swap_32 (office2013->encryptedVerifierHash[0]);
  office2013->encryptedVerifierHash[1] = byte_swap_32 (office2013->encryptedVerifierHash[1]);
  office2013->encryptedVerifierHash[2] = byte_swap_32 (office2013->encryptedVerifierHash[2]);
  office2013->encryptedVerifierHash[3] = byte_swap_32 (office2013->encryptedVerifierHash[3]);
  office2013->encryptedVerifierHash[4] = byte_swap_32 (office2013->encryptedVerifierHash[4]);
  office2013->encryptedVerifierHash[5] = byte_swap_32 (office2013->encryptedVerifierHash[5]);
  office2013->encryptedVerifierHash[6] = byte_swap_32 (office2013->encryptedVerifierHash[6]);
  office2013->encryptedVerifierHash[7] = byte_swap_32 (office2013->encryptedVerifierHash[7]);

  /**
   * digest
   */

  digest[0] = office2013->encryptedVerifierHash[0];
  digest[1] = office2013->encryptedVerifierHash[1];
  digest[2] = office2013->encryptedVerifierHash[2];
  digest[3] = office2013->encryptedVerifierHash[3];

  return (PARSER_OK);
}

int oldoffice01_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  oldoffice01_t *oldoffice01 = (oldoffice01_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 5;

  token.signatures_cnt    = 2;
  token.signatures_buf[0] = SIGNATURE_OLDOFFICE0;
  token.signatures_buf[1] = SIGNATURE_OLDOFFICE1;

  token.len[0]     = 11;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 32;
  token.len_max[2] = 32;
  token.sep[2]     = '*';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[3] = 32;
  token.len_max[3] = 32;
  token.sep[3]     = '*';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[4] = 32;
  token.len_max[4] = 32;
  token.sep[4]     = '*';
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *version_pos               = token.buf[1];
  const u8 *osalt_pos                 = token.buf[2];
  const u8 *encryptedVerifier_pos     = token.buf[3];
  const u8 *encryptedVerifierHash_pos = token.buf[4];

  // esalt

  const u32 version = *version_pos - 0x30;

  if (version != 0 && version != 1) return (PARSER_SALT_VALUE);

  oldoffice01->version = version;

  oldoffice01->encryptedVerifier[0] = hex_to_u32 (encryptedVerifier_pos +  0);
  oldoffice01->encryptedVerifier[1] = hex_to_u32 (encryptedVerifier_pos +  8);
  oldoffice01->encryptedVerifier[2] = hex_to_u32 (encryptedVerifier_pos + 16);
  oldoffice01->encryptedVerifier[3] = hex_to_u32 (encryptedVerifier_pos + 24);

  oldoffice01->encryptedVerifierHash[0] = hex_to_u32 (encryptedVerifierHash_pos +  0);
  oldoffice01->encryptedVerifierHash[1] = hex_to_u32 (encryptedVerifierHash_pos +  8);
  oldoffice01->encryptedVerifierHash[2] = hex_to_u32 (encryptedVerifierHash_pos + 16);
  oldoffice01->encryptedVerifierHash[3] = hex_to_u32 (encryptedVerifierHash_pos + 24);

  // salt

  salt->salt_len = 16;

  salt->salt_buf[ 0] = hex_to_u32 (osalt_pos +  0);
  salt->salt_buf[ 1] = hex_to_u32 (osalt_pos +  8);
  salt->salt_buf[ 2] = hex_to_u32 (osalt_pos + 16);
  salt->salt_buf[ 3] = hex_to_u32 (osalt_pos + 24);

  // this is a workaround as office produces multiple documents with the same salt

  salt->salt_buf[ 4] = oldoffice01->encryptedVerifier[0];
  salt->salt_buf[ 5] = oldoffice01->encryptedVerifier[1];
  salt->salt_buf[ 6] = oldoffice01->encryptedVerifier[2];
  salt->salt_buf[ 7] = oldoffice01->encryptedVerifier[3];
  salt->salt_buf[ 8] = oldoffice01->encryptedVerifierHash[0];
  salt->salt_buf[ 9] = oldoffice01->encryptedVerifierHash[1];
  salt->salt_buf[10] = oldoffice01->encryptedVerifierHash[2];
  salt->salt_buf[11] = oldoffice01->encryptedVerifierHash[3];

  salt->salt_len += 32;

  /**
   * digest
   */

  digest[0] = oldoffice01->encryptedVerifierHash[0];
  digest[1] = oldoffice01->encryptedVerifierHash[1];
  digest[2] = oldoffice01->encryptedVerifierHash[2];
  digest[3] = oldoffice01->encryptedVerifierHash[3];

  return (PARSER_OK);
}

int oldoffice01cm1_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  return oldoffice01_parse_hash (input_buf, input_len, hash_buf, hashconfig);
}

int oldoffice01cm2_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  oldoffice01_t *oldoffice01 = (oldoffice01_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 6;

  token.signatures_cnt    = 2;
  token.signatures_buf[0] = SIGNATURE_OLDOFFICE0;
  token.signatures_buf[1] = SIGNATURE_OLDOFFICE1;

  token.len[0]     = 11;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 32;
  token.len_max[2] = 32;
  token.sep[2]     = '*';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[3] = 32;
  token.len_max[3] = 32;
  token.sep[3]     = '*';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[4] = 32;
  token.len_max[4] = 32;
  token.sep[4]     = ':';
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[5] = 10;
  token.len_max[5] = 10;
  token.sep[5]     = ':';
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *version_pos               = token.buf[1];
  const u8 *osalt_pos                 = token.buf[2];
  const u8 *encryptedVerifier_pos     = token.buf[3];
  const u8 *encryptedVerifierHash_pos = token.buf[4];
  const u8 *rc4key_pos                = token.buf[5];

  // esalt

  const u32 version = *version_pos - 0x30;

  if (version != 0 && version != 1) return (PARSER_SALT_VALUE);

  oldoffice01->version = version;

  oldoffice01->encryptedVerifier[0] = hex_to_u32 (encryptedVerifier_pos +  0);
  oldoffice01->encryptedVerifier[1] = hex_to_u32 (encryptedVerifier_pos +  8);
  oldoffice01->encryptedVerifier[2] = hex_to_u32 (encryptedVerifier_pos + 16);
  oldoffice01->encryptedVerifier[3] = hex_to_u32 (encryptedVerifier_pos + 24);

  oldoffice01->encryptedVerifierHash[0] = hex_to_u32 (encryptedVerifierHash_pos +  0);
  oldoffice01->encryptedVerifierHash[1] = hex_to_u32 (encryptedVerifierHash_pos +  8);
  oldoffice01->encryptedVerifierHash[2] = hex_to_u32 (encryptedVerifierHash_pos + 16);
  oldoffice01->encryptedVerifierHash[3] = hex_to_u32 (encryptedVerifierHash_pos + 24);

  oldoffice01->rc4key[1] = 0;
  oldoffice01->rc4key[0] = 0;

  oldoffice01->rc4key[0] |= hex_convert (rc4key_pos[0]) << 28;
  oldoffice01->rc4key[0] |= hex_convert (rc4key_pos[1]) << 24;
  oldoffice01->rc4key[0] |= hex_convert (rc4key_pos[2]) << 20;
  oldoffice01->rc4key[0] |= hex_convert (rc4key_pos[3]) << 16;
  oldoffice01->rc4key[0] |= hex_convert (rc4key_pos[4]) << 12;
  oldoffice01->rc4key[0] |= hex_convert (rc4key_pos[5]) <<  8;
  oldoffice01->rc4key[0] |= hex_convert (rc4key_pos[6]) <<  4;
  oldoffice01->rc4key[0] |= hex_convert (rc4key_pos[7]) <<  0;
  oldoffice01->rc4key[1] |= hex_convert (rc4key_pos[8]) << 28;
  oldoffice01->rc4key[1] |= hex_convert (rc4key_pos[9]) << 24;

  oldoffice01->rc4key[0] = byte_swap_32 (oldoffice01->rc4key[0]);
  oldoffice01->rc4key[1] = byte_swap_32 (oldoffice01->rc4key[1]);

  // salt

  salt->salt_len = 16;

  salt->salt_buf[ 0] = hex_to_u32 (osalt_pos +  0);
  salt->salt_buf[ 1] = hex_to_u32 (osalt_pos +  8);
  salt->salt_buf[ 2] = hex_to_u32 (osalt_pos + 16);
  salt->salt_buf[ 3] = hex_to_u32 (osalt_pos + 24);

  // this is a workaround as office produces multiple documents with the same salt

  salt->salt_buf[ 4] = oldoffice01->encryptedVerifier[0];
  salt->salt_buf[ 5] = oldoffice01->encryptedVerifier[1];
  salt->salt_buf[ 6] = oldoffice01->encryptedVerifier[2];
  salt->salt_buf[ 7] = oldoffice01->encryptedVerifier[3];
  salt->salt_buf[ 8] = oldoffice01->encryptedVerifierHash[0];
  salt->salt_buf[ 9] = oldoffice01->encryptedVerifierHash[1];
  salt->salt_buf[10] = oldoffice01->encryptedVerifierHash[2];
  salt->salt_buf[11] = oldoffice01->encryptedVerifierHash[3];

  salt->salt_len += 32;

  /**
   * digest
   */

  digest[0] = oldoffice01->rc4key[0];
  digest[1] = oldoffice01->rc4key[1];
  digest[2] = 0;
  digest[3] = 0;

  return (PARSER_OK);
}

int oldoffice34_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  oldoffice34_t *oldoffice34 = (oldoffice34_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 5;

  token.signatures_cnt    = 2;
  token.signatures_buf[0] = SIGNATURE_OLDOFFICE3;
  token.signatures_buf[1] = SIGNATURE_OLDOFFICE4;

  token.len[0]     = 11;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 32;
  token.len_max[2] = 32;
  token.sep[2]     = '*';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[3] = 32;
  token.len_max[3] = 32;
  token.sep[3]     = '*';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[4] = 40;
  token.len_max[4] = 40;
  token.sep[4]     = '*';
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *version_pos               = token.buf[1];
  const u8 *osalt_pos                 = token.buf[2];
  const u8 *encryptedVerifier_pos     = token.buf[3];
  const u8 *encryptedVerifierHash_pos = token.buf[4];

  // esalt

  const u32 version = *version_pos - 0x30;

  if (version != 3 && version != 4) return (PARSER_SALT_VALUE);

  oldoffice34->version = version;

  oldoffice34->encryptedVerifier[0] = hex_to_u32 (encryptedVerifier_pos +  0);
  oldoffice34->encryptedVerifier[1] = hex_to_u32 (encryptedVerifier_pos +  8);
  oldoffice34->encryptedVerifier[2] = hex_to_u32 (encryptedVerifier_pos + 16);
  oldoffice34->encryptedVerifier[3] = hex_to_u32 (encryptedVerifier_pos + 24);

  oldoffice34->encryptedVerifierHash[0] = hex_to_u32 (encryptedVerifierHash_pos +  0);
  oldoffice34->encryptedVerifierHash[1] = hex_to_u32 (encryptedVerifierHash_pos +  8);
  oldoffice34->encryptedVerifierHash[2] = hex_to_u32 (encryptedVerifierHash_pos + 16);
  oldoffice34->encryptedVerifierHash[3] = hex_to_u32 (encryptedVerifierHash_pos + 24);
  oldoffice34->encryptedVerifierHash[4] = hex_to_u32 (encryptedVerifierHash_pos + 32);

  // salt

  salt->salt_len = 16;

  salt->salt_buf[ 0] = hex_to_u32 (osalt_pos +  0);
  salt->salt_buf[ 1] = hex_to_u32 (osalt_pos +  8);
  salt->salt_buf[ 2] = hex_to_u32 (osalt_pos + 16);
  salt->salt_buf[ 3] = hex_to_u32 (osalt_pos + 24);

  salt->salt_buf[ 0] = byte_swap_32 (salt->salt_buf[0]);
  salt->salt_buf[ 1] = byte_swap_32 (salt->salt_buf[1]);
  salt->salt_buf[ 2] = byte_swap_32 (salt->salt_buf[2]);
  salt->salt_buf[ 3] = byte_swap_32 (salt->salt_buf[3]);

  // this is a workaround as office produces multiple documents with the same salt

  salt->salt_buf[ 4] = oldoffice34->encryptedVerifier[0];
  salt->salt_buf[ 5] = oldoffice34->encryptedVerifier[1];
  salt->salt_buf[ 6] = oldoffice34->encryptedVerifier[2];
  salt->salt_buf[ 7] = oldoffice34->encryptedVerifier[3];
  salt->salt_buf[ 8] = oldoffice34->encryptedVerifierHash[0];
  salt->salt_buf[ 9] = oldoffice34->encryptedVerifierHash[1];
  salt->salt_buf[10] = oldoffice34->encryptedVerifierHash[2];
  salt->salt_buf[11] = oldoffice34->encryptedVerifierHash[3];

  salt->salt_len += 32;

  /**
   * digest
   */

  digest[0] = oldoffice34->encryptedVerifierHash[0];
  digest[1] = oldoffice34->encryptedVerifierHash[1];
  digest[2] = oldoffice34->encryptedVerifierHash[2];
  digest[3] = oldoffice34->encryptedVerifierHash[3];

  return (PARSER_OK);
}

int oldoffice34cm1_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  if (memcmp (SIGNATURE_OLDOFFICE3, input_buf, 12) != 0) return (PARSER_SIGNATURE_UNMATCHED);

  return oldoffice34_parse_hash (input_buf, input_len, hash_buf, hashconfig);
}

int oldoffice34cm2_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  oldoffice34_t *oldoffice34 = (oldoffice34_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 6;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_OLDOFFICE3;

  token.len[0]     = 11;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 32;
  token.len_max[2] = 32;
  token.sep[2]     = '*';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[3] = 32;
  token.len_max[3] = 32;
  token.sep[3]     = '*';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[4] = 40;
  token.len_max[4] = 40;
  token.sep[4]     = ':';
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[5] = 10;
  token.len_max[5] = 10;
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *version_pos               = token.buf[1];
  const u8 *osalt_pos                 = token.buf[2];
  const u8 *encryptedVerifier_pos     = token.buf[3];
  const u8 *encryptedVerifierHash_pos = token.buf[4];
  const u8 *rc4key_pos                = token.buf[5];

  // esalt

  const u32 version = *version_pos - 0x30;

  if (version != 3 && version != 4) return (PARSER_SALT_VALUE);

  oldoffice34->version = version;

  oldoffice34->encryptedVerifier[0] = hex_to_u32 (encryptedVerifier_pos +  0);
  oldoffice34->encryptedVerifier[1] = hex_to_u32 (encryptedVerifier_pos +  8);
  oldoffice34->encryptedVerifier[2] = hex_to_u32 (encryptedVerifier_pos + 16);
  oldoffice34->encryptedVerifier[3] = hex_to_u32 (encryptedVerifier_pos + 24);

  oldoffice34->encryptedVerifierHash[0] = hex_to_u32 (encryptedVerifierHash_pos +  0);
  oldoffice34->encryptedVerifierHash[1] = hex_to_u32 (encryptedVerifierHash_pos +  8);
  oldoffice34->encryptedVerifierHash[2] = hex_to_u32 (encryptedVerifierHash_pos + 16);
  oldoffice34->encryptedVerifierHash[3] = hex_to_u32 (encryptedVerifierHash_pos + 24);
  oldoffice34->encryptedVerifierHash[4] = hex_to_u32 (encryptedVerifierHash_pos + 32);

  oldoffice34->rc4key[1] = 0;
  oldoffice34->rc4key[0] = 0;

  oldoffice34->rc4key[0] |= hex_convert (rc4key_pos[0]) << 28;
  oldoffice34->rc4key[0] |= hex_convert (rc4key_pos[1]) << 24;
  oldoffice34->rc4key[0] |= hex_convert (rc4key_pos[2]) << 20;
  oldoffice34->rc4key[0] |= hex_convert (rc4key_pos[3]) << 16;
  oldoffice34->rc4key[0] |= hex_convert (rc4key_pos[4]) << 12;
  oldoffice34->rc4key[0] |= hex_convert (rc4key_pos[5]) <<  8;
  oldoffice34->rc4key[0] |= hex_convert (rc4key_pos[6]) <<  4;
  oldoffice34->rc4key[0] |= hex_convert (rc4key_pos[7]) <<  0;
  oldoffice34->rc4key[1] |= hex_convert (rc4key_pos[8]) << 28;
  oldoffice34->rc4key[1] |= hex_convert (rc4key_pos[9]) << 24;

  oldoffice34->rc4key[0] = byte_swap_32 (oldoffice34->rc4key[0]);
  oldoffice34->rc4key[1] = byte_swap_32 (oldoffice34->rc4key[1]);

  // salt

  salt->salt_len = 16;

  salt->salt_buf[ 0] = hex_to_u32 (osalt_pos +  0);
  salt->salt_buf[ 1] = hex_to_u32 (osalt_pos +  8);
  salt->salt_buf[ 2] = hex_to_u32 (osalt_pos + 16);
  salt->salt_buf[ 3] = hex_to_u32 (osalt_pos + 24);

  salt->salt_buf[ 0] = byte_swap_32 (salt->salt_buf[0]);
  salt->salt_buf[ 1] = byte_swap_32 (salt->salt_buf[1]);
  salt->salt_buf[ 2] = byte_swap_32 (salt->salt_buf[2]);
  salt->salt_buf[ 3] = byte_swap_32 (salt->salt_buf[3]);

  // this is a workaround as office produces multiple documents with the same salt

  salt->salt_buf[ 4] = oldoffice34->encryptedVerifier[0];
  salt->salt_buf[ 5] = oldoffice34->encryptedVerifier[1];
  salt->salt_buf[ 6] = oldoffice34->encryptedVerifier[2];
  salt->salt_buf[ 7] = oldoffice34->encryptedVerifier[3];
  salt->salt_buf[ 8] = oldoffice34->encryptedVerifierHash[0];
  salt->salt_buf[ 9] = oldoffice34->encryptedVerifierHash[1];
  salt->salt_buf[10] = oldoffice34->encryptedVerifierHash[2];
  salt->salt_buf[11] = oldoffice34->encryptedVerifierHash[3];

  salt->salt_len += 32;

  /**
   * digest
   */

  digest[0] = oldoffice34->rc4key[0];
  digest[1] = oldoffice34->rc4key[1];
  digest[2] = 0;
  digest[3] = 0;

  return (PARSER_OK);
}

int radmin2_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.len_min[0] = 32;
  token.len_max[0] = 32;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  return (PARSER_OK);
}

int djangosha1_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 3;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_DJANGOSHA1;

  token.len[0]     = 5;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '$';
  token.len_min[1] = SALT_MIN;
  token.len_max[1] = SALT_MAX;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len[2]     = 40;
  token.attr[2]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[2];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA1M_A;
    digest[1] -= SHA1M_B;
    digest[2] -= SHA1M_C;
    digest[3] -= SHA1M_D;
    digest[4] -= SHA1M_E;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int djangopbkdf2_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  pbkdf2_sha256_t *pbkdf2_sha256 = (pbkdf2_sha256_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_DJANGOPBKDF2;

  token.sep[0]     = '$';
  token.len_min[0] = 13;
  token.len_max[0] = 13;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '$';
  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = '$';
  token.len_min[2] = SALT_MIN;
  token.len_max[2] = SALT_MAX;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[3]     = '$';
  token.len_min[3] = 44;
  token.len_max[3] = 44;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // iter

  const u8 *iter_pos = token.buf[1];

  const int iter = strtol ((const char *) iter_pos, NULL, 10);

  if (iter < 1) return (PARSER_SALT_ITERATION);

  salt->salt_iter = iter - 1;

  // salt

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2];

  u8 *salt_buf_ptr = (u8 *) pbkdf2_sha256->salt_buf;

  memcpy (salt_buf_ptr, salt_pos, salt_len);

  salt->salt_len  = salt_len;

  salt_buf_ptr[salt_len + 3] = 0x01;
  salt_buf_ptr[salt_len + 4] = 0x80;

  // add some stuff to normal salt to make sorted happy

  salt->salt_buf[0] = pbkdf2_sha256->salt_buf[0];
  salt->salt_buf[1] = pbkdf2_sha256->salt_buf[1];
  salt->salt_buf[2] = pbkdf2_sha256->salt_buf[2];
  salt->salt_buf[3] = pbkdf2_sha256->salt_buf[3];
  salt->salt_buf[4] = salt->salt_iter;

  // base64 decode hash

  const u8 *hash_pos = token.buf[3];
  const int hash_len = token.len[3];

  u8 tmp_buf[100] = { 0 };

  base64_decode (base64_to_int, (const u8 *) hash_pos, hash_len, tmp_buf);

  memcpy (digest, tmp_buf, 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  return (PARSER_OK);
}

int siphash_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 4;

  token.sep[0]     = ':';
  token.len_min[0] = 16;
  token.len_max[0] = 16;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[1]     = ':';
  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = ':';
  token.len_min[2] = 1;
  token.len_max[2] = 1;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[3]     = '$';
  token.len_min[3] = 32;
  token.len_max[3] = 32;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // iter

  const u8 iter_c = token.buf[1][0];
  const u8 iter_d = token.buf[2][0];

  // atm only defaults, let's see if there's more request
  if (iter_c != '2') return (PARSER_SALT_ITERATION);
  if (iter_d != '4') return (PARSER_SALT_ITERATION);

  // hash

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos + 0);
  digest[1] = hex_to_u32 (hash_pos + 8);
  digest[2] = 0;
  digest[3] = 0;

  // salt

  const u8 *salt_pos = token.buf[3];

  salt->salt_buf[0] = hex_to_u32 (salt_pos +  0);
  salt->salt_buf[1] = hex_to_u32 (salt_pos +  8);
  salt->salt_buf[2] = hex_to_u32 (salt_pos + 16);
  salt->salt_buf[3] = hex_to_u32 (salt_pos + 24);

  salt->salt_len = 16;

  return (PARSER_OK);
}

int crammd5_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  cram_md5_t *cram_md5 = (cram_md5_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 3;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_CRAM_MD5;

  token.len[0]     = 10;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '$';
  token.len_min[1] = 0;
  token.len_max[1] = 76;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  token.sep[2]     = '$';
  token.len_min[2] = 44;
  token.len_max[2] = 132;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // salt

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  u8  tmp_buf[100];
  int tmp_len;

  memset (tmp_buf, 0, sizeof (tmp_buf));

  tmp_len = base64_decode (base64_to_int, (const u8 *) salt_pos, salt_len, tmp_buf);

  if (tmp_len > 55) return (PARSER_SALT_LENGTH);

  tmp_buf[tmp_len] = 0x80;

  memcpy (salt->salt_buf, tmp_buf, tmp_len + 1);

  salt->salt_len = tmp_len;

  // hash

  const u8 *hash_pos = token.buf[2];
  const int hash_len = token.len[2];

  memset (tmp_buf, 0, sizeof (tmp_buf));

  tmp_len = base64_decode (base64_to_int, (const u8 *) hash_pos, hash_len, tmp_buf);

  if (tmp_len < 32 + 1) return (PARSER_HASH_LENGTH);

  u32 user_len = tmp_len - 32;

  const u8 *tmp_hash = tmp_buf + user_len;

  user_len--; // skip the trailing space

  if (is_valid_hex_string (tmp_hash, 32) == false) return (PARSER_HASH_ENCODING);

  digest[0] = hex_to_u32 (tmp_hash +  0);
  digest[1] = hex_to_u32 (tmp_hash +  8);
  digest[2] = hex_to_u32 (tmp_hash + 16);
  digest[3] = hex_to_u32 (tmp_hash + 24);

  // store username for host only (output hash if cracked)

  memset (cram_md5->user, 0, sizeof (cram_md5->user));
  memcpy (cram_md5->user, tmp_buf, user_len);

  return (PARSER_OK);
}

int crammd5_dovecot_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 3;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_CRAM_MD5_DOVECOT;

  token.len[0]     = 10;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len[1]     = 32;
  token.attr[1]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len[2]     = 32;
  token.attr[2]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // iter

  u8 *hash_pos = input_buf + 10;

  digest[0] = hex_to_u32 ((const u8 *) &hash_pos[ 0]);
  digest[1] = hex_to_u32 ((const u8 *) &hash_pos[ 8]);
  digest[2] = hex_to_u32 ((const u8 *) &hash_pos[16]);
  digest[3] = hex_to_u32 ((const u8 *) &hash_pos[24]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= MD5M_A;
    digest[1] -= MD5M_B;
    digest[2] -= MD5M_C;
    digest[3] -= MD5M_D;
  }

  return (PARSER_OK);
}

int saph_sha1_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 3;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_SAPH_SHA1;

  token.len[0]     = 10;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '}';
  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 32;
  token.len_max[2] = 49;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // iter

  const u8 *iter_pos = token.buf[1];

  u32 iter = hc_strtoul ((const char *) iter_pos, NULL, 10);

  if (iter < 1)
  {
    return (PARSER_SALT_ITERATION);
  }

  iter--; // first iteration is special

  salt->salt_iter = iter;

  // decode

  const u8 *base64_pos = token.buf[2];
  const int base64_len = token.len[2];

  u8 tmp_buf[100] = { 0 };

  const u32 decoded_len = base64_decode (base64_to_int, (const u8 *) base64_pos, base64_len, tmp_buf);

  if (decoded_len < 24) return (PARSER_SALT_LENGTH);

  // copy the salt

  const u32 salt_len = decoded_len - 20;

  if (salt_len > 16) return (PARSER_SALT_LENGTH);

  memcpy (salt->salt_buf, tmp_buf + 20, salt_len);

  salt->salt_len = salt_len;

  // set digest

  u32 *digest_ptr = (u32 *) tmp_buf;

  digest[0] = byte_swap_32 (digest_ptr[0]);
  digest[1] = byte_swap_32 (digest_ptr[1]);
  digest[2] = byte_swap_32 (digest_ptr[2]);
  digest[3] = byte_swap_32 (digest_ptr[3]);
  digest[4] = byte_swap_32 (digest_ptr[4]);

  return (PARSER_OK);
}

int redmine_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 40;
  token.len_max[0] = 40;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 32;
  token.len_max[1] = 32;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA1M_A;
    digest[1] -= SHA1M_B;
    digest[2] -= SHA1M_C;
    digest[3] -= SHA1M_D;
    digest[4] -= SHA1M_E;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int punbb_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 40;
  token.len_max[0] = 40;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 12;
  token.len_max[1] = 12;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA1M_A;
    digest[1] -= SHA1M_B;
    digest[2] -= SHA1M_C;
    digest[3] -= SHA1M_D;
    digest[4] -= SHA1M_E;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int pdf11_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  pdf_t *pdf = (pdf_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 12;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_PDF;

  token.len[0]     = 5;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 1;
  token.len_max[2] = 1;
  token.sep[2]     = '*';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[3] = 2;
  token.len_max[3] = 2;
  token.sep[3]     = '*';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[4] = 1;
  token.len_max[4] = 6;
  token.sep[4]     = '*';
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[5] = 1;
  token.len_max[5] = 1;
  token.sep[5]     = '*';
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[6] = 2;
  token.len_max[6] = 2;
  token.sep[6]     = '*';
  token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[7] = 32;
  token.len_max[7] = 32;
  token.sep[7]     = '*';
  token.attr[7]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[8] = 2;
  token.len_max[8] = 2;
  token.sep[8]     = '*';
  token.attr[8]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[9] = 64;
  token.len_max[9] = 64;
  token.sep[9]     = '*';
  token.attr[9]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[10] = 2;
  token.len_max[10] = 2;
  token.sep[10]     = '*';
  token.attr[10]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[11] = 64;
  token.len_max[11] = 64;
  token.sep[11]     = '*';
  token.attr[11]    = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *V_pos      = token.buf[1];
  const u8 *R_pos      = token.buf[2];
  const u8 *bits_pos   = token.buf[3];
  const u8 *P_pos      = token.buf[4];
  const u8 *enc_md_pos = token.buf[5];
  const u8 *id_len_pos = token.buf[6];
  const u8 *id_buf_pos = token.buf[7];
  const u8 *u_len_pos  = token.buf[8];
  const u8 *u_buf_pos  = token.buf[9];
  const u8 *o_len_pos  = token.buf[10];
  const u8 *o_buf_pos  = token.buf[11];

  // validate data

  const int V = strtol ((const char *) V_pos, NULL, 10);
  const int R = strtol ((const char *) R_pos, NULL, 10);
  const int P = strtol ((const char *) P_pos, NULL, 10);

  if (V != 1) return (PARSER_SALT_VALUE);
  if (R != 2) return (PARSER_SALT_VALUE);

  const int enc_md = strtol ((const char *) enc_md_pos, NULL, 10);

  if ((enc_md != 0) && (enc_md != 1)) return (PARSER_SALT_VALUE);

  const int id_len = strtol ((const char *) id_len_pos, NULL, 10);
  const int u_len  = strtol ((const char *) u_len_pos,  NULL, 10);
  const int o_len  = strtol ((const char *) o_len_pos,  NULL, 10);

  if (id_len != 16) return (PARSER_SALT_VALUE);
  if (u_len  != 32) return (PARSER_SALT_VALUE);
  if (o_len  != 32) return (PARSER_SALT_VALUE);

  const int bits = strtol ((const char *) bits_pos, NULL, 10);

  if (bits != 40) return (PARSER_SALT_VALUE);

  // copy data to esalt

  pdf->V = V;
  pdf->R = R;
  pdf->P = P;

  pdf->enc_md = enc_md;

  pdf->id_buf[0] = hex_to_u32 (id_buf_pos +  0);
  pdf->id_buf[1] = hex_to_u32 (id_buf_pos +  8);
  pdf->id_buf[2] = hex_to_u32 (id_buf_pos + 16);
  pdf->id_buf[3] = hex_to_u32 (id_buf_pos + 24);
  pdf->id_len    = id_len;

  pdf->u_buf[0]  = hex_to_u32 (u_buf_pos +  0);
  pdf->u_buf[1]  = hex_to_u32 (u_buf_pos +  8);
  pdf->u_buf[2]  = hex_to_u32 (u_buf_pos + 16);
  pdf->u_buf[3]  = hex_to_u32 (u_buf_pos + 24);
  pdf->u_buf[4]  = hex_to_u32 (u_buf_pos + 32);
  pdf->u_buf[5]  = hex_to_u32 (u_buf_pos + 40);
  pdf->u_buf[6]  = hex_to_u32 (u_buf_pos + 48);
  pdf->u_buf[7]  = hex_to_u32 (u_buf_pos + 56);
  pdf->u_len     = u_len;

  pdf->o_buf[0]  = hex_to_u32 (o_buf_pos +  0);
  pdf->o_buf[1]  = hex_to_u32 (o_buf_pos +  8);
  pdf->o_buf[2]  = hex_to_u32 (o_buf_pos + 16);
  pdf->o_buf[3]  = hex_to_u32 (o_buf_pos + 24);
  pdf->o_buf[4]  = hex_to_u32 (o_buf_pos + 32);
  pdf->o_buf[5]  = hex_to_u32 (o_buf_pos + 40);
  pdf->o_buf[6]  = hex_to_u32 (o_buf_pos + 48);
  pdf->o_buf[7]  = hex_to_u32 (o_buf_pos + 56);
  pdf->o_len     = o_len;

  // we use ID for salt, maybe needs to change, we will see...

  salt->salt_buf[0] = pdf->id_buf[0];
  salt->salt_buf[1] = pdf->id_buf[1];
  salt->salt_buf[2] = pdf->id_buf[2];
  salt->salt_buf[3] = pdf->id_buf[3];
  salt->salt_len    = pdf->id_len;

  digest[0] = pdf->u_buf[0];
  digest[1] = pdf->u_buf[1];
  digest[2] = pdf->u_buf[2];
  digest[3] = pdf->u_buf[3];

  return (PARSER_OK);
}

int pdf11cm1_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  return pdf11_parse_hash (input_buf, input_len, hash_buf, hashconfig);
}

int pdf11cm2_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  pdf_t *pdf = (pdf_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 13;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_PDF;

  token.len[0]     = 5;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 1;
  token.len_max[2] = 1;
  token.sep[2]     = '*';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[3] = 2;
  token.len_max[3] = 2;
  token.sep[3]     = '*';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[4] = 1;
  token.len_max[4] = 6;
  token.sep[4]     = '*';
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[5] = 1;
  token.len_max[5] = 1;
  token.sep[5]     = '*';
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[6] = 2;
  token.len_max[6] = 2;
  token.sep[6]     = '*';
  token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[7] = 32;
  token.len_max[7] = 32;
  token.sep[7]     = '*';
  token.attr[7]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[8] = 2;
  token.len_max[8] = 2;
  token.sep[8]     = '*';
  token.attr[8]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[9] = 64;
  token.len_max[9] = 64;
  token.sep[9]     = '*';
  token.attr[9]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[10] = 2;
  token.len_max[10] = 2;
  token.sep[10]     = '*';
  token.attr[10]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[11] = 64;
  token.len_max[11] = 64;
  token.sep[11]     = ':';
  token.attr[11]    = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[12] = 10;
  token.len_max[12] = 10;
  token.sep[12]     = '*';
  token.attr[12]    = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *V_pos      = token.buf[1];
  const u8 *R_pos      = token.buf[2];
  const u8 *bits_pos   = token.buf[3];
  const u8 *P_pos      = token.buf[4];
  const u8 *enc_md_pos = token.buf[5];
  const u8 *id_len_pos = token.buf[6];
  const u8 *id_buf_pos = token.buf[7];
  const u8 *u_len_pos  = token.buf[8];
  const u8 *u_buf_pos  = token.buf[9];
  const u8 *o_len_pos  = token.buf[10];
  const u8 *o_buf_pos  = token.buf[11];
  const u8 *rc4key_pos = token.buf[12];

  // validate data

  const int V = strtol ((const char *) V_pos, NULL, 10);
  const int R = strtol ((const char *) R_pos, NULL, 10);
  const int P = strtol ((const char *) P_pos, NULL, 10);

  if (V != 1) return (PARSER_SALT_VALUE);
  if (R != 2) return (PARSER_SALT_VALUE);

  const int enc_md = strtol ((const char *) enc_md_pos, NULL, 10);

  if ((enc_md != 0) && (enc_md != 1)) return (PARSER_SALT_VALUE);

  const int id_len = strtol ((const char *) id_len_pos, NULL, 10);
  const int u_len  = strtol ((const char *) u_len_pos,  NULL, 10);
  const int o_len  = strtol ((const char *) o_len_pos,  NULL, 10);

  if (id_len != 16) return (PARSER_SALT_VALUE);
  if (u_len  != 32) return (PARSER_SALT_VALUE);
  if (o_len  != 32) return (PARSER_SALT_VALUE);

  const int bits = strtol ((const char *) bits_pos, NULL, 10);

  if (bits != 40) return (PARSER_SALT_VALUE);

  // copy data to esalt

  pdf->V = V;
  pdf->R = R;
  pdf->P = P;

  pdf->enc_md = enc_md;

  pdf->id_buf[0] = hex_to_u32 (id_buf_pos +  0);
  pdf->id_buf[1] = hex_to_u32 (id_buf_pos +  8);
  pdf->id_buf[2] = hex_to_u32 (id_buf_pos + 16);
  pdf->id_buf[3] = hex_to_u32 (id_buf_pos + 24);
  pdf->id_len    = id_len;

  pdf->u_buf[0]  = hex_to_u32 (u_buf_pos +  0);
  pdf->u_buf[1]  = hex_to_u32 (u_buf_pos +  8);
  pdf->u_buf[2]  = hex_to_u32 (u_buf_pos + 16);
  pdf->u_buf[3]  = hex_to_u32 (u_buf_pos + 24);
  pdf->u_buf[4]  = hex_to_u32 (u_buf_pos + 32);
  pdf->u_buf[5]  = hex_to_u32 (u_buf_pos + 40);
  pdf->u_buf[6]  = hex_to_u32 (u_buf_pos + 48);
  pdf->u_buf[7]  = hex_to_u32 (u_buf_pos + 56);
  pdf->u_len     = u_len;

  pdf->o_buf[0]  = hex_to_u32 (o_buf_pos +  0);
  pdf->o_buf[1]  = hex_to_u32 (o_buf_pos +  8);
  pdf->o_buf[2]  = hex_to_u32 (o_buf_pos + 16);
  pdf->o_buf[3]  = hex_to_u32 (o_buf_pos + 24);
  pdf->o_buf[4]  = hex_to_u32 (o_buf_pos + 32);
  pdf->o_buf[5]  = hex_to_u32 (o_buf_pos + 40);
  pdf->o_buf[6]  = hex_to_u32 (o_buf_pos + 48);
  pdf->o_buf[7]  = hex_to_u32 (o_buf_pos + 56);
  pdf->o_len     = o_len;

  pdf->rc4key[1] = 0;
  pdf->rc4key[0] = 0;

  pdf->rc4key[0] |= hex_convert (rc4key_pos[0]) << 28;
  pdf->rc4key[0] |= hex_convert (rc4key_pos[1]) << 24;
  pdf->rc4key[0] |= hex_convert (rc4key_pos[2]) << 20;
  pdf->rc4key[0] |= hex_convert (rc4key_pos[3]) << 16;
  pdf->rc4key[0] |= hex_convert (rc4key_pos[4]) << 12;
  pdf->rc4key[0] |= hex_convert (rc4key_pos[5]) <<  8;
  pdf->rc4key[0] |= hex_convert (rc4key_pos[6]) <<  4;
  pdf->rc4key[0] |= hex_convert (rc4key_pos[7]) <<  0;
  pdf->rc4key[1] |= hex_convert (rc4key_pos[8]) << 28;
  pdf->rc4key[1] |= hex_convert (rc4key_pos[9]) << 24;

  pdf->rc4key[0] = byte_swap_32 (pdf->rc4key[0]);
  pdf->rc4key[1] = byte_swap_32 (pdf->rc4key[1]);

  // we use ID for salt, maybe needs to change, we will see...

  salt->salt_buf[0] = pdf->id_buf[0];
  salt->salt_buf[1] = pdf->id_buf[1];
  salt->salt_buf[2] = pdf->id_buf[2];
  salt->salt_buf[3] = pdf->id_buf[3];
  salt->salt_buf[4] = pdf->u_buf[0];
  salt->salt_buf[5] = pdf->u_buf[1];
  salt->salt_buf[6] = pdf->o_buf[0];
  salt->salt_buf[7] = pdf->o_buf[1];
  salt->salt_len    = pdf->id_len + 16;

  digest[0] = pdf->rc4key[0];
  digest[1] = pdf->rc4key[1];
  digest[2] = 0;
  digest[3] = 0;

  return (PARSER_OK);
}

int pdf14_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  pdf_t *pdf = (pdf_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 12;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_PDF;

  token.len[0]     = 5;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 1;
  token.len_max[2] = 1;
  token.sep[2]     = '*';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[3] = 3;
  token.len_max[3] = 3;
  token.sep[3]     = '*';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[4] = 1;
  token.len_max[4] = 6;
  token.sep[4]     = '*';
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[5] = 1;
  token.len_max[5] = 1;
  token.sep[5]     = '*';
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[6] = 2;
  token.len_max[6] = 2;
  token.sep[6]     = '*';
  token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[7] = 32;
  token.len_max[7] = 64;
  token.sep[7]     = '*';
  token.attr[7]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[8] = 2;
  token.len_max[8] = 2;
  token.sep[8]     = '*';
  token.attr[8]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[9] = 64;
  token.len_max[9] = 64;
  token.sep[9]     = '*';
  token.attr[9]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[10] = 2;
  token.len_max[10] = 2;
  token.sep[10]     = '*';
  token.attr[10]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[11] = 64;
  token.len_max[11] = 64;
  token.sep[11]     = '*';
  token.attr[11]    = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *V_pos      = token.buf[1];
  const u8 *R_pos      = token.buf[2];
  const u8 *bits_pos   = token.buf[3];
  const u8 *P_pos      = token.buf[4];
  const u8 *enc_md_pos = token.buf[5];
  const u8 *id_len_pos = token.buf[6];
  const u8 *id_buf_pos = token.buf[7];
  const u8 *u_len_pos  = token.buf[8];
  const u8 *u_buf_pos  = token.buf[9];
  const u8 *o_len_pos  = token.buf[10];
  const u8 *o_buf_pos  = token.buf[11];

  // validate data

  const int V = strtol ((const char *) V_pos, NULL, 10);
  const int R = strtol ((const char *) R_pos, NULL, 10);
  const int P = strtol ((const char *) P_pos, NULL, 10);

  int vr_ok = 0;

  if ((V == 2) && (R == 3)) vr_ok = 1;
  if ((V == 4) && (R == 4)) vr_ok = 1;

  if (vr_ok == 0) return (PARSER_SALT_VALUE);

  const int id_len = strtol ((const char *) id_len_pos, NULL, 10);
  const int u_len  = strtol ((const char *) u_len_pos,  NULL, 10);
  const int o_len  = strtol ((const char *) o_len_pos,  NULL, 10);

  if ((id_len != 16) && (id_len != 32)) return (PARSER_SALT_VALUE);

  if (u_len != 32) return (PARSER_SALT_VALUE);
  if (o_len != 32) return (PARSER_SALT_VALUE);

  const int bits = strtol ((const char *) bits_pos, NULL, 10);

  if (bits != 128) return (PARSER_SALT_VALUE);

  int enc_md = 1;

  if (R >= 4)
  {
    enc_md = strtol ((const char *) enc_md_pos, NULL, 10);
  }

  // copy data to esalt

  pdf->V = V;
  pdf->R = R;
  pdf->P = P;

  pdf->enc_md = enc_md;

  pdf->id_buf[0] = hex_to_u32 (id_buf_pos +  0);
  pdf->id_buf[1] = hex_to_u32 (id_buf_pos +  8);
  pdf->id_buf[2] = hex_to_u32 (id_buf_pos + 16);
  pdf->id_buf[3] = hex_to_u32 (id_buf_pos + 24);

  if (id_len == 32)
  {
    pdf->id_buf[4] = hex_to_u32 (id_buf_pos + 32);
    pdf->id_buf[5] = hex_to_u32 (id_buf_pos + 40);
    pdf->id_buf[6] = hex_to_u32 (id_buf_pos + 48);
    pdf->id_buf[7] = hex_to_u32 (id_buf_pos + 56);
  }

  pdf->id_len = id_len;

  pdf->u_buf[0]  = hex_to_u32 (u_buf_pos +  0);
  pdf->u_buf[1]  = hex_to_u32 (u_buf_pos +  8);
  pdf->u_buf[2]  = hex_to_u32 (u_buf_pos + 16);
  pdf->u_buf[3]  = hex_to_u32 (u_buf_pos + 24);
  pdf->u_buf[4]  = hex_to_u32 (u_buf_pos + 32);
  pdf->u_buf[5]  = hex_to_u32 (u_buf_pos + 40);
  pdf->u_buf[6]  = hex_to_u32 (u_buf_pos + 48);
  pdf->u_buf[7]  = hex_to_u32 (u_buf_pos + 56);
  pdf->u_len     = u_len;

  pdf->o_buf[0]  = hex_to_u32 (o_buf_pos +  0);
  pdf->o_buf[1]  = hex_to_u32 (o_buf_pos +  8);
  pdf->o_buf[2]  = hex_to_u32 (o_buf_pos + 16);
  pdf->o_buf[3]  = hex_to_u32 (o_buf_pos + 24);
  pdf->o_buf[4]  = hex_to_u32 (o_buf_pos + 32);
  pdf->o_buf[5]  = hex_to_u32 (o_buf_pos + 40);
  pdf->o_buf[6]  = hex_to_u32 (o_buf_pos + 48);
  pdf->o_buf[7]  = hex_to_u32 (o_buf_pos + 56);
  pdf->o_len     = o_len;

  // precompute rc4 data for later use

  u32 padding[8] =
  {
    0x5e4ebf28,
    0x418a754e,
    0x564e0064,
    0x0801faff,
    0xb6002e2e,
    0x803e68d0,
    0xfea90c2f,
    0x7a695364
  };

  // md5

  u32 salt_pc_block[32] = { 0 };

  u8 *salt_pc_ptr = (u8 *) salt_pc_block;

  memcpy (salt_pc_ptr, padding, 32);
  memcpy (salt_pc_ptr + 32, pdf->id_buf, pdf->id_len);

  u32 salt_pc_digest[4] = { 0 };

  md5_complete_no_limit (salt_pc_digest, salt_pc_block, 32 + pdf->id_len);

  pdf->rc4data[0] = salt_pc_digest[0];
  pdf->rc4data[1] = salt_pc_digest[1];

  // we use ID for salt, maybe needs to change, we will see...

  salt->salt_buf[0] = pdf->id_buf[0];
  salt->salt_buf[1] = pdf->id_buf[1];
  salt->salt_buf[2] = pdf->id_buf[2];
  salt->salt_buf[3] = pdf->id_buf[3];
  salt->salt_buf[4] = pdf->u_buf[0];
  salt->salt_buf[5] = pdf->u_buf[1];
  salt->salt_buf[6] = pdf->o_buf[0];
  salt->salt_buf[7] = pdf->o_buf[1];
  salt->salt_len    = pdf->id_len + 16;

  salt->salt_iter   = ROUNDS_PDF14;

  digest[0] = pdf->u_buf[0];
  digest[1] = pdf->u_buf[1];
  digest[2] = 0;
  digest[3] = 0;

  return (PARSER_OK);
}

int pdf17l3_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  int ret = pdf17l8_parse_hash (input_buf, input_len, hash_buf, hashconfig);

  if (ret != PARSER_OK)
  {
    return ret;
  }

  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA256M_A;
    digest[1] -= SHA256M_B;
    digest[2] -= SHA256M_C;
    digest[3] -= SHA256M_D;
    digest[4] -= SHA256M_E;
    digest[5] -= SHA256M_F;
    digest[6] -= SHA256M_G;
    digest[7] -= SHA256M_H;
  }

  salt->salt_buf[2] = 0x80;

  return (PARSER_OK);
}

int pdf17l8_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  pdf_t *pdf = (pdf_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 16;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_PDF;

  token.len[0]     = 5;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 1;
  token.len_max[2] = 1;
  token.sep[2]     = '*';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[3] = 3;
  token.len_max[3] = 3;
  token.sep[3]     = '*';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[4] = 1;
  token.len_max[4] = 6;
  token.sep[4]     = '*';
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[5] = 1;
  token.len_max[5] = 1;
  token.sep[5]     = '*';
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[6] = 1;
  token.len_max[6] = 4;
  token.sep[6]     = '*';
  token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[7] = 0;
  token.len_max[7] = 1024;
  token.sep[7]     = '*';
  token.attr[7]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[8] = 1;
  token.len_max[8] = 4;
  token.sep[8]     = '*';
  token.attr[8]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[9] = 0;
  token.len_max[9] = 1024;
  token.sep[9]     = '*';
  token.attr[9]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[10] = 1;
  token.len_max[10] = 4;
  token.sep[10]     = '*';
  token.attr[10]    = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[11] = 0;
  token.len_max[11] = 1024;
  token.sep[11]     = '*';
  token.attr[11]    = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[12] = 1;
  token.len_max[12] = 4;
  token.sep[12]     = '*';
  token.attr[12]    = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[13] = 0;
  token.len_max[13] = 1024;
  token.sep[13]     = '*';
  token.attr[13]    = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[14] = 1;
  token.len_max[14] = 4;
  token.sep[14]     = '*';
  token.attr[14]    = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[15] = 0;
  token.len_max[15] = 1024;
  token.sep[15]     = '*';
  token.attr[15]    = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *V_pos      = token.buf[1];
  const u8 *R_pos      = token.buf[2];
  const u8 *bits_pos   = token.buf[3];
  const u8 *enc_md_pos = token.buf[5];
  const u8 *u_len_pos  = token.buf[8];
  const u8 *u_buf_pos  = token.buf[9];

  // validate data

  const int V = strtol ((const char *) V_pos, NULL, 10);
  const int R = strtol ((const char *) R_pos, NULL, 10);

  int vr_ok = 0;

  if ((V == 5) && (R == 5)) vr_ok = 1;
  if ((V == 5) && (R == 6)) vr_ok = 1;

  if (vr_ok == 0) return (PARSER_SALT_VALUE);

  const int bits = strtol ((const char *) bits_pos, NULL, 10);

  if (bits != 256) return (PARSER_SALT_VALUE);

  int enc_md = strtol ((const char *) enc_md_pos, NULL, 10);

  if ((enc_md != 0) && (enc_md != 1)) return (PARSER_SALT_VALUE);

  const u32 u_len  = hc_strtoul ((const char *) u_len_pos,  NULL, 10);

  // copy data to esalt

  if (u_len < 40) return (PARSER_SALT_VALUE);

  if (is_valid_hex_string (u_buf_pos, 80) == false) return (PARSER_SALT_ENCODING);

  for (int i = 0, j = 0; i < 8 + 2; i += 1, j += 8)
  {
    pdf->u_buf[i] = hex_to_u32 ((const u8 *) &u_buf_pos[j]);
  }

  salt->salt_buf[0] = pdf->u_buf[8];
  salt->salt_buf[1] = pdf->u_buf[9];

  salt->salt_len  = 8;
  salt->salt_iter = ROUNDS_PDF17L8;

  digest[0] = byte_swap_32 (pdf->u_buf[0]);
  digest[1] = byte_swap_32 (pdf->u_buf[1]);
  digest[2] = byte_swap_32 (pdf->u_buf[2]);
  digest[3] = byte_swap_32 (pdf->u_buf[3]);
  digest[4] = byte_swap_32 (pdf->u_buf[4]);
  digest[5] = byte_swap_32 (pdf->u_buf[5]);
  digest[6] = byte_swap_32 (pdf->u_buf[6]);
  digest[7] = byte_swap_32 (pdf->u_buf[7]);

  return (PARSER_OK);
}

int pbkdf2_sha256_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  pbkdf2_sha256_t *pbkdf2_sha256 = (pbkdf2_sha256_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_PBKDF2_SHA256;

  token.sep[0]     = ':';
  token.len_min[0] = 6;
  token.len_max[0] = 6;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = ':';
  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = ':';
  token.len_min[2] = SALT_MIN;
  token.len_max[2] = SALT_MAX;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  token.sep[3]     = ':';
  token.len_min[3] = 16;
  token.len_max[3] = 256;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  u8  tmp_buf[512];
  int tmp_len;

  // iter

  const u8 *iter_pos = token.buf[1];

  const u32 iter = hc_strtoul ((const char *) iter_pos, NULL, 10);

  salt->salt_iter = iter - 1;

  // salt

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2];

  memset (tmp_buf, 0, sizeof (tmp_buf));

  tmp_len = base64_decode (base64_to_int, salt_pos, salt_len, tmp_buf);

  if (tmp_len > SALT_MAX) return (PARSER_SALT_LENGTH);

  memcpy (pbkdf2_sha256->salt_buf, tmp_buf, tmp_len);

  salt->salt_len = tmp_len;

  salt->salt_buf[0] = pbkdf2_sha256->salt_buf[0];
  salt->salt_buf[1] = pbkdf2_sha256->salt_buf[1];
  salt->salt_buf[2] = pbkdf2_sha256->salt_buf[2];
  salt->salt_buf[3] = pbkdf2_sha256->salt_buf[3];
  salt->salt_buf[4] = salt->salt_iter;

  // hash

  const u8 *hash_pos = token.buf[3];
  const int hash_len = token.len[3];

  memset (tmp_buf, 0, sizeof (tmp_buf));

  tmp_len = base64_decode (base64_to_int, hash_pos, hash_len, tmp_buf);

  if (tmp_len < 16) return (PARSER_HASH_LENGTH);

  memcpy (digest, tmp_buf, 16);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);

  return (PARSER_OK);
}

int prestashop_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 32;
  token.len_max[0] = 32;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 56;
  token.len_max[1] = 56;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int postgresql_auth_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_POSTGRESQL_AUTH;

  token.len[0]     = 10;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '*';
  token.len_min[1] = 0;
  token.len_max[1] = 32;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[2]     = '*';
  token.len_min[2] = 8;
  token.len_max[2] = 8;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[3]     = '*';
  token.len_min[3] = 32;
  token.len_max[3] = 32;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // hash

  const u8 *hash_pos = token.buf[3];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= MD5M_A;
    digest[1] -= MD5M_B;
    digest[2] -= MD5M_C;
    digest[3] -= MD5M_D;
  }

  /*
   * store salt
   */

  const u8 *salt_pos = token.buf[2];

  // first 4 bytes are the "challenge"

  u8 *salt_buf_ptr = (u8 *) salt->salt_buf;

  salt_buf_ptr[0] = hex_to_u8 (salt_pos + 0);
  salt_buf_ptr[1] = hex_to_u8 (salt_pos + 2);
  salt_buf_ptr[2] = hex_to_u8 (salt_pos + 4);
  salt_buf_ptr[3] = hex_to_u8 (salt_pos + 6);

  // append the user name

  const u8 *user_pos = token.buf[1];
  const int user_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt (salt_buf_ptr + 4, (int *) &salt->salt_len, user_pos, user_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  salt->salt_len += 4;

  return (PARSER_OK);
}

int mysql_auth_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 3;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_MYSQL_AUTH;

  token.len[0]     = 9;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '*';
  token.len_min[1] = 40;
  token.len_max[1] = 40;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[2]     = '*';
  token.len_min[2] = 40;
  token.len_max[2] = 40;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // hash

  const u8 *hash_pos = token.buf[2];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  /*
   * store salt
   */

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int bitcoin_wallet_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  bitcoin_wallet_t *bitcoin_wallet = (bitcoin_wallet_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 10;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_BITCOIN_WALLET;

  token.len[0]     = 9;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '$';
  token.len_min[1] = 2;
  token.len_max[1] = 2;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = '$';
  token.len_min[2] = 16;
  token.len_max[2] = 256;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[3]     = '$';
  token.len_min[3] = 2;
  token.len_max[3] = 2;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[4]     = '$';
  token.len_min[4] = 16;
  token.len_max[4] = 16;
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[5]     = '$';
  token.len_min[5] = 1;
  token.len_max[5] = 6;
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[6]     = '$';
  token.len_min[6] = 2;
  token.len_max[6] = 2;
  token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[7]     = '$';
  token.len_min[7] = 96;
  token.len_max[7] = 96;
  token.attr[7]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[8]     = '$';
  token.len_min[8] = 1;
  token.len_max[8] = 3;
  token.attr[8]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[9]     = '$';
  token.len_min[9] = 2;
  token.len_max[9] = 512;
  token.attr[9]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *cry_master_len_pos  = token.buf[1];
  const u8 *cry_master_buf_pos  = token.buf[2];
  const u8 *cry_salt_len_pos    = token.buf[3];
  const u8 *cry_salt_buf_pos    = token.buf[4];
  const u8 *cry_rounds_pos      = token.buf[5];
  const u8 *ckey_len_pos        = token.buf[6];
  const u8 *ckey_buf_pos        = token.buf[7];
  const u8 *public_key_len_pos  = token.buf[8];
  const u8 *public_key_buf_pos  = token.buf[9];

  const int cry_master_buf_len  = token.len[2];
  const int cry_salt_buf_len    = token.len[4];
  const int ckey_buf_len        = token.len[7];
  const int public_key_buf_len  = token.len[9];

  // verify

  const int cry_master_len = hc_strtoul ((const char *) cry_master_len_pos, NULL, 10);
  const int cry_salt_len   = hc_strtoul ((const char *) cry_salt_len_pos,   NULL, 10);
  const int ckey_len       = hc_strtoul ((const char *) ckey_len_pos,       NULL, 10);
  const int public_key_len = hc_strtoul ((const char *) public_key_len_pos, NULL, 10);

  if (cry_master_buf_len != cry_master_len) return (PARSER_SALT_VALUE);
  if (cry_salt_buf_len   != cry_salt_len)   return (PARSER_SALT_VALUE);
  if (ckey_buf_len       != ckey_len)       return (PARSER_SALT_VALUE);
  if (public_key_buf_len != public_key_len) return (PARSER_SALT_VALUE);

  if (cry_master_len % 16) return (PARSER_SALT_VALUE);

  // esalt

  for (int i = 0, j = 0; j < cry_master_len; i += 1, j += 8)
  {
    bitcoin_wallet->cry_master_buf[i] = hex_to_u32 ((const u8 *) &cry_master_buf_pos[j]);
  }

  for (int i = 0, j = 0; j < ckey_len; i += 1, j += 8)
  {
    bitcoin_wallet->ckey_buf[i] = hex_to_u32 ((const u8 *) &ckey_buf_pos[j]);
  }

  for (int i = 0, j = 0; j < public_key_len; i += 1, j += 8)
  {
    bitcoin_wallet->public_key_buf[i] = hex_to_u32 ((const u8 *) &public_key_buf_pos[j]);
  }

  bitcoin_wallet->cry_master_len = cry_master_len / 2;
  bitcoin_wallet->ckey_len       = ckey_len / 2;
  bitcoin_wallet->public_key_len = public_key_len / 2;

  // hash

  digest[0] = bitcoin_wallet->cry_master_buf[0];
  digest[1] = bitcoin_wallet->cry_master_buf[1];
  digest[2] = bitcoin_wallet->cry_master_buf[2];
  digest[3] = bitcoin_wallet->cry_master_buf[3];

  // iter

  const int cry_rounds = hc_strtoul ((const char *) cry_rounds_pos, NULL, 10);

  salt->salt_iter = cry_rounds - 1;

  // salt

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, cry_salt_buf_pos, cry_salt_buf_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int sip_auth_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  sip_t *sip = (sip_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 15;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_SIP_AUTH;

  token.sep[0]      = '*';
  token.len_min[0]  = 5;
  token.len_max[0]  = 5;
  token.attr[0]     = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]      = '*';
  token.len_min[1]  = 0;
  token.len_max[1]  = 512;
  token.attr[1]     = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[2]      = '*';
  token.len_min[2]  = 0;
  token.len_max[2]  = 512;
  token.attr[2]     = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[3]      = '*';
  token.len_min[3]  = 0;
  token.len_max[3]  = 116;
  token.attr[3]     = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[4]      = '*';
  token.len_min[4]  = 0;
  token.len_max[4]  = 116;
  token.attr[4]     = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[5]      = '*';
  token.len_min[5]  = 0;
  token.len_max[5]  = 246;
  token.attr[5]     = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[6]      = '*';
  token.len_min[6]  = 0;
  token.len_max[6]  = 245;
  token.attr[6]     = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[7]      = '*';
  token.len_min[7]  = 1;
  token.len_max[7]  = 246;
  token.attr[7]     = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[8]      = '*';
  token.len_min[8]  = 0;
  token.len_max[8]  = 245;
  token.attr[8]     = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[9]      = '*';
  token.len_min[9]  = 1;
  token.len_max[9]  = 1024;
  token.attr[9]     = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[10]     = '*';
  token.len_min[10] = 0;
  token.len_max[10] = 1024;
  token.attr[10]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[11]     = '*';
  token.len_min[11] = 0;
  token.len_max[11] = 1024;
  token.attr[11]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[12]     = '*';
  token.len_min[12] = 0;
  token.len_max[12] = 1024;
  token.attr[12]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[13]     = '*';
  token.len_min[13] = 3;
  token.len_max[13] = 3;
  token.attr[13]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[14]     = '*';
  token.len_min[14] = 32;
  token.len_max[14] = 32;
  token.attr[14]    = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *user_pos          = token.buf[ 3];
  const u8 *realm_pos         = token.buf[ 4];
  const u8 *method_pos        = token.buf[ 5];
  const u8 *URI_prefix_pos    = token.buf[ 6];
  const u8 *URI_resource_pos  = token.buf[ 7];
  const u8 *URI_suffix_pos    = token.buf[ 8];
  const u8 *nonce_pos         = token.buf[ 9];
  const u8 *nonce_client_pos  = token.buf[10];
  const u8 *nonce_count_pos   = token.buf[11];
  const u8 *qop_pos           = token.buf[12];
  const u8 *directive_pos     = token.buf[13];
  const u8 *digest_pos        = token.buf[14];

  const int user_len          = token.len[ 3];
  const int realm_len         = token.len[ 4];
  const int method_len        = token.len[ 5];
  const int URI_prefix_len    = token.len[ 6];
  const int URI_resource_len  = token.len[ 7];
  const int URI_suffix_len    = token.len[ 8];
  const int nonce_len         = token.len[ 9];
  const int nonce_client_len  = token.len[10];
  const int nonce_count_len   = token.len[11];
  const int qop_len           = token.len[12];

  // verify

  if (memcmp (directive_pos, "MD5", 3) != 0) return (PARSER_SIP_AUTH_DIRECTIVE);

  /*
   * first (pre-)compute: HA2 = md5 ($method . ":" . $uri)
   */

  static u8 *pcsep = (u8 *) ":";

  int md5_len = method_len + 1 + URI_prefix_len + URI_resource_len + URI_suffix_len;

  if (URI_prefix_len) md5_len++;
  if (URI_suffix_len) md5_len++;

  const int md5_max_len = 4 * 64;

  if (md5_len >= md5_max_len) return (PARSER_SALT_LENGTH);

  u32 tmp_md5_buf[64] = { 0 };

  u8 *tmp_md5_ptr = (u8 *) tmp_md5_buf;

  // method

  hc_strncat (tmp_md5_ptr, method_pos, method_len);

  hc_strncat (tmp_md5_ptr, pcsep, 1);

  // URI_prefix

  if (URI_prefix_len > 0)
  {
    hc_strncat (tmp_md5_ptr, URI_prefix_pos, URI_prefix_len);

    hc_strncat (tmp_md5_ptr, pcsep, 1);
  }

  // URI_resource

  hc_strncat (tmp_md5_ptr, URI_resource_pos, URI_resource_len);

  hc_strncat (tmp_md5_ptr, pcsep, 1);

  // URI_suffix

  if (URI_suffix_len > 0)
  {
    hc_strncat (tmp_md5_ptr, URI_suffix_pos, URI_suffix_len);

    hc_strncat (tmp_md5_ptr, pcsep, 1);
  }

  u32 tmp_digest[4] = { 0 };

  md5_complete_no_limit (tmp_digest, tmp_md5_buf, md5_len);

  tmp_digest[0] = byte_swap_32 (tmp_digest[0]);
  tmp_digest[1] = byte_swap_32 (tmp_digest[1]);
  tmp_digest[2] = byte_swap_32 (tmp_digest[2]);
  tmp_digest[3] = byte_swap_32 (tmp_digest[3]);

  /*
   * esalt
   */

  u8 *esalt_buf_ptr = (u8 *) sip->esalt_buf;

  int esalt_len = 0;

  const int max_esalt_len = sizeof (sip->esalt_buf);

  // there are 2 possibilities for the esalt:

  bool with_auth = false;

  if (qop_len == 4)
  {
    if (memcmp ((const char *) qop_pos, "auth", 4) == 0)
    {
      with_auth = true;
    }
  }

  if (qop_len == 8)
  {
    if (memcmp ((const char *) qop_pos, "auth-int", 8) == 0)
    {
      with_auth = true;
    }
  }

  if (with_auth == true)
  {
    esalt_len = 1 + nonce_len + 1 + nonce_count_len + 1 + nonce_client_len + 1 + qop_len + 1 + 32;

    if (esalt_len > max_esalt_len) return (PARSER_SALT_LENGTH);

    // init

    hc_strncat (esalt_buf_ptr, pcsep, 1);

    // nonce

    hc_strncat (esalt_buf_ptr, nonce_pos, nonce_len);

    hc_strncat (esalt_buf_ptr, pcsep, 1);

    // nonce_count

    hc_strncat (esalt_buf_ptr, nonce_count_pos, nonce_count_len);

    hc_strncat (esalt_buf_ptr, pcsep, 1);

    // nonce_client

    hc_strncat (esalt_buf_ptr, nonce_client_pos, nonce_client_len);

    hc_strncat (esalt_buf_ptr, pcsep, 1);

    // qop

    hc_strncat (esalt_buf_ptr, qop_pos, qop_len);

    hc_strncat (esalt_buf_ptr, pcsep, 1);
  }
  else
  {
    esalt_len = 1 + nonce_len + 1 + 32;

    if (esalt_len > max_esalt_len) return (PARSER_SALT_LENGTH);

    // init

    hc_strncat (esalt_buf_ptr, pcsep, 1);

    // nonce

    hc_strncat (esalt_buf_ptr, nonce_pos, nonce_len);

    hc_strncat (esalt_buf_ptr, pcsep, 1);
  }

  // tmp_digest

  u8 tmp[64];

  snprintf ((char *) tmp, sizeof (tmp), "%08x%08x%08x%08x",
    tmp_digest[0],
    tmp_digest[1],
    tmp_digest[2],
    tmp_digest[3]);

  hc_strncat (esalt_buf_ptr, tmp, 32);

  // add 0x80 to esalt

  esalt_buf_ptr[esalt_len] = 0x80;

  sip->esalt_len = esalt_len;

  /*
   * actual salt
   */

  u8 *sip_salt_ptr = (u8 *) sip->salt_buf;

  int salt_len = user_len + 1 + realm_len + 1;

  int max_salt_len = 119;

  if (salt_len > max_salt_len) return (PARSER_SALT_LENGTH);

  // user_pos

  hc_strncat (sip_salt_ptr, user_pos, user_len);

  hc_strncat (sip_salt_ptr, pcsep, 1);

  // realm_pos

  hc_strncat (sip_salt_ptr, realm_pos, realm_len);

  hc_strncat (sip_salt_ptr, pcsep, 1);

  sip->salt_len = salt_len;

  /*
   * fake salt (for sorting)
   */

  u8 *salt_buf_ptr = (u8 *) salt->salt_buf;

  max_salt_len = 55;

  int fake_salt_len = salt_len;

  if (fake_salt_len > max_salt_len)
  {
    fake_salt_len = max_salt_len;
  }

  memcpy (salt_buf_ptr, sip_salt_ptr, fake_salt_len);

  salt->salt_len = fake_salt_len;

  /*
   * digest
   */

  digest[0] = hex_to_u32 ((const u8 *) &digest_pos[ 0]);
  digest[1] = hex_to_u32 ((const u8 *) &digest_pos[ 8]);
  digest[2] = hex_to_u32 ((const u8 *) &digest_pos[16]);
  digest[3] = hex_to_u32 ((const u8 *) &digest_pos[24]);

  return (PARSER_OK);
}

int crc32_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 8;
  token.len_max[0] = 8;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[1]     = hashconfig->separator;
  token.len_min[1] = 8;
  token.len_max[1] = 8;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos + 0);
  digest[1] = 0;
  digest[2] = 0;
  digest[3] = 0;

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = 0;
  digest[2] = 0;
  digest[3] = 0;

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int seven_zip_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  seven_zip_hook_salt_t *seven_zip = (seven_zip_hook_salt_t *) hash_buf->hook_salt;

  token_t token;

  token.token_cnt  = 11;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_SEVEN_ZIP;

  token.len[0]      = 4;
  token.attr[0]     = TOKEN_ATTR_FIXED_LENGTH
                    | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]      = '$';
  token.len_min[1]  = 1;
  token.len_max[1]  = 1;
  token.attr[1]     = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]      = '$';
  token.len_min[2]  = 1;
  token.len_max[2]  = 2;
  token.attr[2]     = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[3]      = '$';
  token.len_min[3]  = 1;
  token.len_max[3]  = 1;
  token.attr[3]     = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[4]      = '$';
  token.len_min[4]  = 0;
  token.len_max[4]  = 64;
  token.attr[4]     = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[5]      = '$';
  token.len_min[5]  = 1;
  token.len_max[5]  = 2;
  token.attr[5]     = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[6]      = '$';
  token.len_min[6]  = 32;
  token.len_max[6]  = 32;
  token.attr[6]     = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_HEX;

  token.sep[7]      = '$';
  token.len_min[7]  = 1;
  token.len_max[7]  = 10;
  token.attr[7]     = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[8]      = '$';
  token.len_min[8]  = 1;
  token.len_max[8]  = 4;
  token.attr[8]     = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[9]      = '$';
  token.len_min[9]  = 1;
  token.len_max[9]  = 4;
  token.attr[9]     = TOKEN_ATTR_VERIFY_LENGTH
                    | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[10]     = '$';
  token.len_min[10] = 2;
  token.len_max[10] = 655056;
  token.attr[10]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *data_type_pos       = token.buf[ 1];
  const u8 *NumCyclesPower_pos  = token.buf[ 2];
  const u8 *salt_len_pos        = token.buf[ 3];
  const u8 *salt_buf_pos        = token.buf[ 4];
  const u8 *iv_len_pos          = token.buf[ 5];
  const u8 *iv_buf_pos          = token.buf[ 6];
  const u8 *crc_buf_pos         = token.buf[ 7];
  const u8 *data_len_pos        = token.buf[ 8];
  const u8 *unpack_size_pos     = token.buf[ 9];
  const u8 *data_buf_pos        = token.buf[10];

  const int data_type_len       = token.len[ 1];
  const int NumCyclesPower_len  = token.len[ 2];
  const int salt_len_len        = token.len[ 3];
  const int salt_buf_len        = token.len[ 4];
  const int iv_len_len          = token.len[ 5];
  const int iv_buf_len          = token.len[ 6];
  const int crc_buf_len         = token.len[ 7];
  const int data_len_len        = token.len[ 8];
  const int unpack_size_len     = token.len[ 9];
        int data_buf_len        = token.len[10];

  // fields only used when data was compressed:

  u8 *crc_len_pos = (u8 *) strchr ((const char *) data_buf_pos, '$');

  u32 crc_len_len          = 0;
  u8 *coder_attributes_pos = 0;
  u32 coder_attributes_len = 0;

  if (crc_len_pos != NULL)
  {
    data_buf_len = crc_len_pos - data_buf_pos;

    crc_len_pos++;

    coder_attributes_pos = (u8 *) strchr ((const char *) crc_len_pos, '$');

    if (coder_attributes_pos == NULL) return (PARSER_SEPARATOR_UNMATCHED);

    crc_len_len = coder_attributes_pos - crc_len_pos;

    coder_attributes_pos++;
  }

  if (is_valid_hex_string (data_buf_pos, data_buf_len) == false) return (PARSER_SALT_ENCODING);

  const int iter         = hc_strtoul ((const char *) NumCyclesPower_pos, NULL, 10);
  const int crc          = hc_strtoul ((const char *) crc_buf_pos,        NULL, 10);
  const int data_type    = hc_strtoul ((const char *) data_type_pos,      NULL, 10);
  const int salt_len     = hc_strtoul ((const char *) salt_len_pos,       NULL, 10);
  const int iv_len       = hc_strtoul ((const char *) iv_len_pos,         NULL, 10);
  const int unpack_size  = hc_strtoul ((const char *) unpack_size_pos,    NULL, 10);
  const int data_len     = hc_strtoul ((const char *) data_len_pos,       NULL, 10);

  // if neither uncompressed nor truncated, then we need the length for crc and coder attributes

  int crc_len = 0;

  bool is_compressed = ((data_type != 0) && (data_type != 0x80));

  if (is_compressed == true)
  {
    if (crc_len_pos == NULL) return (PARSER_SEPARATOR_UNMATCHED);

    coder_attributes_len = input_len - 1 - 2 - 1 - data_type_len - 1 - NumCyclesPower_len - 1 - salt_len_len - 1 - salt_buf_len - 1 - iv_len_len - 1 - iv_buf_len - 1 - crc_buf_len - 1 - data_len_len - 1 - unpack_size_len - 1 - data_buf_len - 1 - crc_len_len - 1;

    crc_len = hc_strtoul ((const char *) crc_len_pos, NULL, 10);
  }

  /**
   * verify some data
   */

  if (data_type > 2) // this includes also 0x80 (special case that means "truncated")
  {
    return (PARSER_SALT_VALUE);
  }

  if (salt_len != 0) return (PARSER_SALT_VALUE);

  if ((data_len * 2) != data_buf_len) return (PARSER_SALT_VALUE);

  if (data_len > 327528) return (PARSER_SALT_VALUE);

  if (unpack_size > data_len) return (PARSER_SALT_VALUE);

  if (is_compressed == true)
  {
    if (crc_len_len > 7) return (PARSER_SALT_VALUE);

    if (coder_attributes_len > 10) return (PARSER_SALT_VALUE);

    if ((coder_attributes_len % 2) != 0) return (PARSER_SALT_VALUE);

    // we should be more strict about the needed attribute_len:

    if (data_type == 1) // LZMA1
    {
      if ((coder_attributes_len / 2) != 5) return (PARSER_SALT_VALUE);
    }
    else if (data_type == 2) // LZMA2
    {
      if ((coder_attributes_len / 2) != 1) return (PARSER_SALT_VALUE);
    }
  }

  /**
   * store data
   */

  seven_zip->data_type = data_type;

  seven_zip->iv_buf[0] = hex_to_u32 (iv_buf_pos +  0);
  seven_zip->iv_buf[1] = hex_to_u32 (iv_buf_pos +  8);
  seven_zip->iv_buf[2] = hex_to_u32 (iv_buf_pos + 16);
  seven_zip->iv_buf[3] = hex_to_u32 (iv_buf_pos + 24);

  seven_zip->iv_len = iv_len;

  memcpy (seven_zip->salt_buf, salt_buf_pos, salt_buf_len); // we just need that for later ascii_digest()

  seven_zip->salt_len = 0;

  seven_zip->crc = crc;

  for (int i = 0, j = 0; j < data_buf_len; i += 1, j += 8)
  {
    seven_zip->data_buf[i] = hex_to_u32 (data_buf_pos + j);
  }

  seven_zip->data_len = data_len;

  seven_zip->unpack_size = unpack_size;

  seven_zip->crc_len = crc_len;

  memset (seven_zip->coder_attributes, 0, sizeof (seven_zip->coder_attributes));

  seven_zip->coder_attributes_len = 0;

  if (is_compressed == 1)
  {
    if (is_valid_hex_string (coder_attributes_pos, coder_attributes_len) == false) return (PARSER_SALT_ENCODING);

    for (u32 i = 0, j = 0; j < coder_attributes_len; i += 1, j += 2)
    {
      seven_zip->coder_attributes[i] = hex_to_u8 ((const u8 *) &coder_attributes_pos[j]);

      seven_zip->coder_attributes_len++;
    }
  }

  // normally: crc_len <= unpacksize <= packsize (== data_len)

  int aes_len = data_len;

  if (crc_len != 0) // it is 0 only in case of uncompressed data or truncated data
  {
    // in theory we could just use crc_len, but sometimes (very rare) the compressed data
    // is larger than the original data! (because of some additional bytes from lzma/headers)
    // the +0.5 is used to round up (just to be sure we don't truncate)

    if (data_type == 1) // LZMA1 uses more bytes
    {
      aes_len = 32.5f + (float) crc_len * 1.05f; // +5% max (only for small random inputs)
    }
    else if (data_type == 2) // LZMA2 is more clever (e.g. uncompressed chunks)
    {
      aes_len =  4.5f + (float) crc_len * 1.01f; // +1% max (only for small random inputs)
    }

    // just make sure we never go beyond the data_len limit itself

    aes_len = MIN (aes_len, data_len);
  }

  seven_zip->aes_len = aes_len;

  // real salt

  salt->salt_buf[0] = seven_zip->data_buf[0];
  salt->salt_buf[1] = seven_zip->data_buf[1];
  salt->salt_buf[2] = seven_zip->data_buf[2];
  salt->salt_buf[3] = seven_zip->data_buf[3];

  salt->salt_len = 16;

  salt->salt_sign[0] = data_type;

  salt->salt_iter = 1u << iter;

  /**
   * digest
   */

  digest[0] = crc;
  digest[1] = 0;
  digest[2] = 0;
  digest[3] = 0;

  return (PARSER_OK);
}

int streebog_256_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.len[0]  = 64;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);
  digest[5] = hex_to_u32 (hash_pos + 40);
  digest[6] = hex_to_u32 (hash_pos + 48);
  digest[7] = hex_to_u32 (hash_pos + 56);

  return (PARSER_OK);
}

int streebog_256s_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = ':';
  token.len_min[0] = 64;
  token.len_max[0] = 64;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = SALT_MIN;
  token.len_max[1] = SALT_MAX;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  if (hashconfig->opts_type & OPTS_TYPE_ST_HEX)
  {
    token.len_min[1] *= 2;
    token.len_max[1] *= 2;

    token.attr[1] |= TOKEN_ATTR_VERIFY_HEX;
  }

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);
  digest[5] = hex_to_u32 (hash_pos + 40);
  digest[6] = hex_to_u32 (hash_pos + 48);
  digest[7] = hex_to_u32 (hash_pos + 56);

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int streebog_512_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.len[0]  = 128;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[ 0] = hex_to_u32 (hash_pos +   0);
  digest[ 1] = hex_to_u32 (hash_pos +   8);
  digest[ 2] = hex_to_u32 (hash_pos +  16);
  digest[ 3] = hex_to_u32 (hash_pos +  24);
  digest[ 4] = hex_to_u32 (hash_pos +  32);
  digest[ 5] = hex_to_u32 (hash_pos +  40);
  digest[ 6] = hex_to_u32 (hash_pos +  48);
  digest[ 7] = hex_to_u32 (hash_pos +  56);
  digest[ 8] = hex_to_u32 (hash_pos +  64);
  digest[ 9] = hex_to_u32 (hash_pos +  72);
  digest[10] = hex_to_u32 (hash_pos +  80);
  digest[11] = hex_to_u32 (hash_pos +  88);
  digest[12] = hex_to_u32 (hash_pos +  96);
  digest[13] = hex_to_u32 (hash_pos + 104);
  digest[14] = hex_to_u32 (hash_pos + 112);
  digest[15] = hex_to_u32 (hash_pos + 120);

  return (PARSER_OK);
}

int streebog_512s_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = ':';
  token.len_min[0] = 128;
  token.len_max[0] = 128;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = SALT_MIN;
  token.len_max[1] = SALT_MAX;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  if (hashconfig->opts_type & OPTS_TYPE_ST_HEX)
  {
    token.len_min[1] *= 2;
    token.len_max[1] *= 2;

    token.attr[1] |= TOKEN_ATTR_VERIFY_HEX;
  }

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[ 0] = hex_to_u32 (hash_pos +   0);
  digest[ 1] = hex_to_u32 (hash_pos +   8);
  digest[ 2] = hex_to_u32 (hash_pos +  16);
  digest[ 3] = hex_to_u32 (hash_pos +  24);
  digest[ 4] = hex_to_u32 (hash_pos +  32);
  digest[ 5] = hex_to_u32 (hash_pos +  40);
  digest[ 6] = hex_to_u32 (hash_pos +  48);
  digest[ 7] = hex_to_u32 (hash_pos +  56);
  digest[ 8] = hex_to_u32 (hash_pos +  64);
  digest[ 9] = hex_to_u32 (hash_pos +  72);
  digest[10] = hex_to_u32 (hash_pos +  80);
  digest[11] = hex_to_u32 (hash_pos +  88);
  digest[12] = hex_to_u32 (hash_pos +  96);
  digest[13] = hex_to_u32 (hash_pos + 104);
  digest[14] = hex_to_u32 (hash_pos + 112);
  digest[15] = hex_to_u32 (hash_pos + 120);

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int pbkdf2_md5_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  pbkdf2_md5_t *pbkdf2_md5 = (pbkdf2_md5_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_PBKDF2_MD5;

  token.sep[0]     = ':';
  token.len_min[0] = 3;
  token.len_max[0] = 3;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = ':';
  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = ':';
  token.len_min[2] = SALT_MIN;
  token.len_max[2] = SALT_MAX;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  token.sep[3]     = ':';
  token.len_min[3] = 16;
  token.len_max[3] = 256;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  u8  tmp_buf[512];
  int tmp_len;

  // iter

  const u8 *iter_pos = token.buf[1];

  const u32 iter = hc_strtoul ((const char *) iter_pos, NULL, 10);

  salt->salt_iter = iter - 1;

  // salt

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2];

  memset (tmp_buf, 0, sizeof (tmp_buf));

  tmp_len = base64_decode (base64_to_int, salt_pos, salt_len, tmp_buf);

  if (tmp_len > SALT_MAX) return (PARSER_SALT_LENGTH);

  memcpy (pbkdf2_md5->salt_buf, tmp_buf, tmp_len);

  salt->salt_len = tmp_len;

  salt->salt_buf[0] = pbkdf2_md5->salt_buf[0];
  salt->salt_buf[1] = pbkdf2_md5->salt_buf[1];
  salt->salt_buf[2] = pbkdf2_md5->salt_buf[2];
  salt->salt_buf[3] = pbkdf2_md5->salt_buf[3];
  salt->salt_buf[4] = salt->salt_iter;

  // hash

  const u8 *hash_pos = token.buf[3];
  const int hash_len = token.len[3];

  memset (tmp_buf, 0, sizeof (tmp_buf));

  tmp_len = base64_decode (base64_to_int, hash_pos, hash_len, tmp_buf);

  if (tmp_len < 16) return (PARSER_HASH_LENGTH);

  memcpy (digest, tmp_buf, 16);

  return (PARSER_OK);
}

int pbkdf2_sha512_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u64 *digest = (u64 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  pbkdf2_sha512_t *pbkdf2_sha512 = (pbkdf2_sha512_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_PBKDF2_SHA512;

  token.sep[0]     = ':';
  token.len_min[0] = 6;
  token.len_max[0] = 6;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = ':';
  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = ':';
  token.len_min[2] = SALT_MIN;
  token.len_max[2] = SALT_MAX;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  token.sep[3]     = ':';
  token.len_min[3] = 16;
  token.len_max[3] = 256;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  u8  tmp_buf[512];
  int tmp_len;

  // iter

  const u8 *iter_pos = token.buf[1];

  const u32 iter = hc_strtoul ((const char *) iter_pos, NULL, 10);

  salt->salt_iter = iter - 1;

  // salt

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2];

  memset (tmp_buf, 0, sizeof (tmp_buf));

  tmp_len = base64_decode (base64_to_int, salt_pos, salt_len, tmp_buf);

  if (tmp_len > SALT_MAX) return (PARSER_SALT_LENGTH);

  memcpy (pbkdf2_sha512->salt_buf, tmp_buf, tmp_len);

  salt->salt_len = tmp_len;

  salt->salt_buf[0] = pbkdf2_sha512->salt_buf[0];
  salt->salt_buf[1] = pbkdf2_sha512->salt_buf[1];
  salt->salt_buf[2] = pbkdf2_sha512->salt_buf[2];
  salt->salt_buf[3] = pbkdf2_sha512->salt_buf[3];
  salt->salt_buf[4] = salt->salt_iter;

  // hash

  const u8 *hash_pos = token.buf[3];
  const int hash_len = token.len[3];

  memset (tmp_buf, 0, sizeof (tmp_buf));

  tmp_len = base64_decode (base64_to_int, hash_pos, hash_len, tmp_buf);

  if (tmp_len < 16) return (PARSER_HASH_LENGTH);

  memcpy (digest, tmp_buf, 64);

  digest[0] = byte_swap_64 (digest[0]);
  digest[1] = byte_swap_64 (digest[1]);
  digest[2] = byte_swap_64 (digest[2]);
  digest[3] = byte_swap_64 (digest[3]);
  digest[4] = byte_swap_64 (digest[4]);
  digest[5] = byte_swap_64 (digest[5]);
  digest[6] = byte_swap_64 (digest[6]);
  digest[7] = byte_swap_64 (digest[7]);

  return (PARSER_OK);
}

int ecryptfs_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 5;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_ECRYPTFS;

  token.len[0]     = 10;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '$';
  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = '$';
  token.len_min[2] = 1;
  token.len_max[2] = 1;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[3]     = '$';
  token.len_min[3] = 16;
  token.len_max[3] = 16;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[4]     = '$';
  token.len_min[4] = 16;
  token.len_max[4] = 16;
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // hash

  const u8 *hash_pos = token.buf[4];

  digest[ 0] = hex_to_u32 (hash_pos + 0);
  digest[ 1] = hex_to_u32 (hash_pos + 8);
  digest[ 2] = 0;
  digest[ 3] = 0;
  digest[ 4] = 0;
  digest[ 5] = 0;
  digest[ 6] = 0;
  digest[ 7] = 0;
  digest[ 8] = 0;
  digest[ 9] = 0;
  digest[10] = 0;
  digest[11] = 0;
  digest[12] = 0;
  digest[13] = 0;
  digest[14] = 0;
  digest[15] = 0;

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);

  // salt

  const u8 *salt_pos = token.buf[3];

  salt->salt_buf[0] = hex_to_u32 (salt_pos + 0);
  salt->salt_buf[1] = hex_to_u32 (salt_pos + 8);

  salt->salt_buf[0] = byte_swap_32 (salt->salt_buf[0]);
  salt->salt_buf[1] = byte_swap_32 (salt->salt_buf[1]);

  salt->salt_iter = ROUNDS_ECRYPTFS;
  salt->salt_len  = 8;

  return (PARSER_OK);
}

int bsdicrypt_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  salt_t *salt = hash_buf->salt;

  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_BSDICRYPT;

  token.len[0]     = 1;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len[1]     = 4;
  token.attr[1]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64B;

  token.len[2]     = 4;
  token.attr[2]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64B;

  token.len[3]     = 11;
  token.attr[3]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64B;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // iteration count

  const u8 *iter_pos = token.buf[1];

  salt->salt_iter = itoa64_to_int (iter_pos[0])
                  | itoa64_to_int (iter_pos[1]) <<  6
                  | itoa64_to_int (iter_pos[2]) << 12
                  | itoa64_to_int (iter_pos[3]) << 18;

  // set salt

  const u8 *salt_pos = token.buf[2];

  salt->salt_buf[0] = itoa64_to_int (salt_pos[0])
                    | itoa64_to_int (salt_pos[1]) <<  6
                    | itoa64_to_int (salt_pos[2]) << 12
                    | itoa64_to_int (salt_pos[3]) << 18;

  salt->salt_len = 4;

  // hash

  const u8 *hash_pos = token.buf[3];
  const int hash_len = token.len[3];

  unsigned char c19 = itoa64_to_int (hash_pos[10]);

  if (c19 & 3) return (PARSER_HASH_VALUE);

  u8 tmp_buf[100] = { 0 };

  base64_decode (itoa64_to_int, hash_pos, hash_len, tmp_buf);

  memcpy (digest, tmp_buf, 8);

  u32 tt;

  IP (digest[0], digest[1], tt);

  digest[0] = rotr32 (digest[0], 31);
  digest[1] = rotr32 (digest[1], 31);
  digest[2] = 0;
  digest[3] = 0;

  return (PARSER_OK);
}

int rar3hp_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_RAR3;

  token.sep[0]     = '*';
  token.len_min[0] = 6;
  token.len_max[0] = 6;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '*';
  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = '*';
  token.len_min[2] = 16;
  token.len_max[2] = 16;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[3]     = '*';
  token.len_min[3] = 32;
  token.len_max[3] = 32;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *type_pos    = token.buf[1];
  const u8 *salt_pos    = token.buf[2];
  const u8 *crypted_pos = token.buf[3];

  if (type_pos[0] != '0') return (PARSER_SIGNATURE_UNMATCHED);

  /**
   * copy data
   */

  salt->salt_buf[0] = hex_to_u32 (salt_pos + 0);
  salt->salt_buf[1] = hex_to_u32 (salt_pos + 8);
  salt->salt_buf[2] = hex_to_u32 (crypted_pos +  0);
  salt->salt_buf[3] = hex_to_u32 (crypted_pos +  8);
  salt->salt_buf[4] = hex_to_u32 (crypted_pos + 16);
  salt->salt_buf[5] = hex_to_u32 (crypted_pos + 24);

  salt->salt_buf[2] = byte_swap_32 (salt->salt_buf[2]);
  salt->salt_buf[3] = byte_swap_32 (salt->salt_buf[3]);
  salt->salt_buf[4] = byte_swap_32 (salt->salt_buf[4]);
  salt->salt_buf[5] = byte_swap_32 (salt->salt_buf[5]);

  salt->salt_len  = 24;
  salt->salt_iter = ROUNDS_RAR3;

  // there's no hash for rar3. the data which is in crypted_pos is some encrypted data and
  // if it matches the value \xc4\x3d\x7b\x00\x40\x07\x00 after decrypt we know that we successfully cracked it.

  digest[0] = 0xc43d7b00;
  digest[1] = 0x40070000;
  digest[2] = 0;
  digest[3] = 0;

  return (PARSER_OK);
}

int rar5_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  rar5_t *rar5 = (rar5_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 7;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_RAR5;

  token.len[0]     = 6;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '$';
  token.len_min[1] = 2;
  token.len_max[1] = 2;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = '$';
  token.len_min[2] = 32;
  token.len_max[2] = 32;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[3]     = '$';
  token.len_min[3] = 2;
  token.len_max[3] = 2;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[4]     = '$';
  token.len_min[4] = 32;
  token.len_max[4] = 32;
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[5]     = '$';
  token.len_min[5] = 1;
  token.len_max[5] = 1;
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[6]     = '$';
  token.len_min[6] = 16;
  token.len_max[6] = 16;
  token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // iter

  const u8 *iter_pos = token.buf[3];

  const u32 iterations = hc_strtoul ((const char *) iter_pos, NULL, 10);

  salt->salt_iter = ((1u << iterations) + 32) - 1;

  if (iterations == 0) return (PARSER_SALT_VALUE);

  salt->salt_sign[0] = iterations;

  // salt

  const u8 *salt_buf = token.buf[2];

  salt->salt_buf[0] = hex_to_u32 (salt_buf +  0);
  salt->salt_buf[1] = hex_to_u32 (salt_buf +  8);
  salt->salt_buf[2] = hex_to_u32 (salt_buf + 16);
  salt->salt_buf[3] = hex_to_u32 (salt_buf + 24);

  salt->salt_buf[0] = byte_swap_32 (salt->salt_buf[0]);
  salt->salt_buf[1] = byte_swap_32 (salt->salt_buf[1]);
  salt->salt_buf[2] = byte_swap_32 (salt->salt_buf[2]);
  salt->salt_buf[3] = byte_swap_32 (salt->salt_buf[3]);

  // iv

  const u8 *iv = token.buf[4];

  rar5->iv[0] = hex_to_u32 (iv +  0);
  rar5->iv[1] = hex_to_u32 (iv +  8);
  rar5->iv[2] = hex_to_u32 (iv + 16);
  rar5->iv[3] = hex_to_u32 (iv + 24);

  rar5->iv[0] = byte_swap_32 (rar5->iv[0]);
  rar5->iv[1] = byte_swap_32 (rar5->iv[1]);
  rar5->iv[2] = byte_swap_32 (rar5->iv[2]);
  rar5->iv[3] = byte_swap_32 (rar5->iv[3]);

  salt->salt_len = 16;

  // hash

  const u8 *pswcheck = token.buf[6];

  digest[0] = hex_to_u32 (pswcheck + 0);
  digest[1] = hex_to_u32 (pswcheck + 8);
  digest[2] = 0;
  digest[3] = 0;

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = 0;
  digest[3] = 0;

  return (PARSER_OK);
}

int krb5tgs_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  krb5tgs_t *krb5tgs = (krb5tgs_t *) hash_buf->esalt;

  token_t token;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_KRB5TGS;

  token.len[0]  = 12;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_SIGNATURE;

  /**
   * $krb5tgs$23$checksum$edata2
   * $krb5tgs$23$*user*realm*spn*$checksum$edata2
   */

  if (input_len < 16) return (PARSER_SALT_LENGTH);

  if (input_buf[12] == '*')
  {
    char *account_info_start = (char *) input_buf + 12; // we want the * char included
    char *account_info_stop  = strchr ((const char *) account_info_start + 1, '*');

    if (account_info_stop == NULL) return (PARSER_SEPARATOR_UNMATCHED);

    account_info_stop++; // we want the * char included
    account_info_stop++; // we want the $ char included

    const int account_info_len = account_info_stop - account_info_start;

    token.token_cnt  = 4;

    token.len[1]     = account_info_len;
    token.attr[1]    = TOKEN_ATTR_FIXED_LENGTH;

    token.sep[2]     = '$';
    token.len_min[2] = 32;
    token.len_max[2] = 32;
    token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                     | TOKEN_ATTR_VERIFY_HEX;

    token.sep[3]     = '$';
    token.len_min[3] = 64;
    token.len_max[3] = 40960;
    token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                     | TOKEN_ATTR_VERIFY_HEX;
  }
  else
  {
    token.token_cnt  = 3;

    token.sep[1]     = '$';
    token.len_min[1] = 32;
    token.len_max[1] = 32;
    token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                     | TOKEN_ATTR_VERIFY_HEX;

    token.sep[2]     = '$';
    token.len_min[2] = 64;
    token.len_max[2] = 40960;
    token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                     | TOKEN_ATTR_VERIFY_HEX;
  }

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *checksum_pos;
  const u8 *data_pos;

  int data_len;

  if (input_buf[12] == '*')
  {
    checksum_pos = token.buf[2];

    data_pos = token.buf[3];
    data_len = token.len[3];

    memcpy (krb5tgs->account_info, token.buf[1], token.len[1]);
  }
  else
  {
    checksum_pos = token.buf[1];

    data_pos = token.buf[2];
    data_len = token.len[2];

    krb5tgs->account_info[0] = 0;
  }

  krb5tgs->checksum[0] = hex_to_u32 (checksum_pos +  0);
  krb5tgs->checksum[1] = hex_to_u32 (checksum_pos +  8);
  krb5tgs->checksum[2] = hex_to_u32 (checksum_pos + 16);
  krb5tgs->checksum[3] = hex_to_u32 (checksum_pos + 24);

  u8 *edata_ptr = (u8 *) krb5tgs->edata2;

  for (int i = 0; i < data_len; i += 2)
  {
    const u8 p0 = data_pos[i + 0];
    const u8 p1 = data_pos[i + 1];

    *edata_ptr++ = hex_convert (p1) << 0
                 | hex_convert (p0) << 4;
  }

  krb5tgs->edata2_len = data_len / 2;

  /* this is needed for hmac_md5 */
  *edata_ptr++ = 0x80;

  salt->salt_buf[0] = krb5tgs->checksum[0];
  salt->salt_buf[1] = krb5tgs->checksum[1];
  salt->salt_buf[2] = krb5tgs->checksum[2];
  salt->salt_buf[3] = krb5tgs->checksum[3];

  salt->salt_len = 16;

  digest[0] = krb5tgs->checksum[0];
  digest[1] = krb5tgs->checksum[1];
  digest[2] = krb5tgs->checksum[2];
  digest[3] = krb5tgs->checksum[3];

  return (PARSER_OK);
}

int krb5asrep_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  krb5asrep_t *krb5asrep = (krb5asrep_t *) hash_buf->esalt;

  token_t token;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_KRB5ASREP;

  token.len[0]  = strlen(SIGNATURE_KRB5ASREP);
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_SIGNATURE;

  /**
   * $krb5asrep$23$user_principal_name:checksum$edata2
   */

  if (input_len < 16) return (PARSER_SALT_LENGTH);

  char *upn_info_start = (char *) input_buf + strlen(SIGNATURE_KRB5ASREP);
  char *upn_info_stop  = strchr ((const char *) upn_info_start, ':');

  if (upn_info_stop == NULL) return (PARSER_SEPARATOR_UNMATCHED);

  upn_info_stop++; // we want the : char included

  const int upn_info_len = upn_info_stop - upn_info_start;

  token.token_cnt  = 4;

  token.len[1]     = upn_info_len;
  token.attr[1]    = TOKEN_ATTR_FIXED_LENGTH;

  token.sep[2]     = '$';
  token.len_min[2] = 32;
  token.len_max[2] = 32;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[3]     = '$';
  token.len_min[3] = 64;
  token.len_max[3] = 40960;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *checksum_pos = token.buf[2];

  const u8 *data_pos = token.buf[3];
  const int data_len = token.len[3];

  memcpy (krb5asrep->account_info, token.buf[1], token.len[1]);

  krb5asrep->checksum[0] = hex_to_u32 (checksum_pos +  0);
  krb5asrep->checksum[1] = hex_to_u32 (checksum_pos +  8);
  krb5asrep->checksum[2] = hex_to_u32 (checksum_pos + 16);
  krb5asrep->checksum[3] = hex_to_u32 (checksum_pos + 24);

  u8 *edata_ptr = (u8 *) krb5asrep->edata2;

  for (int i = 0; i < data_len; i += 2)
  {
    const u8 p0 = data_pos[i + 0];
    const u8 p1 = data_pos[i + 1];

    *edata_ptr++ = hex_convert (p1) << 0
                 | hex_convert (p0) << 4;
  }

  krb5asrep->edata2_len = data_len / 2;

  /* this is needed for hmac_md5 */
  *edata_ptr++ = 0x80;

  salt->salt_buf[0] = krb5asrep->checksum[0];
  salt->salt_buf[1] = krb5asrep->checksum[1];
  salt->salt_buf[2] = krb5asrep->checksum[2];
  salt->salt_buf[3] = krb5asrep->checksum[3];

  salt->salt_len = 16;

  digest[0] = krb5asrep->checksum[0];
  digest[1] = krb5asrep->checksum[1];
  digest[2] = krb5asrep->checksum[2];
  digest[3] = krb5asrep->checksum[3];

  return (PARSER_OK);
}

int axcrypt_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 5;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_AXCRYPT;

  token.sep[0]     = '*';
  token.len_min[0] = 9;
  token.len_max[0] = 9;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '*';
  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = '*';
  token.len_min[2] = 1;
  token.len_max[2] = 6;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[3]     = '*';
  token.len_min[3] = 32;
  token.len_max[3] = 32;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[4]     = '*';
  token.len_min[4] = 48;
  token.len_max[4] = 48;
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // iter

  const u8 *wrapping_rounds_pos = token.buf[2];

  salt->salt_iter = hc_strtoul ((const char *) wrapping_rounds_pos, NULL, 10);

  // salt

  const u8 *wrapped_key_pos = token.buf[3];

  salt->salt_buf[0] = hex_to_u32 (wrapped_key_pos +  0);
  salt->salt_buf[1] = hex_to_u32 (wrapped_key_pos +  8);
  salt->salt_buf[2] = hex_to_u32 (wrapped_key_pos + 16);
  salt->salt_buf[3] = hex_to_u32 (wrapped_key_pos + 24);

  salt->salt_buf[0] = byte_swap_32 (salt->salt_buf[0]);
  salt->salt_buf[1] = byte_swap_32 (salt->salt_buf[1]);
  salt->salt_buf[2] = byte_swap_32 (salt->salt_buf[2]);
  salt->salt_buf[3] = byte_swap_32 (salt->salt_buf[3]);

  // data

  const u8 *data_pos = token.buf[4];

  salt->salt_buf[4] = hex_to_u32 (data_pos +  0);
  salt->salt_buf[5] = hex_to_u32 (data_pos +  8);
  salt->salt_buf[6] = hex_to_u32 (data_pos + 16);
  salt->salt_buf[7] = hex_to_u32 (data_pos + 24);
  salt->salt_buf[8] = hex_to_u32 (data_pos + 32);
  salt->salt_buf[9] = hex_to_u32 (data_pos + 40);

  salt->salt_buf[4] = byte_swap_32 (salt->salt_buf[4]);
  salt->salt_buf[5] = byte_swap_32 (salt->salt_buf[5]);
  salt->salt_buf[6] = byte_swap_32 (salt->salt_buf[6]);
  salt->salt_buf[7] = byte_swap_32 (salt->salt_buf[7]);
  salt->salt_buf[8] = byte_swap_32 (salt->salt_buf[8]);
  salt->salt_buf[9] = byte_swap_32 (salt->salt_buf[9]);

  salt->salt_len = 40;

  digest[0] = salt->salt_buf[0];
  digest[1] = salt->salt_buf[1];
  digest[2] = salt->salt_buf[2];
  digest[3] = salt->salt_buf[3];

  return (PARSER_OK);
}

int keepass_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  keepass_t *keepass = (keepass_t *) hash_buf->esalt;

  bool is_keyfile_present = false;

  if (input_len < 128) return (PARSER_SALT_LENGTH);

  if ((input_buf[input_len - (64 + 1 + 2 + 1 + 2)] == '*')
   && (input_buf[input_len - (64 + 1 + 2 + 1 + 1)] == '1')
   && (input_buf[input_len - (64 + 1 + 2 + 1 + 0)] == '*')) is_keyfile_present = true;

  token_t token;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_KEEPASS;

  token.sep[0]     = '*';
  token.len_min[0] = 9;
  token.len_max[0] = 9;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '*';
  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = '*';
  token.len_min[2] = 1;
  token.len_max[2] = 8;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[3]     = '*';
  token.len_min[3] = 1;
  token.len_max[3] = 3;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  if (input_len < 16) return (PARSER_SALT_LENGTH);

  const u8 version = input_buf[10];

  if (version == '1')
  {
    token.token_cnt  = 11;

    token.sep[4]     = '*';
    token.len_min[4] = 32;
    token.len_max[4] = 32;
    token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                     | TOKEN_ATTR_VERIFY_HEX;

    token.sep[5]     = '*';
    token.len_min[5] = 64;
    token.len_max[5] = 64;
    token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                     | TOKEN_ATTR_VERIFY_HEX;

    token.sep[6]     = '*';
    token.len_min[6] = 32;
    token.len_max[6] = 32;
    token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                     | TOKEN_ATTR_VERIFY_HEX;

    token.sep[7]     = '*';
    token.len_min[7] = 64;
    token.len_max[7] = 64;
    token.attr[7]    = TOKEN_ATTR_VERIFY_LENGTH
                     | TOKEN_ATTR_VERIFY_HEX;

    token.sep[8]     = '*';
    token.len_min[8] = 1;
    token.len_max[8] = 1;
    token.attr[8]    = TOKEN_ATTR_VERIFY_LENGTH
                     | TOKEN_ATTR_VERIFY_DIGIT;

    token.sep[9]     = '*';
    token.len_min[9] = 1;
    token.len_max[9] = 6;
    token.attr[9]    = TOKEN_ATTR_VERIFY_LENGTH
                     | TOKEN_ATTR_VERIFY_DIGIT;

    token.sep[10]     = '*';
    token.len_min[10] = 2;
    token.len_max[10] = 600000;
    token.attr[10]    = TOKEN_ATTR_VERIFY_LENGTH
                      | TOKEN_ATTR_VERIFY_HEX;

    if (is_keyfile_present == true)
    {
      token.token_cnt = 14;

      token.sep[11]     = '*';
      token.len_min[11] = 1;
      token.len_max[11] = 1;
      token.attr[11]    = TOKEN_ATTR_VERIFY_LENGTH
                        | TOKEN_ATTR_VERIFY_DIGIT;

      token.sep[12]     = '*';
      token.len_min[12] = 2;
      token.len_max[12] = 2;
      token.attr[12]    = TOKEN_ATTR_VERIFY_LENGTH
                        | TOKEN_ATTR_VERIFY_DIGIT;

      token.sep[13]     = '*';
      token.len_min[13] = 64;
      token.len_max[13] = 64;
      token.attr[13]    = TOKEN_ATTR_VERIFY_LENGTH
                        | TOKEN_ATTR_VERIFY_HEX;
    }
  }
  else if (version == '2')
  {
    token.token_cnt  = 9;

    token.sep[4]     = '*';
    token.len_min[4] = 64;
    token.len_max[4] = 64;
    token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                     | TOKEN_ATTR_VERIFY_HEX;

    token.sep[5]     = '*';
    token.len_min[5] = 64;
    token.len_max[5] = 64;
    token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                     | TOKEN_ATTR_VERIFY_HEX;

    token.sep[6]     = '*';
    token.len_min[6] = 32;
    token.len_max[6] = 32;
    token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                     | TOKEN_ATTR_VERIFY_HEX;

    token.sep[7]     = '*';
    token.len_min[7] = 64;
    token.len_max[7] = 64;
    token.attr[7]    = TOKEN_ATTR_VERIFY_LENGTH
                     | TOKEN_ATTR_VERIFY_HEX;

    token.sep[8]     = '*';
    token.len_min[8] = 64;
    token.len_max[8] = 64;
    token.attr[8]    = TOKEN_ATTR_VERIFY_LENGTH
                     | TOKEN_ATTR_VERIFY_HEX;

    if (is_keyfile_present == true)
    {
      token.token_cnt = 12;

      token.sep[9]      = '*';
      token.len_min[9]  = 1;
      token.len_max[9]  = 1;
      token.attr[9]     = TOKEN_ATTR_VERIFY_LENGTH
                        | TOKEN_ATTR_VERIFY_DIGIT;

      token.sep[10]     = '*';
      token.len_min[10] = 2;
      token.len_max[10] = 2;
      token.attr[10]    = TOKEN_ATTR_VERIFY_LENGTH
                        | TOKEN_ATTR_VERIFY_DIGIT;

      token.sep[11]     = '*';
      token.len_min[11] = 64;
      token.len_max[11] = 64;
      token.attr[11]    = TOKEN_ATTR_VERIFY_LENGTH
                        | TOKEN_ATTR_VERIFY_HEX;
    }
  }
  else
  {
    return (PARSER_SALT_VALUE);
  }

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // version

  const u8 *version_pos = token.buf[1];

  keepass->version = hc_strtoul ((const char *) version_pos, NULL, 10);

  // iter

  const u8 *rounds_pos = token.buf[2];

  salt->salt_iter = hc_strtoul ((const char *) rounds_pos, NULL, 10);

  // algo

  const u8 *algorithm_pos = token.buf[3];

  keepass->algorithm = hc_strtoul ((const char *) algorithm_pos, NULL, 10);

  // final_random_seed_pos

  const u8 *final_random_seed_pos = token.buf[4];

  keepass->final_random_seed[0] = hex_to_u32 ((const u8 *) &final_random_seed_pos[ 0]);
  keepass->final_random_seed[1] = hex_to_u32 ((const u8 *) &final_random_seed_pos[ 8]);
  keepass->final_random_seed[2] = hex_to_u32 ((const u8 *) &final_random_seed_pos[16]);
  keepass->final_random_seed[3] = hex_to_u32 ((const u8 *) &final_random_seed_pos[24]);

  keepass->final_random_seed[0] = byte_swap_32 (keepass->final_random_seed[0]);
  keepass->final_random_seed[1] = byte_swap_32 (keepass->final_random_seed[1]);
  keepass->final_random_seed[2] = byte_swap_32 (keepass->final_random_seed[2]);
  keepass->final_random_seed[3] = byte_swap_32 (keepass->final_random_seed[3]);

  if (keepass->version == 2)
  {
    keepass->final_random_seed[4] = hex_to_u32 ((const u8 *) &final_random_seed_pos[32]);
    keepass->final_random_seed[5] = hex_to_u32 ((const u8 *) &final_random_seed_pos[40]);
    keepass->final_random_seed[6] = hex_to_u32 ((const u8 *) &final_random_seed_pos[48]);
    keepass->final_random_seed[7] = hex_to_u32 ((const u8 *) &final_random_seed_pos[56]);

    keepass->final_random_seed[4] = byte_swap_32 (keepass->final_random_seed[4]);
    keepass->final_random_seed[5] = byte_swap_32 (keepass->final_random_seed[5]);
    keepass->final_random_seed[6] = byte_swap_32 (keepass->final_random_seed[6]);
    keepass->final_random_seed[7] = byte_swap_32 (keepass->final_random_seed[7]);
  }

  // transf_random_seed_pos

  const u8 *transf_random_seed_pos = token.buf[5];

  keepass->transf_random_seed[0] = hex_to_u32 ((const u8 *) &transf_random_seed_pos[ 0]);
  keepass->transf_random_seed[1] = hex_to_u32 ((const u8 *) &transf_random_seed_pos[ 8]);
  keepass->transf_random_seed[2] = hex_to_u32 ((const u8 *) &transf_random_seed_pos[16]);
  keepass->transf_random_seed[3] = hex_to_u32 ((const u8 *) &transf_random_seed_pos[24]);
  keepass->transf_random_seed[4] = hex_to_u32 ((const u8 *) &transf_random_seed_pos[32]);
  keepass->transf_random_seed[5] = hex_to_u32 ((const u8 *) &transf_random_seed_pos[40]);
  keepass->transf_random_seed[6] = hex_to_u32 ((const u8 *) &transf_random_seed_pos[48]);
  keepass->transf_random_seed[7] = hex_to_u32 ((const u8 *) &transf_random_seed_pos[56]);

  keepass->transf_random_seed[0] = byte_swap_32 (keepass->transf_random_seed[0]);
  keepass->transf_random_seed[1] = byte_swap_32 (keepass->transf_random_seed[1]);
  keepass->transf_random_seed[2] = byte_swap_32 (keepass->transf_random_seed[2]);
  keepass->transf_random_seed[3] = byte_swap_32 (keepass->transf_random_seed[3]);
  keepass->transf_random_seed[4] = byte_swap_32 (keepass->transf_random_seed[4]);
  keepass->transf_random_seed[5] = byte_swap_32 (keepass->transf_random_seed[5]);
  keepass->transf_random_seed[6] = byte_swap_32 (keepass->transf_random_seed[6]);
  keepass->transf_random_seed[7] = byte_swap_32 (keepass->transf_random_seed[7]);

  // enc_iv_pos

  const u8 *enc_iv_pos = token.buf[6];

  keepass->enc_iv[0] = hex_to_u32 ((const u8 *) &enc_iv_pos[ 0]);
  keepass->enc_iv[1] = hex_to_u32 ((const u8 *) &enc_iv_pos[ 8]);
  keepass->enc_iv[2] = hex_to_u32 ((const u8 *) &enc_iv_pos[16]);
  keepass->enc_iv[3] = hex_to_u32 ((const u8 *) &enc_iv_pos[24]);

  keepass->enc_iv[0] = byte_swap_32 (keepass->enc_iv[0]);
  keepass->enc_iv[1] = byte_swap_32 (keepass->enc_iv[1]);
  keepass->enc_iv[2] = byte_swap_32 (keepass->enc_iv[2]);
  keepass->enc_iv[3] = byte_swap_32 (keepass->enc_iv[3]);

  const u8 *keyfile_pos = NULL;

  if (keepass->version == 1)
  {
    // contents_hash

    const u8 *contents_hash_pos = token.buf[7];

    keepass->contents_hash[0] = hex_to_u32 ((const u8 *) &contents_hash_pos[ 0]);
    keepass->contents_hash[1] = hex_to_u32 ((const u8 *) &contents_hash_pos[ 8]);
    keepass->contents_hash[2] = hex_to_u32 ((const u8 *) &contents_hash_pos[16]);
    keepass->contents_hash[3] = hex_to_u32 ((const u8 *) &contents_hash_pos[24]);
    keepass->contents_hash[4] = hex_to_u32 ((const u8 *) &contents_hash_pos[32]);
    keepass->contents_hash[5] = hex_to_u32 ((const u8 *) &contents_hash_pos[40]);
    keepass->contents_hash[6] = hex_to_u32 ((const u8 *) &contents_hash_pos[48]);
    keepass->contents_hash[7] = hex_to_u32 ((const u8 *) &contents_hash_pos[56]);

    keepass->contents_hash[0] = byte_swap_32 (keepass->contents_hash[0]);
    keepass->contents_hash[1] = byte_swap_32 (keepass->contents_hash[1]);
    keepass->contents_hash[2] = byte_swap_32 (keepass->contents_hash[2]);
    keepass->contents_hash[3] = byte_swap_32 (keepass->contents_hash[3]);
    keepass->contents_hash[4] = byte_swap_32 (keepass->contents_hash[4]);
    keepass->contents_hash[5] = byte_swap_32 (keepass->contents_hash[5]);
    keepass->contents_hash[6] = byte_swap_32 (keepass->contents_hash[6]);
    keepass->contents_hash[7] = byte_swap_32 (keepass->contents_hash[7]);

    // contents

    const u8 *contents_pos = token.buf[10];
    const int contents_len = token.len[10];

    keepass->contents_len = contents_len / 2;

    for (int i = 0, j = 0; j < contents_len; i += 1, j += 8)
    {
      keepass->contents[i] = hex_to_u32 ((const u8 *) &contents_pos[j]);

      keepass->contents[i] = byte_swap_32 (keepass->contents[i]);
    }

    if (is_keyfile_present == true)
    {
      keyfile_pos = token.buf[13];
    }
  }
  else if (keepass->version == 2)
  {
    // expected_bytes

    const u8 *expected_bytes_pos = token.buf[7];

    keepass->expected_bytes[0] = hex_to_u32 ((const u8 *) &expected_bytes_pos[ 0]);
    keepass->expected_bytes[1] = hex_to_u32 ((const u8 *) &expected_bytes_pos[ 8]);
    keepass->expected_bytes[2] = hex_to_u32 ((const u8 *) &expected_bytes_pos[16]);
    keepass->expected_bytes[3] = hex_to_u32 ((const u8 *) &expected_bytes_pos[24]);
    keepass->expected_bytes[4] = hex_to_u32 ((const u8 *) &expected_bytes_pos[32]);
    keepass->expected_bytes[5] = hex_to_u32 ((const u8 *) &expected_bytes_pos[40]);
    keepass->expected_bytes[6] = hex_to_u32 ((const u8 *) &expected_bytes_pos[48]);
    keepass->expected_bytes[7] = hex_to_u32 ((const u8 *) &expected_bytes_pos[56]);

    keepass->expected_bytes[0] = byte_swap_32 (keepass->expected_bytes[0]);
    keepass->expected_bytes[1] = byte_swap_32 (keepass->expected_bytes[1]);
    keepass->expected_bytes[2] = byte_swap_32 (keepass->expected_bytes[2]);
    keepass->expected_bytes[3] = byte_swap_32 (keepass->expected_bytes[3]);
    keepass->expected_bytes[4] = byte_swap_32 (keepass->expected_bytes[4]);
    keepass->expected_bytes[5] = byte_swap_32 (keepass->expected_bytes[5]);
    keepass->expected_bytes[6] = byte_swap_32 (keepass->expected_bytes[6]);
    keepass->expected_bytes[7] = byte_swap_32 (keepass->expected_bytes[7]);

    // contents_hash

    const u8 *contents_hash_pos = token.buf[8];

    keepass->contents_hash[0] = hex_to_u32 ((const u8 *) &contents_hash_pos[ 0]);
    keepass->contents_hash[1] = hex_to_u32 ((const u8 *) &contents_hash_pos[ 8]);
    keepass->contents_hash[2] = hex_to_u32 ((const u8 *) &contents_hash_pos[16]);
    keepass->contents_hash[3] = hex_to_u32 ((const u8 *) &contents_hash_pos[24]);
    keepass->contents_hash[4] = hex_to_u32 ((const u8 *) &contents_hash_pos[32]);
    keepass->contents_hash[5] = hex_to_u32 ((const u8 *) &contents_hash_pos[40]);
    keepass->contents_hash[6] = hex_to_u32 ((const u8 *) &contents_hash_pos[48]);
    keepass->contents_hash[7] = hex_to_u32 ((const u8 *) &contents_hash_pos[56]);

    keepass->contents_hash[0] = byte_swap_32 (keepass->contents_hash[0]);
    keepass->contents_hash[1] = byte_swap_32 (keepass->contents_hash[1]);
    keepass->contents_hash[2] = byte_swap_32 (keepass->contents_hash[2]);
    keepass->contents_hash[3] = byte_swap_32 (keepass->contents_hash[3]);
    keepass->contents_hash[4] = byte_swap_32 (keepass->contents_hash[4]);
    keepass->contents_hash[5] = byte_swap_32 (keepass->contents_hash[5]);
    keepass->contents_hash[6] = byte_swap_32 (keepass->contents_hash[6]);
    keepass->contents_hash[7] = byte_swap_32 (keepass->contents_hash[7]);

    if (is_keyfile_present == true)
    {
      keyfile_pos = token.buf[11];
    }
  }

  if (is_keyfile_present == true)
  {
    keepass->keyfile_len = 32;

    keepass->keyfile[0] = hex_to_u32 ((const u8 *) &keyfile_pos[ 0]);
    keepass->keyfile[1] = hex_to_u32 ((const u8 *) &keyfile_pos[ 8]);
    keepass->keyfile[2] = hex_to_u32 ((const u8 *) &keyfile_pos[16]);
    keepass->keyfile[3] = hex_to_u32 ((const u8 *) &keyfile_pos[24]);
    keepass->keyfile[4] = hex_to_u32 ((const u8 *) &keyfile_pos[32]);
    keepass->keyfile[5] = hex_to_u32 ((const u8 *) &keyfile_pos[40]);
    keepass->keyfile[6] = hex_to_u32 ((const u8 *) &keyfile_pos[48]);
    keepass->keyfile[7] = hex_to_u32 ((const u8 *) &keyfile_pos[56]);

    keepass->keyfile[0] = byte_swap_32 (keepass->keyfile[0]);
    keepass->keyfile[1] = byte_swap_32 (keepass->keyfile[1]);
    keepass->keyfile[2] = byte_swap_32 (keepass->keyfile[2]);
    keepass->keyfile[3] = byte_swap_32 (keepass->keyfile[3]);
    keepass->keyfile[4] = byte_swap_32 (keepass->keyfile[4]);
    keepass->keyfile[5] = byte_swap_32 (keepass->keyfile[5]);
    keepass->keyfile[6] = byte_swap_32 (keepass->keyfile[6]);
    keepass->keyfile[7] = byte_swap_32 (keepass->keyfile[7]);
  }

  if (keepass->version == 1)
  {
    digest[0] = keepass->contents_hash[0];
    digest[1] = keepass->contents_hash[1];
    digest[2] = keepass->contents_hash[2];
    digest[3] = keepass->contents_hash[3];
  }
  else
  {
    digest[0] = keepass->expected_bytes[0];
    digest[1] = keepass->expected_bytes[1];
    digest[2] = keepass->expected_bytes[2];
    digest[3] = keepass->expected_bytes[3];
  }

  salt->salt_buf[0] = keepass->transf_random_seed[0];
  salt->salt_buf[1] = keepass->transf_random_seed[1];
  salt->salt_buf[2] = keepass->transf_random_seed[2];
  salt->salt_buf[3] = keepass->transf_random_seed[3];
  salt->salt_buf[4] = keepass->transf_random_seed[4];
  salt->salt_buf[5] = keepass->transf_random_seed[5];
  salt->salt_buf[6] = keepass->transf_random_seed[6];
  salt->salt_buf[7] = keepass->transf_random_seed[7];

  salt->salt_len = 32;

  return (PARSER_OK);
}

int cf10_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 64;
  token.len_max[0] = 64;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 64;
  token.len_max[1] = 64;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // hash

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);
  digest[5] = hex_to_u32 (hash_pos + 40);
  digest[6] = hex_to_u32 (hash_pos + 48);
  digest[7] = hex_to_u32 (hash_pos + 56);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  // salt

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  /**
   * we can precompute the first sha256 transform
   */

  u32 w[16] = { 0 };

  w[ 0] = byte_swap_32 (salt->salt_buf[ 0]);
  w[ 1] = byte_swap_32 (salt->salt_buf[ 1]);
  w[ 2] = byte_swap_32 (salt->salt_buf[ 2]);
  w[ 3] = byte_swap_32 (salt->salt_buf[ 3]);
  w[ 4] = byte_swap_32 (salt->salt_buf[ 4]);
  w[ 5] = byte_swap_32 (salt->salt_buf[ 5]);
  w[ 6] = byte_swap_32 (salt->salt_buf[ 6]);
  w[ 7] = byte_swap_32 (salt->salt_buf[ 7]);
  w[ 8] = byte_swap_32 (salt->salt_buf[ 8]);
  w[ 9] = byte_swap_32 (salt->salt_buf[ 9]);
  w[10] = byte_swap_32 (salt->salt_buf[10]);
  w[11] = byte_swap_32 (salt->salt_buf[11]);
  w[12] = byte_swap_32 (salt->salt_buf[12]);
  w[13] = byte_swap_32 (salt->salt_buf[13]);
  w[14] = byte_swap_32 (salt->salt_buf[14]);
  w[15] = byte_swap_32 (salt->salt_buf[15]);

  u32 pc256[8] = { SHA256M_A, SHA256M_B, SHA256M_C, SHA256M_D, SHA256M_E, SHA256M_F, SHA256M_G, SHA256M_H };

  sha256_64 (w, pc256);

  salt->salt_buf_pc[0] = pc256[0];
  salt->salt_buf_pc[1] = pc256[1];
  salt->salt_buf_pc[2] = pc256[2];
  salt->salt_buf_pc[3] = pc256[3];
  salt->salt_buf_pc[4] = pc256[4];
  salt->salt_buf_pc[5] = pc256[5];
  salt->salt_buf_pc[6] = pc256[6];
  salt->salt_buf_pc[7] = pc256[7];

  digest[0] -= pc256[0];
  digest[1] -= pc256[1];
  digest[2] -= pc256[2];
  digest[3] -= pc256[3];
  digest[4] -= pc256[4];
  digest[5] -= pc256[5];
  digest[6] -= pc256[6];
  digest[7] -= pc256[7];

  return (PARSER_OK);
}

int mywallet_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 3;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_MYWALLET;

  token.len[0]     = 12;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.sep[1]     = '$';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 64;
  token.len_max[2] = 65536;
  token.sep[2]     = '$';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  /**
   * salt
   */

  const u8 *salt_pos = token.buf[2];

  salt->salt_buf[0] = hex_to_u32 (salt_pos +  0);
  salt->salt_buf[1] = hex_to_u32 (salt_pos +  8);
  salt->salt_buf[2] = hex_to_u32 (salt_pos + 16);
  salt->salt_buf[3] = hex_to_u32 (salt_pos + 24);

  salt->salt_buf[0] = byte_swap_32 (salt->salt_buf[0]);
  salt->salt_buf[1] = byte_swap_32 (salt->salt_buf[1]);
  salt->salt_buf[2] = byte_swap_32 (salt->salt_buf[2]);
  salt->salt_buf[3] = byte_swap_32 (salt->salt_buf[3]);

  // this is actually the CT, which is also the hash later (if matched)

  salt->salt_buf[4] = hex_to_u32 (salt_pos + 32);
  salt->salt_buf[5] = hex_to_u32 (salt_pos + 40);
  salt->salt_buf[6] = hex_to_u32 (salt_pos + 48);
  salt->salt_buf[7] = hex_to_u32 (salt_pos + 56);

  salt->salt_buf[4] = byte_swap_32 (salt->salt_buf[4]);
  salt->salt_buf[5] = byte_swap_32 (salt->salt_buf[5]);
  salt->salt_buf[6] = byte_swap_32 (salt->salt_buf[6]);
  salt->salt_buf[7] = byte_swap_32 (salt->salt_buf[7]);

  salt->salt_len = 32; // note we need to fix this to 16 in kernel

  salt->salt_iter = ROUNDS_MYWALLET - 1;

  /**
   * digest buf
   */

  digest[0] = salt->salt_buf[4];
  digest[1] = salt->salt_buf[5];
  digest[2] = salt->salt_buf[6];
  digest[3] = salt->salt_buf[7];

  return (PARSER_OK);
}

int mywalletv2_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_MYWALLETV2;

  token.len[0]     = 15;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '$';
  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = '$';
  token.len_min[2] = 1;
  token.len_max[2] = 5;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[3]     = '$';
  token.len_min[3] = 64;
  token.len_max[3] = 20000;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // iter

  const u8 *iter_pos = token.buf[1];

  u32 iter = hc_strtoul ((const char *) iter_pos, NULL, 10);

  salt->salt_iter = iter - 1;

  // salt

  const u8 *data_pos = token.buf[3];

  salt->salt_buf[0] = hex_to_u32 ((const u8 *) &data_pos[ 0]);
  salt->salt_buf[1] = hex_to_u32 ((const u8 *) &data_pos[ 8]);
  salt->salt_buf[2] = hex_to_u32 ((const u8 *) &data_pos[16]);
  salt->salt_buf[3] = hex_to_u32 ((const u8 *) &data_pos[24]);

  salt->salt_buf[0] = byte_swap_32 (salt->salt_buf[0]);
  salt->salt_buf[1] = byte_swap_32 (salt->salt_buf[1]);
  salt->salt_buf[2] = byte_swap_32 (salt->salt_buf[2]);
  salt->salt_buf[3] = byte_swap_32 (salt->salt_buf[3]);

  // this is actually the CT, which is also the hash later (if matched)

  salt->salt_buf[4] = hex_to_u32 ((const u8 *) &data_pos[32]);
  salt->salt_buf[5] = hex_to_u32 ((const u8 *) &data_pos[40]);
  salt->salt_buf[6] = hex_to_u32 ((const u8 *) &data_pos[48]);
  salt->salt_buf[7] = hex_to_u32 ((const u8 *) &data_pos[56]);

  salt->salt_buf[4] = byte_swap_32 (salt->salt_buf[4]);
  salt->salt_buf[5] = byte_swap_32 (salt->salt_buf[5]);
  salt->salt_buf[6] = byte_swap_32 (salt->salt_buf[6]);
  salt->salt_buf[7] = byte_swap_32 (salt->salt_buf[7]);

  salt->salt_len = 32; // note we need to fix this to 16 in kernel

  // hash

  digest[0] = salt->salt_buf[4];
  digest[1] = salt->salt_buf[5];
  digest[2] = salt->salt_buf[6];
  digest[3] = salt->salt_buf[7];

  return (PARSER_OK);
}

int ms_drsr_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_MS_DRSR;

  token.len_min[0] = 11;
  token.len_max[0] = 11;
  token.sep[0]     = ',';
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 20;
  token.len_max[1] = 20;
  token.sep[1]     = ',';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.len_min[2] = 1;
  token.len_max[2] = 6;
  token.sep[2]     = ',';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[3] = 64;
  token.len_max[3] = 64;
  token.sep[3]     = ',';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // salt

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  salt->salt_buf[0] = hex_to_u32 (salt_pos +  0);
  salt->salt_buf[1] = hex_to_u32 (salt_pos +  8);
  salt->salt_buf[2] = hex_to_u32 (salt_pos + 16) & 0x0000ffff;
  salt->salt_buf[3] = 0;

  salt->salt_len = salt_len / 2;

  // iter

  const u8 *iter_pos = token.buf[2];

  salt->salt_iter = hc_strtoul ((const char *) iter_pos, NULL, 10) - 1ul;

  // hash

  const u8 *hash_pos = token.buf[3];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);
  digest[5] = hex_to_u32 (hash_pos + 40);
  digest[6] = hex_to_u32 (hash_pos + 48);
  digest[7] = hex_to_u32 (hash_pos + 56);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  return (PARSER_OK);
}

int androidfde_samsung_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 3;

  token.len[0]  = 64;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  token.len[1]  = 64;
  token.attr[1] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  token.len[2]  = 32;
  token.attr[2] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  /**
   * salt
   */

  const u8 *salt1_pos = token.buf[2];
  const u8 *salt2_pos = token.buf[0];

  salt->salt_buf[ 0] = hex_to_u32 (salt1_pos +  0);
  salt->salt_buf[ 1] = hex_to_u32 (salt1_pos +  8);
  salt->salt_buf[ 2] = hex_to_u32 (salt1_pos + 16);
  salt->salt_buf[ 3] = hex_to_u32 (salt1_pos + 24);
  salt->salt_buf[ 4] = hex_to_u32 (salt2_pos +  0);
  salt->salt_buf[ 5] = hex_to_u32 (salt2_pos +  8);
  salt->salt_buf[ 6] = hex_to_u32 (salt2_pos + 16);
  salt->salt_buf[ 7] = hex_to_u32 (salt2_pos + 24);
  salt->salt_buf[ 8] = hex_to_u32 (salt2_pos + 32);
  salt->salt_buf[ 9] = hex_to_u32 (salt2_pos + 40);
  salt->salt_buf[10] = hex_to_u32 (salt2_pos + 48);
  salt->salt_buf[11] = hex_to_u32 (salt2_pos + 56);

  salt->salt_buf[ 0] = byte_swap_32 (salt->salt_buf[ 0]);
  salt->salt_buf[ 1] = byte_swap_32 (salt->salt_buf[ 1]);
  salt->salt_buf[ 2] = byte_swap_32 (salt->salt_buf[ 2]);
  salt->salt_buf[ 3] = byte_swap_32 (salt->salt_buf[ 3]);
  salt->salt_buf[ 4] = byte_swap_32 (salt->salt_buf[ 4]);
  salt->salt_buf[ 5] = byte_swap_32 (salt->salt_buf[ 5]);
  salt->salt_buf[ 6] = byte_swap_32 (salt->salt_buf[ 6]);
  salt->salt_buf[ 7] = byte_swap_32 (salt->salt_buf[ 7]);
  salt->salt_buf[ 8] = byte_swap_32 (salt->salt_buf[ 8]);
  salt->salt_buf[ 9] = byte_swap_32 (salt->salt_buf[ 9]);
  salt->salt_buf[10] = byte_swap_32 (salt->salt_buf[10]);
  salt->salt_buf[11] = byte_swap_32 (salt->salt_buf[11]);

  salt->salt_len = 48;

  salt->salt_iter = ROUNDS_ANDROIDFDE_SAMSUNG - 1;

  /**
   * digest buf
   */

  const u8 *hash_pos  = token.buf[1];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);
  digest[5] = hex_to_u32 (hash_pos + 40);
  digest[6] = hex_to_u32 (hash_pos + 48);
  digest[7] = hex_to_u32 (hash_pos + 56);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  return (PARSER_OK);
}

int zip2_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  zip2_t *zip2 = (zip2_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 10;

  token.signatures_cnt    = 2;
  token.signatures_buf[0] = SIGNATURE_ZIP2_START;
  token.signatures_buf[1] = SIGNATURE_ZIP2_STOP;

  token.len_min[0] = 6;
  token.len_max[0] = 6;
  token.sep[0]     = '*';
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 1;
  token.len_max[2] = 1;
  token.sep[2]     = '*';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[3] = 1;
  token.len_max[3] = 1;
  token.sep[3]     = '*';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[4] = 16;
  token.len_max[4] = 32;
  token.sep[4]     = '*';
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[5] = 1;
  token.len_max[5] = 6;
  token.sep[5]     = '*';
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[6] = 1;
  token.len_max[6] = 6;
  token.sep[6]     = '*';
  token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[7] = 0;
  token.len_max[7] = 16384;
  token.sep[7]     = '*';
  token.attr[7]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[8] = 20;
  token.len_max[8] = 20;
  token.sep[8]     = '*';
  token.attr[8]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[9] = 7;
  token.len_max[9] = 7;
  token.sep[9]     = '*';
  token.attr[9]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // type

  const u8 *type_pos = token.buf[1];

  const u32 type = hc_strtoul ((const char *) type_pos, NULL, 10);

  if (type != 0) return (PARSER_SALT_VALUE);

  zip2->type = type;

  // mode

  const u8 *mode_pos = token.buf[2];

  const u32 mode = hc_strtoul ((const char *) mode_pos, NULL, 10);

  zip2->mode = mode;

  // magic

  const u8 *magic_pos = token.buf[3];

  const u32 magic = hc_strtoul ((const char *) magic_pos, NULL, 10);

  if (magic != 0) return (PARSER_SALT_VALUE);

  zip2->magic = magic;

  // verify_bytes

  const u8 *verify_bytes_pos = token.buf[5];

  u32 verify_bytes;

  if (sscanf ((const char *) verify_bytes_pos, "%4x*", &verify_bytes) == EOF)
  {
    return (PARSER_SALT_VALUE);
  }

  if (verify_bytes >= 0x10000) return (PARSER_SALT_VALUE);

  zip2->verify_bytes = verify_bytes;

  // compress_length

  const u8 *compress_length_pos = token.buf[6];

  const u32 compress_length = hc_strtoul ((const char *) compress_length_pos, NULL, 10);

  zip2->compress_length = compress_length;

  // salt

  const u8 *salt_pos = token.buf[4];
  const int salt_len = token.len[4];

  if (mode == 1)
  {
    if (salt_len != 16) return (PARSER_SALT_VALUE);

    zip2->salt_buf[0] = hex_to_u32 ((const u8 *) &salt_pos[ 0]);
    zip2->salt_buf[1] = hex_to_u32 ((const u8 *) &salt_pos[ 8]);
    zip2->salt_buf[2] = 0;
    zip2->salt_buf[3] = 0;

    zip2->salt_len = 8;
  }
  else if (mode == 2)
  {
    if (salt_len != 24) return (PARSER_SALT_VALUE);

    zip2->salt_buf[0] = hex_to_u32 ((const u8 *) &salt_pos[ 0]);
    zip2->salt_buf[1] = hex_to_u32 ((const u8 *) &salt_pos[ 8]);
    zip2->salt_buf[2] = hex_to_u32 ((const u8 *) &salt_pos[16]);
    zip2->salt_buf[3] = 0;

    zip2->salt_len = 12;
  }
  else if (mode == 3)
  {
    if (salt_len != 32) return (PARSER_SALT_VALUE);

    zip2->salt_buf[0] = hex_to_u32 ((const u8 *) &salt_pos[ 0]);
    zip2->salt_buf[1] = hex_to_u32 ((const u8 *) &salt_pos[ 8]);
    zip2->salt_buf[2] = hex_to_u32 ((const u8 *) &salt_pos[16]);
    zip2->salt_buf[3] = hex_to_u32 ((const u8 *) &salt_pos[24]);

    zip2->salt_len = 16;
  }
  else
  {
    return (PARSER_SALT_VALUE);
  }

  // data

  const u8 *data_buf = token.buf[7];
  const int data_len = token.len[7];

  u8 *data_buf_ptr = (u8 *) zip2->data_buf;

  for (int i = 0; i < data_len; i += 2)
  {
    const u8 p0 = data_buf[i + 0];
    const u8 p1 = data_buf[i + 1];

    *data_buf_ptr++ = hex_convert (p1) << 0
                    | hex_convert (p0) << 4;

    zip2->data_len++;
  }

  *data_buf_ptr = 0x80;

  // auth

  const u8 *auth_buf = token.buf[8];
  const int auth_len = token.len[8];

  u8 *auth_ptr = (u8 *) zip2->auth_buf;

  for (int i = 0; i < auth_len; i += 2)
  {
    const u8 p0 = auth_buf[i + 0];
    const u8 p1 = auth_buf[i + 1];

    *auth_ptr++ = hex_convert (p1) << 0
                | hex_convert (p0) << 4;

    zip2->auth_len++;
  }

  /**
   * salt buf (fake)
   */

  salt->salt_buf[0] = zip2->salt_buf[0];
  salt->salt_buf[1] = zip2->salt_buf[1];
  salt->salt_buf[2] = zip2->salt_buf[2];
  salt->salt_buf[3] = zip2->salt_buf[3];
  salt->salt_buf[4] = zip2->data_buf[0];
  salt->salt_buf[5] = zip2->data_buf[1];
  salt->salt_buf[6] = zip2->data_buf[2];
  salt->salt_buf[7] = zip2->data_buf[3];

  salt->salt_len = 32;

  salt->salt_iter = ROUNDS_ZIP2 - 1;

  /**
   * digest buf (fake)
   */

  digest[0] = zip2->auth_buf[0];
  digest[1] = zip2->auth_buf[1];
  digest[2] = zip2->auth_buf[2];
  digest[3] = zip2->auth_buf[3];

  return (PARSER_OK);
}

int win8phone_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  win8phone_t *esalt = (win8phone_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 2;

  token.len_min[0] = 64;
  token.len_max[0] = 64;
  token.sep[0]     = hashconfig->separator;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 256;
  token.len_max[1] = 256;
  token.sep[1]     = hashconfig->separator;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // hash

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);
  digest[5] = hex_to_u32 (hash_pos + 40);
  digest[6] = hex_to_u32 (hash_pos + 48);
  digest[7] = hex_to_u32 (hash_pos + 56);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  // salt

  const u8 *salt_pos = token.buf[1];

  u32 *salt_buf = esalt->salt_buf;

  for (int i = 0, j = 0; i < 32; i += 1, j += 8)
  {
    salt_buf[i] = hex_to_u32 (salt_pos + j);

    salt_buf[i] = byte_swap_32 (salt_buf[i]);
  }

  salt->salt_buf[0] = salt_buf[0];
  salt->salt_buf[1] = salt_buf[1];
  salt->salt_buf[2] = salt_buf[2];
  salt->salt_buf[3] = salt_buf[3];
  salt->salt_buf[4] = salt_buf[4];
  salt->salt_buf[5] = salt_buf[5];
  salt->salt_buf[6] = salt_buf[6];
  salt->salt_buf[7] = salt_buf[7];

  salt->salt_len = 32;

  return (PARSER_OK);
}

int plaintext_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt  = 1;

  token.len_min[0] = 1;
  token.len_max[0] = 55;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  memset (digest, 0, hashconfig->dgst_size);

  const u8 *pw_buf = token.buf[0];
  const int pw_len = token.len[0];

  memcpy ((char *) digest + 64, pw_buf, pw_len);

  //strncpy ((char *) digest + 64, (char *) input_buf, 64);

  u32 w[16] = { 0 };

  //strncpy ((char *) w, (char *) input_buf, 64);

  memcpy (w, pw_buf, pw_len);

  u8 *w_ptr = (u8 *) w;

  w_ptr[input_len] = 0x80;

  w[14] = input_len * 8;

  u32 dgst[4];

  dgst[0] = MD4M_A;
  dgst[1] = MD4M_B;
  dgst[2] = MD4M_C;
  dgst[3] = MD4M_D;

  md4_64 (w, dgst);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    dgst[0] -= MD4M_A;
    dgst[1] -= MD4M_B;
    dgst[2] -= MD4M_C;
    dgst[3] -= MD4M_D;
  }

  digest[0] = dgst[0];
  digest[1] = dgst[1];
  digest[2] = dgst[2];
  digest[3] = dgst[3];

  return (PARSER_OK);
}

int sha1cx_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 40;
  token.len_max[0] = 40;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 20;
  token.len_max[1] = 20;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 (hash_pos +  0);
  digest[1] = hex_to_u32 (hash_pos +  8);
  digest[2] = hex_to_u32 (hash_pos + 16);
  digest[3] = hex_to_u32 (hash_pos + 24);
  digest[4] = hex_to_u32 (hash_pos + 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}


int itunes_backup_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 hash_mode = hashconfig->hash_mode;

  salt_t *salt = hash_buf->salt;

  itunes_backup_t *itunes_backup = (itunes_backup_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt = 7;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_ITUNES_BACKUP;

  token.len_min[0] = 15;
  token.len_max[0] = 15;
  token.sep[0]     = '*';
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 1;
  token.len_max[1] = 2;
  token.sep[1]     = '*';
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[2] = 80;
  token.len_max[2] = 80;
  token.sep[2]     = '*';
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[3] = 1;
  token.len_max[3] = 6;
  token.sep[3]     = '*';
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[4] = 40;
  token.len_max[4] = 40;
  token.sep[4]     = '*';
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[5] = 0;
  token.len_max[5] = 10;
  token.sep[5]     = '*';
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.len_min[6] = 0;
  token.len_max[6] = 40;
  token.sep[6]     = '*';
  token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // version

  const u8 *version_pos = token.buf[1];

  u32 version = hc_strtoul ((const char *) version_pos, NULL, 10);

  if (hash_mode == 14700)
  {
    if (version != 9) return (PARSER_SEPARATOR_UNMATCHED);
  }
  else if (hash_mode == 14800)
  {
    if (version != 10) return (PARSER_SEPARATOR_UNMATCHED);
  }

  salt->salt_sign[0] = (char) version;

  // wpky

  const u8 *wpky_pos = token.buf[2];

  u32 *wpky_buf_ptr = (u32 *) itunes_backup->wpky;

  wpky_buf_ptr[0] = hex_to_u32 ((const u8 *) &wpky_pos[ 0]);
  wpky_buf_ptr[1] = hex_to_u32 ((const u8 *) &wpky_pos[ 8]);
  wpky_buf_ptr[2] = hex_to_u32 ((const u8 *) &wpky_pos[16]);
  wpky_buf_ptr[3] = hex_to_u32 ((const u8 *) &wpky_pos[24]);
  wpky_buf_ptr[4] = hex_to_u32 ((const u8 *) &wpky_pos[32]);
  wpky_buf_ptr[5] = hex_to_u32 ((const u8 *) &wpky_pos[40]);
  wpky_buf_ptr[6] = hex_to_u32 ((const u8 *) &wpky_pos[48]);
  wpky_buf_ptr[7] = hex_to_u32 ((const u8 *) &wpky_pos[56]);
  wpky_buf_ptr[8] = hex_to_u32 ((const u8 *) &wpky_pos[64]);
  wpky_buf_ptr[9] = hex_to_u32 ((const u8 *) &wpky_pos[72]);

  wpky_buf_ptr[0] = byte_swap_32 (wpky_buf_ptr[0]);
  wpky_buf_ptr[1] = byte_swap_32 (wpky_buf_ptr[1]);
  wpky_buf_ptr[2] = byte_swap_32 (wpky_buf_ptr[2]);
  wpky_buf_ptr[3] = byte_swap_32 (wpky_buf_ptr[3]);
  wpky_buf_ptr[4] = byte_swap_32 (wpky_buf_ptr[4]);
  wpky_buf_ptr[5] = byte_swap_32 (wpky_buf_ptr[5]);
  wpky_buf_ptr[6] = byte_swap_32 (wpky_buf_ptr[6]);
  wpky_buf_ptr[7] = byte_swap_32 (wpky_buf_ptr[7]);
  wpky_buf_ptr[8] = byte_swap_32 (wpky_buf_ptr[8]);
  wpky_buf_ptr[9] = byte_swap_32 (wpky_buf_ptr[9]);

  // iter

  const u8 *iter_pos = token.buf[3];

  u32 iter = hc_strtoul ((const char *) iter_pos, NULL, 10);

  if (iter < 1) return (PARSER_SALT_ITERATION);

  if (hash_mode == 14700)
  {
    salt->salt_iter  = iter - 1;
  }
  else if (hash_mode == 14800)
  {
    salt->salt_iter  = 0; // set later
    salt->salt_iter2 = iter - 1;
  }

  // salt

  const u8 *salt_pos = token.buf[4];
  const int salt_len = token.len[4];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  // dpic + dpsl

  const u8 *dpic_pos = token.buf[5];
  const int dpic_len = token.len[5];

  const u8 *dpsl_pos = token.buf[6];
  const int dpsl_len = token.len[6];

  u32 dpic = 0;

  if (hash_mode == 14700)
  {
    if (dpic_len > 0) return (PARSER_SEPARATOR_UNMATCHED);
    if (dpsl_len > 0) return (PARSER_SEPARATOR_UNMATCHED);
  }
  else if (hash_mode == 14800)
  {
    if (dpic_len < 1) return (PARSER_SALT_ITERATION);
    if (dpic_len > 9) return (PARSER_SALT_ITERATION);

    dpic = hc_strtoul ((const char *) dpic_pos, NULL, 10);

    if (dpic < 1) return (PARSER_SALT_ITERATION);

    salt->salt_iter = dpic - 1;

    if (dpsl_len != 40) return (PARSER_SEPARATOR_UNMATCHED);

    u32 *dpsl_buf_ptr = (u32 *) itunes_backup->dpsl;

    dpsl_buf_ptr[0] = hex_to_u32 ((const u8 *) &dpsl_pos[ 0]);
    dpsl_buf_ptr[1] = hex_to_u32 ((const u8 *) &dpsl_pos[ 8]);
    dpsl_buf_ptr[2] = hex_to_u32 ((const u8 *) &dpsl_pos[16]);
    dpsl_buf_ptr[3] = hex_to_u32 ((const u8 *) &dpsl_pos[24]);
    dpsl_buf_ptr[4] = hex_to_u32 ((const u8 *) &dpsl_pos[32]);

    dpsl_buf_ptr[0] = byte_swap_32 (dpsl_buf_ptr[ 0]);
    dpsl_buf_ptr[1] = byte_swap_32 (dpsl_buf_ptr[ 1]);
    dpsl_buf_ptr[2] = byte_swap_32 (dpsl_buf_ptr[ 2]);
    dpsl_buf_ptr[3] = byte_swap_32 (dpsl_buf_ptr[ 3]);
    dpsl_buf_ptr[4] = byte_swap_32 (dpsl_buf_ptr[ 4]);
  }

  return (PARSER_OK);
}

int skip32_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt = 2;

  token.len_min[0] = 8;
  token.len_max[0] = 8;
  token.sep[0]     = hashconfig->separator;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 8;
  token.len_max[1] = 8;
  token.sep[1]     = hashconfig->separator;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // digest

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u32 ((const u8 *) &hash_pos[0]);
  digest[1] = 0;
  digest[2] = 0;
  digest[3] = 0;

  // salt

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  salt->salt_buf[0] = hex_to_u32 ((const u8 *) &salt_pos[0]);

  salt->salt_len = salt_len / 2; // 4

  return (PARSER_OK);
}

int fortigate_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_FORTIGATE;

  token.len[0]  = 3;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len[1]  = 44;
  token.attr[1] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_BASE64A;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  /**
   * verify data
   */

  const u8 *hash_pos = token.buf[1];
  const int hash_len = token.len[1];

  // decode salt + SHA1 hash (12 + 20 = 32)

  u8 tmp_buf[100] = { 0 };

  const int decoded_len = base64_decode (base64_to_int, hash_pos, hash_len, tmp_buf);

  if (decoded_len != 32) return (PARSER_HASH_LENGTH);

  /**
   * store data
   */

  // salt

  u32 salt_len = 12;

  memcpy (salt->salt_buf, tmp_buf, salt_len);

  salt->salt_len = salt_len;

  // digest

  memcpy (digest, tmp_buf + salt_len, 20);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA1M_A;
    digest[1] -= SHA1M_B;
    digest[2] -= SHA1M_C;
    digest[3] -= SHA1M_D;
    digest[4] -= SHA1M_E;
  }

  return (PARSER_OK);
}

int sha256b64s_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_SHA256B64S;

  token.len[0]     = 9;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 44;
  token.len_max[1] = 385; // 385 = 32 + 256 where 32 is digest length and 256 is SALT_MAX
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hashsalt_pos = token.buf[1];
  const int hashsalt_len = token.len[1];

  u8 tmp_buf[512] = { 0 };

  const int tmp_len = base64_decode (base64_to_int, hashsalt_pos, hashsalt_len, tmp_buf);

  if (tmp_len < 32) return (PARSER_HASH_LENGTH);

  u8 *hash_pos = tmp_buf;

  memcpy (digest, hash_pos, 32);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA256M_A;
    digest[1] -= SHA256M_B;
    digest[2] -= SHA256M_C;
    digest[3] -= SHA256M_D;
    digest[4] -= SHA256M_E;
    digest[5] -= SHA256M_F;
    digest[6] -= SHA256M_G;
    digest[7] -= SHA256M_H;
  }

  // salt

  u8 *salt_pos = tmp_buf + 32;
  int salt_len = tmp_len - 32;

  salt->salt_len = salt_len;

  memcpy (salt->salt_buf, salt_pos, salt_len);

  if (hashconfig->opts_type & OPTS_TYPE_ST_ADD80)
  {
    u8 *ptr = (u8 *) salt->salt_buf;

    ptr[salt_len] = 0x80;
  }

  return (PARSER_OK);
}

int filezilla_server_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u64 *digest = (u64 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 2;

  token.sep[0]     = hashconfig->separator;
  token.len_min[0] = 128;
  token.len_max[0] = 128;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.len_min[1] = 64;
  token.len_max[1] = 64;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  digest[0] = hex_to_u64 (hash_pos +   0);
  digest[1] = hex_to_u64 (hash_pos +  16);
  digest[2] = hex_to_u64 (hash_pos +  32);
  digest[3] = hex_to_u64 (hash_pos +  48);
  digest[4] = hex_to_u64 (hash_pos +  64);
  digest[5] = hex_to_u64 (hash_pos +  80);
  digest[6] = hex_to_u64 (hash_pos +  96);
  digest[7] = hex_to_u64 (hash_pos + 112);

  digest[0] = byte_swap_64 (digest[0]);
  digest[1] = byte_swap_64 (digest[1]);
  digest[2] = byte_swap_64 (digest[2]);
  digest[3] = byte_swap_64 (digest[3]);
  digest[4] = byte_swap_64 (digest[4]);
  digest[5] = byte_swap_64 (digest[5]);
  digest[6] = byte_swap_64 (digest[6]);
  digest[7] = byte_swap_64 (digest[7]);

  if (hashconfig->opti_type & OPTI_TYPE_PRECOMPUTE_MERKLE)
  {
    digest[0] -= SHA512M_A;
    digest[1] -= SHA512M_B;
    digest[2] -= SHA512M_C;
    digest[3] -= SHA512M_D;
    digest[4] -= SHA512M_E;
    digest[5] -= SHA512M_F;
    digest[6] -= SHA512M_G;
    digest[7] -= SHA512M_H;
  }

  const u8 *salt_pos = token.buf[1];
  const int salt_len = token.len[1];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  return (PARSER_OK);
}

int netbsd_sha1crypt_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_NETBSD_SHA1CRYPT;

  token.len[0]     = 6;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '$';
  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = '$';
  token.len_min[2] = 8;
  token.len_max[2] = 8;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH;

  token.sep[3]     = '$';
  token.len_min[3] = 28;
  token.len_max[3] = 28;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64B;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // iter

  const u8 *iter_pos = token.buf[1];

  u32 iter = hc_strtoul ((const char *) iter_pos, NULL, 10);

  if (iter < 99) return (PARSER_SALT_ITERATION); // (actually: CRYPT_SHA1_ITERATIONS should be 24680 or more)

  salt->salt_iter = iter - 1;

  // salt

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2];

  memcpy ((u8 *) salt->salt_buf, salt_pos, salt_len);

  salt->salt_len = salt_len;

  // hash

  const u8 *hash_pos = token.buf[3];

  netbsd_sha1crypt_decode ((u8 *) digest, hash_pos, (u8 *) salt->salt_sign);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);

  // precompute salt

  char *ptr = (char *) salt->salt_buf_pc;

  const int salt_len_pc = snprintf (ptr, 64, "%s$sha1$%u", (char *) salt->salt_buf, iter);

  ptr[salt_len_pc] = 0x80;

  salt->salt_len_pc = salt_len_pc;

  return (PARSER_OK);
}

int atlassian_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  pbkdf2_sha1_t *pbkdf2_sha1 = (pbkdf2_sha1_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 2;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_ATLASSIAN;

  token.len[0]     = 9;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.len_min[1] = 64;
  token.len_max[1] = 64;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64A;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hashsalt_pos = token.buf[1];
  const int hashsalt_len = token.len[1];

  u8 tmp_buf[100] = { 0 };

  const int base64_decode_len = base64_decode (base64_to_int, hashsalt_pos, hashsalt_len, tmp_buf);

  if (base64_decode_len != (16 + 32)) return (PARSER_HASH_LENGTH);

  u8 *hash_pos = tmp_buf + 16;

  memcpy (digest, hash_pos, 16);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);

  // store salt

  u8 *salt_pos = tmp_buf;
  int salt_len = 16;

  u8 *salt_buf_ptr = (u8 *) pbkdf2_sha1->salt_buf;

  memcpy (salt_buf_ptr, salt_pos, salt_len);

  salt->salt_len  = salt_len;
  salt->salt_iter = ROUNDS_ATLASSIAN - 1;

  // add some stuff to normal salt to make sorted happy

  salt->salt_buf[0] = pbkdf2_sha1->salt_buf[0];
  salt->salt_buf[1] = pbkdf2_sha1->salt_buf[1];
  salt->salt_buf[2] = pbkdf2_sha1->salt_buf[2];
  salt->salt_buf[3] = pbkdf2_sha1->salt_buf[3];
  salt->salt_buf[4] = salt->salt_iter;

  return (PARSER_OK);
}

int jks_sha1_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  jks_sha1_t *jks_sha1 = (jks_sha1_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 7;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_JKS_SHA1;

  token.sep[0]     = '*';
  token.len_min[0] = 10;
  token.len_max[0] = 10;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '*';
  token.len_min[1] = 40;
  token.len_max[1] = 40;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[2]     = '*';
  token.len_min[2] = 40;
  token.len_max[2] = 40;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[3]     = '*';
  token.len_min[3] = 2;
  token.len_max[3] = 16384;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[4]     = '*';
  token.len_min[4] = 2;
  token.len_max[4] = 2;
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[5]     = '*';
  token.len_min[5] = 28;
  token.len_max[5] = 28;
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[6]     = '*';
  token.len_min[6] = 0;
  token.len_max[6] = 64;
  token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // checksum

  const u8 *checksum_pos = token.buf[1];

  jks_sha1->checksum[0] = hex_to_u32 ((const u8 *) &checksum_pos[ 0]);
  jks_sha1->checksum[1] = hex_to_u32 ((const u8 *) &checksum_pos[ 8]);
  jks_sha1->checksum[2] = hex_to_u32 ((const u8 *) &checksum_pos[16]);
  jks_sha1->checksum[3] = hex_to_u32 ((const u8 *) &checksum_pos[24]);
  jks_sha1->checksum[4] = hex_to_u32 ((const u8 *) &checksum_pos[32]);

  // iv

  const u8 *iv_pos = token.buf[2];

  jks_sha1->iv[0] = hex_to_u32 ((const u8 *) &iv_pos[ 0]);
  jks_sha1->iv[1] = hex_to_u32 ((const u8 *) &iv_pos[ 8]);
  jks_sha1->iv[2] = hex_to_u32 ((const u8 *) &iv_pos[16]);
  jks_sha1->iv[3] = hex_to_u32 ((const u8 *) &iv_pos[24]);
  jks_sha1->iv[4] = hex_to_u32 ((const u8 *) &iv_pos[32]);

  // enc_key

  const u8 *enc_key_pos = token.buf[3];
  const int enc_key_len = token.len[3];

  u8 *enc_key_buf = (u8 *) jks_sha1->enc_key_buf;

  for (int i = 0, j = 0; j < enc_key_len; i += 1, j += 2)
  {
    enc_key_buf[i] = hex_to_u8 ((const u8 *) &enc_key_pos[j]);

    jks_sha1->enc_key_len++;
  }

  // der1

  const u8 *der1_pos = token.buf[4];

  u8 *der = (u8 *) jks_sha1->der;

  der[0] = hex_to_u8 ((const u8 *) &der1_pos[0]);

  // der2

  const u8 *der2_pos = token.buf[5];

  for (int i = 6, j = 0; j < 28; i += 1, j += 2)
  {
    der[i] = hex_to_u8 ((const u8 *) &der2_pos[j]);
  }

  der[1] = 0;
  der[2] = 0;
  der[3] = 0;
  der[4] = 0;
  der[5] = 0;

  // alias

  const u8 *alias_pos = token.buf[6];

  strncpy ((char *) jks_sha1->alias, (const char *) alias_pos, 64);

  // fake salt

  salt->salt_buf[0] = jks_sha1->iv[0];
  salt->salt_buf[1] = jks_sha1->iv[1];
  salt->salt_buf[2] = jks_sha1->iv[2];
  salt->salt_buf[3] = jks_sha1->iv[3];
  salt->salt_buf[4] = jks_sha1->iv[4];

  salt->salt_len = 20;

  // fake digest

  digest[0] = byte_swap_32 (jks_sha1->der[0]);
  digest[1] = byte_swap_32 (jks_sha1->der[1]);
  digest[2] = byte_swap_32 (jks_sha1->der[2]);
  digest[3] = byte_swap_32 (jks_sha1->der[3]);
  digest[4] = byte_swap_32 (jks_sha1->der[4]);

  return (PARSER_OK);
}

int ethereum_pbkdf2_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  ethereum_pbkdf2_t *ethereum_pbkdf2 = (ethereum_pbkdf2_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 5;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_ETHEREUM_PBKDF2;

  token.sep[0]     = '*';
  token.len_min[0] = 11;
  token.len_max[0] = 11;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '*';
  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = '*';
  token.len_min[2] = 32;
  token.len_max[2] = 64;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[3]     = '*';
  token.len_min[3] = 64;
  token.len_max[3] = 64;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[4]     = '*';
  token.len_min[4] = 64;
  token.len_max[4] = 64;
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // iter

  const u8 *iter_pos = token.buf[1];

  const u32 iter = hc_strtoul ((const char *) iter_pos, NULL, 10);

  if (iter < 1) return (PARSER_SALT_ITERATION);

  salt->salt_iter = iter - 1;

  // salt

  const u8 *salt_pos = token.buf[2];
  const int salt_len = token.len[2];

  if ((salt_len != 32) && (salt_len != 64)) return (PARSER_SALT_LENGTH);

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  ethereum_pbkdf2->salt_buf[0] = salt->salt_buf[0];
  ethereum_pbkdf2->salt_buf[1] = salt->salt_buf[1];
  ethereum_pbkdf2->salt_buf[2] = salt->salt_buf[2];
  ethereum_pbkdf2->salt_buf[3] = salt->salt_buf[3];
  ethereum_pbkdf2->salt_buf[4] = salt->salt_buf[4];
  ethereum_pbkdf2->salt_buf[5] = salt->salt_buf[5];
  ethereum_pbkdf2->salt_buf[6] = salt->salt_buf[6];
  ethereum_pbkdf2->salt_buf[7] = salt->salt_buf[7];

  // ciphertext

  const u8 *ciphertext_pos = token.buf[3];

  ethereum_pbkdf2->ciphertext[0] = hex_to_u32 ((const u8 *) &ciphertext_pos[ 0]);
  ethereum_pbkdf2->ciphertext[1] = hex_to_u32 ((const u8 *) &ciphertext_pos[ 8]);
  ethereum_pbkdf2->ciphertext[2] = hex_to_u32 ((const u8 *) &ciphertext_pos[16]);
  ethereum_pbkdf2->ciphertext[3] = hex_to_u32 ((const u8 *) &ciphertext_pos[24]);
  ethereum_pbkdf2->ciphertext[4] = hex_to_u32 ((const u8 *) &ciphertext_pos[32]);
  ethereum_pbkdf2->ciphertext[5] = hex_to_u32 ((const u8 *) &ciphertext_pos[40]);
  ethereum_pbkdf2->ciphertext[6] = hex_to_u32 ((const u8 *) &ciphertext_pos[48]);
  ethereum_pbkdf2->ciphertext[7] = hex_to_u32 ((const u8 *) &ciphertext_pos[56]);

  // hash

  const u8 *hash_pos = token.buf[4];

  digest[0] = hex_to_u32 ((const u8 *) &hash_pos[ 0]);
  digest[1] = hex_to_u32 ((const u8 *) &hash_pos[ 8]);
  digest[2] = hex_to_u32 ((const u8 *) &hash_pos[16]);
  digest[3] = hex_to_u32 ((const u8 *) &hash_pos[24]);
  digest[4] = hex_to_u32 ((const u8 *) &hash_pos[32]);
  digest[5] = hex_to_u32 ((const u8 *) &hash_pos[40]);
  digest[6] = hex_to_u32 ((const u8 *) &hash_pos[48]);
  digest[7] = hex_to_u32 ((const u8 *) &hash_pos[56]);

  return (PARSER_OK);
}

int ethereum_scrypt_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  ethereum_scrypt_t *ethereum_scrypt = (ethereum_scrypt_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 7;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_ETHEREUM_SCRYPT;

  token.sep[0]     = '*';
  token.len_min[0] = 11;
  token.len_max[0] = 11;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '*';
  token.len_min[1] = 1;
  token.len_max[1] = 6;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = '*';
  token.len_min[2] = 1;
  token.len_max[2] = 6;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[3]     = '*';
  token.len_min[3] = 1;
  token.len_max[3] = 6;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[4]     = '*';
  token.len_min[4] = 64;
  token.len_max[4] = 64;
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[5]     = '*';
  token.len_min[5] = 64;
  token.len_max[5] = 64;
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[6]     = '*';
  token.len_min[6] = 64;
  token.len_max[6] = 64;
  token.attr[6]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // scrypt settings

  const u8 *scryptN_pos = token.buf[1];
  const u8 *scryptr_pos = token.buf[2];
  const u8 *scryptp_pos = token.buf[3];

  const u32 scrypt_N = hc_strtoul ((const char *) scryptN_pos, NULL, 10);
  const u32 scrypt_r = hc_strtoul ((const char *) scryptr_pos, NULL, 10);
  const u32 scrypt_p = hc_strtoul ((const char *) scryptp_pos, NULL, 10);

  salt->scrypt_N = scrypt_N;
  salt->scrypt_r = scrypt_r;
  salt->scrypt_p = scrypt_p;

  // salt

  const u8 *salt_pos = token.buf[4];
  const int salt_len = token.len[4];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, salt_pos, salt_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  ethereum_scrypt->salt_buf[0] = salt->salt_buf[0];
  ethereum_scrypt->salt_buf[1] = salt->salt_buf[1];
  ethereum_scrypt->salt_buf[2] = salt->salt_buf[2];
  ethereum_scrypt->salt_buf[3] = salt->salt_buf[3];
  ethereum_scrypt->salt_buf[4] = salt->salt_buf[4];
  ethereum_scrypt->salt_buf[5] = salt->salt_buf[5];
  ethereum_scrypt->salt_buf[6] = salt->salt_buf[6];
  ethereum_scrypt->salt_buf[7] = salt->salt_buf[7];

  salt->salt_iter = 1;

  // ciphertext

  const u8 *ciphertext_pos = token.buf[5];

  ethereum_scrypt->ciphertext[0] = hex_to_u32 ((const u8 *) &ciphertext_pos[ 0]);
  ethereum_scrypt->ciphertext[1] = hex_to_u32 ((const u8 *) &ciphertext_pos[ 8]);
  ethereum_scrypt->ciphertext[2] = hex_to_u32 ((const u8 *) &ciphertext_pos[16]);
  ethereum_scrypt->ciphertext[3] = hex_to_u32 ((const u8 *) &ciphertext_pos[24]);
  ethereum_scrypt->ciphertext[4] = hex_to_u32 ((const u8 *) &ciphertext_pos[32]);
  ethereum_scrypt->ciphertext[5] = hex_to_u32 ((const u8 *) &ciphertext_pos[40]);
  ethereum_scrypt->ciphertext[6] = hex_to_u32 ((const u8 *) &ciphertext_pos[48]);
  ethereum_scrypt->ciphertext[7] = hex_to_u32 ((const u8 *) &ciphertext_pos[56]);

  // hash

  const u8 *hash_pos = token.buf[6];

  digest[0] = hex_to_u32 ((const u8 *) &hash_pos[ 0]);
  digest[1] = hex_to_u32 ((const u8 *) &hash_pos[ 8]);
  digest[2] = hex_to_u32 ((const u8 *) &hash_pos[16]);
  digest[3] = hex_to_u32 ((const u8 *) &hash_pos[24]);
  digest[4] = hex_to_u32 ((const u8 *) &hash_pos[32]);
  digest[5] = hex_to_u32 ((const u8 *) &hash_pos[40]);
  digest[6] = hex_to_u32 ((const u8 *) &hash_pos[48]);
  digest[7] = hex_to_u32 ((const u8 *) &hash_pos[56]);

  return (PARSER_OK);
}

int tripcode_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  token_t token;

  token.token_cnt = 1;

  token.len[0]  = 10;
  token.attr[0] = TOKEN_ATTR_FIXED_LENGTH
                | TOKEN_ATTR_VERIFY_BASE64B;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  const u8 *hash_pos = token.buf[0];

  unsigned char c9 = itoa64_to_int (hash_pos[9]);

  if (c9 & 3) return (PARSER_HASH_VALUE);

  u8 add_leading_zero[12];

  add_leading_zero[0] = '.';

  memcpy (add_leading_zero + 1, input_buf, 10);

  u8 tmp_buf[100] = { 0 };

  base64_decode (itoa64_to_int, (const u8 *) add_leading_zero, 11, tmp_buf);

  memcpy (digest, tmp_buf, 8);

  u32 tt;

  IP (digest[0], digest[1], tt);

  digest[2] = 0;
  digest[3] = 0;

  return (PARSER_OK);
}

int tacacs_plus_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  tacacs_plus_t *tacacs_plus = (tacacs_plus_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_TACACS_PLUS;

  token.len[0]     = 15;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '$';
  token.len_min[1] = 8;
  token.len_max[1] = 8;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[2]     = '$';
  token.len_min[2] = 12;
  token.len_max[2] = 256;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[3]     = '$';
  token.len_min[3] = 4;
  token.len_max[3] = 4;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // session

  const u8 *session_pos = token.buf[1];

  u8 *session_ptr = (u8 *) tacacs_plus->session_buf;

  session_ptr[0] = hex_to_u8 ((const u8 *) session_pos + 0);
  session_ptr[1] = hex_to_u8 ((const u8 *) session_pos + 2);
  session_ptr[2] = hex_to_u8 ((const u8 *) session_pos + 4);
  session_ptr[3] = hex_to_u8 ((const u8 *) session_pos + 6);

  // ct_buf

  const u8 *ct_buf_pos = token.buf[2];
  const int ct_buf_len = token.len[2];

  u8 *ct_data_ptr = (u8 *) tacacs_plus->ct_data_buf;

  for (int i = 0, j = 0; j < ct_buf_len; i += 1, j += 2)
  {
    ct_data_ptr[i] = hex_to_u8 ((const u8 *) &ct_buf_pos[j]);

    tacacs_plus->ct_data_len++;
  }

  // sequence

  const u8 *sequence_pos = token.buf[3];

  u8 *sequence_ptr = (u8 *) tacacs_plus->sequence_buf;

  sequence_ptr[0] = hex_to_u8 ((const u8 *) sequence_pos + 0);
  sequence_ptr[1] = hex_to_u8 ((const u8 *) sequence_pos + 2);

  // fake salt

  salt->salt_buf[0] = tacacs_plus->session_buf[0];
  salt->salt_buf[1] = tacacs_plus->sequence_buf[0];
  salt->salt_buf[2] = tacacs_plus->ct_data_buf[0];
  salt->salt_buf[3] = tacacs_plus->ct_data_buf[1];

  salt->salt_len = 16;

  // fake hash

  digest[0] = tacacs_plus->ct_data_buf[2];
  digest[1] = tacacs_plus->ct_data_buf[3];
  digest[2] = tacacs_plus->ct_data_buf[4];
  digest[3] = tacacs_plus->ct_data_buf[5];

  return (PARSER_OK);
}

int apple_secure_notes_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  apple_secure_notes_t *apple_secure_notes = (apple_secure_notes_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 5;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_APPLE_SECURE_NOTES;

  token.sep[0]     = '*';
  token.len_min[0] = 5;
  token.len_max[0] = 5;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '*';
  token.len_min[1] = 1;
  token.len_max[1] = 10;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = '*';
  token.len_min[2] = 1;
  token.len_max[2] = 6;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[3]     = '*';
  token.len_min[3] = 32;
  token.len_max[3] = 32;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[4]     = '*';
  token.len_min[4] = 48;
  token.len_max[4] = 48;
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  /**
   * parse line
   */

  // Z_PK

  const u8 *Z_PK_pos = token.buf[1];

  const u32 Z_PK = hc_strtoul ((const char *) Z_PK_pos, NULL, 10);

  apple_secure_notes->Z_PK = Z_PK;

  // ZCRYPTOITERATIONCOUNT

  const u8 *ZCRYPTOITERATIONCOUNT_pos = token.buf[2];

  const u32 ZCRYPTOITERATIONCOUNT = hc_strtoul ((const char *) ZCRYPTOITERATIONCOUNT_pos, NULL, 10);

  apple_secure_notes->ZCRYPTOITERATIONCOUNT = ZCRYPTOITERATIONCOUNT;

  // ZCRYPTOSALT

  const u8 *ZCRYPTOSALT_pos = token.buf[3];

  apple_secure_notes->ZCRYPTOSALT[ 0] = hex_to_u32 ((const u8 *) &ZCRYPTOSALT_pos[ 0]);
  apple_secure_notes->ZCRYPTOSALT[ 1] = hex_to_u32 ((const u8 *) &ZCRYPTOSALT_pos[ 8]);
  apple_secure_notes->ZCRYPTOSALT[ 2] = hex_to_u32 ((const u8 *) &ZCRYPTOSALT_pos[16]);
  apple_secure_notes->ZCRYPTOSALT[ 3] = hex_to_u32 ((const u8 *) &ZCRYPTOSALT_pos[24]);
  apple_secure_notes->ZCRYPTOSALT[ 4] = 0;
  apple_secure_notes->ZCRYPTOSALT[ 5] = 0;
  apple_secure_notes->ZCRYPTOSALT[ 6] = 0;
  apple_secure_notes->ZCRYPTOSALT[ 7] = 0;
  apple_secure_notes->ZCRYPTOSALT[ 8] = 0;
  apple_secure_notes->ZCRYPTOSALT[ 9] = 0;
  apple_secure_notes->ZCRYPTOSALT[10] = 0;
  apple_secure_notes->ZCRYPTOSALT[11] = 0;
  apple_secure_notes->ZCRYPTOSALT[12] = 0;
  apple_secure_notes->ZCRYPTOSALT[13] = 0;
  apple_secure_notes->ZCRYPTOSALT[14] = 0;
  apple_secure_notes->ZCRYPTOSALT[15] = 0;

  // ZCRYPTOWRAPPEDKEY

  const u8 *ZCRYPTOWRAPPEDKEY_pos = token.buf[4];

  apple_secure_notes->ZCRYPTOWRAPPEDKEY[0] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[ 0]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[1] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[ 8]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[2] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[16]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[3] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[24]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[4] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[32]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[5] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[40]);

  // fake salt

  salt->salt_buf[0] = apple_secure_notes->ZCRYPTOSALT[0];
  salt->salt_buf[1] = apple_secure_notes->ZCRYPTOSALT[1];
  salt->salt_buf[2] = apple_secure_notes->ZCRYPTOSALT[2];
  salt->salt_buf[3] = apple_secure_notes->ZCRYPTOSALT[3];
  salt->salt_buf[4] = apple_secure_notes->Z_PK;

  salt->salt_iter = apple_secure_notes->ZCRYPTOITERATIONCOUNT - 1;
  salt->salt_len  = 20;

  // fake hash

  digest[0] = apple_secure_notes->ZCRYPTOWRAPPEDKEY[0];
  digest[1] = apple_secure_notes->ZCRYPTOWRAPPEDKEY[1];
  digest[2] = apple_secure_notes->ZCRYPTOWRAPPEDKEY[2];
  digest[3] = apple_secure_notes->ZCRYPTOWRAPPEDKEY[3];

  return (PARSER_OK);
}

int ethereum_presale_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  ethereum_presale_t *ethereum_presale = (ethereum_presale_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_ETHEREUM_PRESALE;

  token.sep[0]     = '*';
  token.len_min[0] = 11;
  token.len_max[0] = 11;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '*';
  token.len_min[1] = 64;
  token.len_max[1] = 1248;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[2]     = '*';
  token.len_min[2] = 40;
  token.len_max[2] = 40;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[3]     = '*';
  token.len_min[3] = 32;
  token.len_max[3] = 32;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // encseed

  const u8 *encseed_pos = token.buf[1];
  const int encseed_len = token.len[1];

  ethereum_presale->iv[0] = hex_to_u32 ((const u8 *) &encseed_pos[ 0]);
  ethereum_presale->iv[1] = hex_to_u32 ((const u8 *) &encseed_pos[ 8]);
  ethereum_presale->iv[2] = hex_to_u32 ((const u8 *) &encseed_pos[16]);
  ethereum_presale->iv[3] = hex_to_u32 ((const u8 *) &encseed_pos[24]);

  ethereum_presale->iv[0] = byte_swap_32 (ethereum_presale->iv[0]);
  ethereum_presale->iv[1] = byte_swap_32 (ethereum_presale->iv[1]);
  ethereum_presale->iv[2] = byte_swap_32 (ethereum_presale->iv[2]);
  ethereum_presale->iv[3] = byte_swap_32 (ethereum_presale->iv[3]);

  u32 *esalt_buf_ptr = ethereum_presale->enc_seed;

  for (int i = 32, j = 0; i < encseed_len; i += 8, j++)
  {
    esalt_buf_ptr[j] = hex_to_u32 ((const u8 *) &encseed_pos[i]);

    esalt_buf_ptr[j] = byte_swap_32 (esalt_buf_ptr[j]);
  }

  ethereum_presale->enc_seed_len = (encseed_len - 32) / 2; // encseed length without IV (raw bytes, not hex)

  // salt (address)

  const u8 *ethaddr_pos = token.buf[2];
  const int ethaddr_len = token.len[2];

  const bool parse_rc = parse_and_store_generic_salt ((u8 *) salt->salt_buf, (int *) &salt->salt_len, ethaddr_pos, ethaddr_len, hashconfig);

  if (parse_rc == false) return (PARSER_SALT_LENGTH);

  salt->salt_iter = ROUNDS_ETHEREUM_PRESALE;

  // hash (bkp)

  const u8 *bkp_pos = token.buf[3];

  digest[0] = hex_to_u32 ((const u8 *) &bkp_pos[ 0]);
  digest[1] = hex_to_u32 ((const u8 *) &bkp_pos[ 8]);
  digest[2] = hex_to_u32 ((const u8 *) &bkp_pos[16]);
  digest[3] = hex_to_u32 ((const u8 *) &bkp_pos[24]);

  return (PARSER_OK);
}

int jwt_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  // no digest yet

  salt_t *salt = hash_buf->salt;

  jwt_t *jwt = (jwt_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 3;

  token.sep[0]     = '.';
  token.len_min[0] = 1;
  token.len_max[0] = 2047;
  token.attr[0]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64C;

  token.sep[1]     = '.';
  token.len_min[1] = 1;
  token.len_max[1] = 2047;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64C;

  token.sep[2]     = '.';
  token.len_min[2] = 43;
  token.len_max[2] = 86;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_BASE64C;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // header

  const int header_len = token.len[0];

  // payload

  const int payload_len = token.len[1];

  // signature

  const u8 *signature_pos = token.buf[2];
  const int signature_len = token.len[2];

  // esalt

  const int esalt_len = header_len + 1 + payload_len;

  if (esalt_len > 4096) return (PARSER_SALT_LENGTH);

  memcpy (jwt->salt_buf, input_buf, esalt_len);

  jwt->salt_len = esalt_len;

  /**
   * verify some data
   */

  // we need to do this kind of check, otherwise an eventual matching hash from the potfile overwrites the kern_type with an eventual invalid one

  if (hashconfig->kern_type == (u32) -1)
  {
      // it would be more accurate to base64 decode the header_pos buffer and then to string match HS256 - same goes for the other algorithms

    if (signature_len == 43)
    {
      hashconfig->kern_type = KERN_TYPE_JWT_HS256;
    }
    else if (signature_len == 64)
    {
      hashconfig->kern_type = KERN_TYPE_JWT_HS384;
    }
    else if (signature_len == 86)
    {
      hashconfig->kern_type = KERN_TYPE_JWT_HS512;
    }
    else
    {
      return (PARSER_HASH_LENGTH);
    }
  }
  else
  {
    if ((hashconfig->kern_type == KERN_TYPE_JWT_HS256) && (signature_len == 43))
    {
      // OK
    }
    else if ((hashconfig->kern_type == KERN_TYPE_JWT_HS384) && (signature_len == 64))
    {
      // OK
    }
    else if ((hashconfig->kern_type == KERN_TYPE_JWT_HS512) && (signature_len == 86))
    {
      // OK
    }
    else
    {
      return (PARSER_HASH_LENGTH);
    }
  }

  // salt
  //
  // Create a hash of the esalt because esalt buffer can change somewhere behind salt->salt_buf size
  // Not a regular MD5 but good enough

  u32 hash[4];

  hash[0] = 0;
  hash[1] = 1;
  hash[2] = 2;
  hash[3] = 3;

  u32 block[16];

  memset (block, 0, sizeof (block));

  for (int i = 0; i < 1024; i += 16)
  {
    for (int j = 0; j < 16; j++)
    {
      block[j] = jwt->salt_buf[i + j];

      md5_64 (block, hash);
    }
  }

  salt->salt_buf[0] = hash[0];
  salt->salt_buf[1] = hash[1];
  salt->salt_buf[2] = hash[2];
  salt->salt_buf[3] = hash[3];

  salt->salt_len = 16;

  // hash

  u8 tmp_buf[100] = { 0 };

  base64_decode (base64url_to_int, signature_pos, signature_len, tmp_buf);

  if (signature_len == 43)
  {
    memcpy (hash_buf->digest, tmp_buf, 32);

    u32 *digest = (u32 *) hash_buf->digest;

    digest[0] = byte_swap_32 (digest[0]);
    digest[1] = byte_swap_32 (digest[1]);
    digest[2] = byte_swap_32 (digest[2]);
    digest[3] = byte_swap_32 (digest[3]);
    digest[4] = byte_swap_32 (digest[4]);
    digest[5] = byte_swap_32 (digest[5]);
    digest[6] = byte_swap_32 (digest[6]);
    digest[7] = byte_swap_32 (digest[7]);
  }
  else if (signature_len == 64)
  {
    memcpy (hash_buf->digest, tmp_buf, 48);

    u64 *digest = (u64 *) hash_buf->digest;

    digest[0] = byte_swap_64 (digest[0]);
    digest[1] = byte_swap_64 (digest[1]);
    digest[2] = byte_swap_64 (digest[2]);
    digest[3] = byte_swap_64 (digest[3]);
    digest[4] = byte_swap_64 (digest[4]);
    digest[5] = byte_swap_64 (digest[5]);
  }
  else if (signature_len == 86)
  {
    memcpy (hash_buf->digest, tmp_buf, 64);

    u64 *digest = (u64 *) hash_buf->digest;

    digest[0] = byte_swap_64 (digest[0]);
    digest[1] = byte_swap_64 (digest[1]);
    digest[2] = byte_swap_64 (digest[2]);
    digest[3] = byte_swap_64 (digest[3]);
    digest[4] = byte_swap_64 (digest[4]);
    digest[5] = byte_swap_64 (digest[5]);
    digest[6] = byte_swap_64 (digest[6]);
    digest[7] = byte_swap_64 (digest[7]);
  }

  return (PARSER_OK);
}

int electrum_wallet13_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  electrum_wallet_t *electrum_wallet = (electrum_wallet_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 4;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_ELECTRUM_WALLET;

  token.len[0]     = 10;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '*';
  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = '*';
  token.len_min[2] = 32;
  token.len_max[2] = 32;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[3]     = '*';
  token.len_min[3] = 32;
  token.len_max[3] = 32;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // salt_type

  const u8 *salt_type_pos = token.buf[1];

  const u32 salt_type = hc_strtoul ((const char *) salt_type_pos, NULL, 10);

  if ((salt_type == 1) || (salt_type == 2))
  {
    // all ok
  }
  else
  {
    return (PARSER_SALT_VALUE);
  }

  electrum_wallet->salt_type = salt_type;

  // iv

  const u8 *iv_pos = token.buf[2];

  electrum_wallet->iv[0] = hex_to_u32 ((const u8 *) &iv_pos[ 0]);
  electrum_wallet->iv[1] = hex_to_u32 ((const u8 *) &iv_pos[ 8]);
  electrum_wallet->iv[2] = hex_to_u32 ((const u8 *) &iv_pos[16]);
  electrum_wallet->iv[3] = hex_to_u32 ((const u8 *) &iv_pos[24]);

  // encrypted

  const u8 *encrypted_pos = token.buf[3];

  electrum_wallet->encrypted[0] = hex_to_u32 ((const u8 *) &encrypted_pos[ 0]);
  electrum_wallet->encrypted[1] = hex_to_u32 ((const u8 *) &encrypted_pos[ 8]);
  electrum_wallet->encrypted[2] = hex_to_u32 ((const u8 *) &encrypted_pos[16]);
  electrum_wallet->encrypted[3] = hex_to_u32 ((const u8 *) &encrypted_pos[24]);

  // salt fake

  salt->salt_buf[0] = electrum_wallet->iv[0];
  salt->salt_buf[1] = electrum_wallet->iv[1];
  salt->salt_buf[2] = electrum_wallet->iv[2];
  salt->salt_buf[3] = electrum_wallet->iv[3];
  salt->salt_buf[4] = electrum_wallet->encrypted[0];
  salt->salt_buf[5] = electrum_wallet->encrypted[1];
  salt->salt_buf[6] = electrum_wallet->encrypted[2];
  salt->salt_buf[7] = electrum_wallet->encrypted[3];

  salt->salt_len = 32;

  // hash fake

  digest[0] = electrum_wallet->iv[0];
  digest[1] = electrum_wallet->iv[1];
  digest[2] = electrum_wallet->iv[2];
  digest[3] = electrum_wallet->iv[3];
  digest[4] = electrum_wallet->encrypted[0];
  digest[5] = electrum_wallet->encrypted[1];
  digest[6] = electrum_wallet->encrypted[2];
  digest[7] = electrum_wallet->encrypted[3];

  return (PARSER_OK);
}

int filevault2_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  apple_secure_notes_t *apple_secure_notes = (apple_secure_notes_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 6;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_FILEVAULT2;

  token.len[0]     = 6;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '$';
  token.len_min[1] = 1;
  token.len_max[1] = 10;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = '$';
  token.len_min[2] = 1;
  token.len_max[2] = 6;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[3]     = '$';
  token.len_min[3] = 32;
  token.len_max[3] = 32;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[4]     = '$';
  token.len_min[4] = 1;
  token.len_max[4] = 6;
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[5]     = '$';
  token.len_min[5] = 48;
  token.len_max[5] = 48;
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // Z_PK

  const u8 *Z_PK_pos = token.buf[1];

  const u32 Z_PK = hc_strtoul ((const char *) Z_PK_pos, NULL, 10);

  if (Z_PK != 1) return (PARSER_SIGNATURE_UNMATCHED);

  apple_secure_notes->Z_PK = Z_PK;

  // ZCRYPTOSALT

  const u8 *ZCRYPTOSALT_pos = token.buf[3];

  apple_secure_notes->ZCRYPTOSALT[ 0] = hex_to_u32 ((const u8 *) &ZCRYPTOSALT_pos[ 0]);
  apple_secure_notes->ZCRYPTOSALT[ 1] = hex_to_u32 ((const u8 *) &ZCRYPTOSALT_pos[ 8]);
  apple_secure_notes->ZCRYPTOSALT[ 2] = hex_to_u32 ((const u8 *) &ZCRYPTOSALT_pos[16]);
  apple_secure_notes->ZCRYPTOSALT[ 3] = hex_to_u32 ((const u8 *) &ZCRYPTOSALT_pos[24]);
  apple_secure_notes->ZCRYPTOSALT[ 4] = 0;
  apple_secure_notes->ZCRYPTOSALT[ 5] = 0;
  apple_secure_notes->ZCRYPTOSALT[ 6] = 0;
  apple_secure_notes->ZCRYPTOSALT[ 7] = 0;
  apple_secure_notes->ZCRYPTOSALT[ 8] = 0;
  apple_secure_notes->ZCRYPTOSALT[ 9] = 0;
  apple_secure_notes->ZCRYPTOSALT[10] = 0;
  apple_secure_notes->ZCRYPTOSALT[11] = 0;
  apple_secure_notes->ZCRYPTOSALT[12] = 0;
  apple_secure_notes->ZCRYPTOSALT[13] = 0;
  apple_secure_notes->ZCRYPTOSALT[14] = 0;
  apple_secure_notes->ZCRYPTOSALT[15] = 0;

  // ZCRYPTOITERATIONCOUNT

  const u8 *ZCRYPTOITERATIONCOUNT_pos = token.buf[4];

  const u32 ZCRYPTOITERATIONCOUNT = hc_strtoul ((const char *) ZCRYPTOITERATIONCOUNT_pos, NULL, 10);

  apple_secure_notes->ZCRYPTOITERATIONCOUNT = ZCRYPTOITERATIONCOUNT;

  // ZCRYPTOWRAPPEDKEY

  const u8 *ZCRYPTOWRAPPEDKEY_pos = token.buf[5];

  apple_secure_notes->ZCRYPTOWRAPPEDKEY[0] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[ 0]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[1] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[ 8]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[2] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[16]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[3] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[24]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[4] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[32]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[5] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[40]);

  // fake salt

  salt->salt_buf[0] = apple_secure_notes->ZCRYPTOSALT[0];
  salt->salt_buf[1] = apple_secure_notes->ZCRYPTOSALT[1];
  salt->salt_buf[2] = apple_secure_notes->ZCRYPTOSALT[2];
  salt->salt_buf[3] = apple_secure_notes->ZCRYPTOSALT[3];
  salt->salt_buf[4] = apple_secure_notes->Z_PK;

  salt->salt_iter = apple_secure_notes->ZCRYPTOITERATIONCOUNT - 1;
  salt->salt_len  = 20;

  // fake hash

  digest[0] = apple_secure_notes->ZCRYPTOWRAPPEDKEY[0];
  digest[1] = apple_secure_notes->ZCRYPTOWRAPPEDKEY[1];
  digest[2] = apple_secure_notes->ZCRYPTOWRAPPEDKEY[2];
  digest[3] = apple_secure_notes->ZCRYPTOWRAPPEDKEY[3];

  return (PARSER_OK);
}

int ansible_vault_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  ansible_vault_t *ansible_vault = (ansible_vault_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 6;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_ANSIBLE_VAULT;

  token.len[0]     = 9;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '*';
  token.len_min[1] = 1;
  token.len_max[1] = 1;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = '*';
  token.len_min[2] = 1;
  token.len_max[2] = 1;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[3]     = '*';
  token.len_min[3] = 64;
  token.len_max[3] = 64;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[4]     = '*';
  token.len_min[4] = 32;
  token.len_max[4] = 32768;
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[5]     = '*';
  token.len_min[5] = 64;
  token.len_max[5] = 64;
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // cipher (unused)

  const u8 *cipher_pos = token.buf[1];

  ansible_vault->cipher = hc_strtoul ((const char *) cipher_pos, NULL, 10);

  // version (unused)

  const u8 *version_pos = token.buf[2];

  ansible_vault->version = hc_strtoul ((const char *) version_pos, NULL, 10);

  // salt

  const u8 *salt_pos = token.buf[3];

  salt->salt_len  = 32;
  salt->salt_iter = ROUNDS_ANSIBLE_VAULT - 1;

  salt->salt_buf[0] = hex_to_u32 (salt_pos +  0);
  salt->salt_buf[1] = hex_to_u32 (salt_pos +  8);
  salt->salt_buf[2] = hex_to_u32 (salt_pos + 16);
  salt->salt_buf[3] = hex_to_u32 (salt_pos + 24);
  salt->salt_buf[4] = hex_to_u32 (salt_pos + 32);
  salt->salt_buf[5] = hex_to_u32 (salt_pos + 40);
  salt->salt_buf[6] = hex_to_u32 (salt_pos + 48);
  salt->salt_buf[7] = hex_to_u32 (salt_pos + 56);

  salt->salt_buf[0] = byte_swap_32 (salt->salt_buf[0]);
  salt->salt_buf[1] = byte_swap_32 (salt->salt_buf[1]);
  salt->salt_buf[2] = byte_swap_32 (salt->salt_buf[2]);
  salt->salt_buf[3] = byte_swap_32 (salt->salt_buf[3]);
  salt->salt_buf[4] = byte_swap_32 (salt->salt_buf[4]);
  salt->salt_buf[5] = byte_swap_32 (salt->salt_buf[5]);
  salt->salt_buf[6] = byte_swap_32 (salt->salt_buf[6]);
  salt->salt_buf[7] = byte_swap_32 (salt->salt_buf[7]);

  // ciphertext

  const u8 *ct_buf_pos = token.buf[4];
  const int ct_buf_len = token.len[4];

  u8 *ct_data_ptr = (u8 *) ansible_vault->ct_data_buf;

  for (int i = 0, j = 0; j < ct_buf_len; i += 1, j += 2)
  {
    ct_data_ptr[i] = hex_to_u8 ((const u8 *) &ct_buf_pos[j]);

    ansible_vault->ct_data_len++;
  }

  // hash

  const u8 *hash_pos = token.buf[5];

  digest[0] = hex_to_u32 ((const u8 *) &hash_pos[ 0]);
  digest[1] = hex_to_u32 ((const u8 *) &hash_pos[ 8]);
  digest[2] = hex_to_u32 ((const u8 *) &hash_pos[16]);
  digest[3] = hex_to_u32 ((const u8 *) &hash_pos[24]);
  digest[4] = hex_to_u32 ((const u8 *) &hash_pos[32]);
  digest[5] = hex_to_u32 ((const u8 *) &hash_pos[40]);
  digest[6] = hex_to_u32 ((const u8 *) &hash_pos[48]);
  digest[7] = hex_to_u32 ((const u8 *) &hash_pos[56]);

  digest[0] = byte_swap_32 (digest[0]);
  digest[1] = byte_swap_32 (digest[1]);
  digest[2] = byte_swap_32 (digest[2]);
  digest[3] = byte_swap_32 (digest[3]);
  digest[4] = byte_swap_32 (digest[4]);
  digest[5] = byte_swap_32 (digest[5]);
  digest[6] = byte_swap_32 (digest[6]);
  digest[7] = byte_swap_32 (digest[7]);

  return (PARSER_OK);
}

int apfs_parse_hash (u8 *input_buf, u32 input_len, hash_t *hash_buf, MAYBE_UNUSED hashconfig_t *hashconfig)
{
  u32 *digest = (u32 *) hash_buf->digest;

  salt_t *salt = hash_buf->salt;

  apple_secure_notes_t *apple_secure_notes = (apple_secure_notes_t *) hash_buf->esalt;

  token_t token;

  token.token_cnt  = 6;

  token.signatures_cnt    = 1;
  token.signatures_buf[0] = SIGNATURE_APFS;

  token.len[0]     = 6;
  token.attr[0]    = TOKEN_ATTR_FIXED_LENGTH
                   | TOKEN_ATTR_VERIFY_SIGNATURE;

  token.sep[1]     = '$';
  token.len_min[1] = 1;
  token.len_max[1] = 10;
  token.attr[1]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[2]     = '$';
  token.len_min[2] = 1;
  token.len_max[2] = 6;
  token.attr[2]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[3]     = '$';
  token.len_min[3] = 32;
  token.len_max[3] = 32;
  token.attr[3]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  token.sep[4]     = '$';
  token.len_min[4] = 1;
  token.len_max[4] = 6;
  token.attr[4]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_DIGIT;

  token.sep[5]     = '$';
  token.len_min[5] = 80;
  token.len_max[5] = 80;
  token.attr[5]    = TOKEN_ATTR_VERIFY_LENGTH
                   | TOKEN_ATTR_VERIFY_HEX;

  const int rc_tokenizer = input_tokenizer (input_buf, input_len, &token);

  if (rc_tokenizer != PARSER_OK) return (rc_tokenizer);

  // Z_PK

  const u8 *Z_PK_pos = token.buf[1];

  const u32 Z_PK = hc_strtoul ((const char *) Z_PK_pos, NULL, 10);

  if (Z_PK != 2) return (PARSER_SIGNATURE_UNMATCHED);

  apple_secure_notes->Z_PK = Z_PK;

  // ZCRYPTOSALT

  const u8 *ZCRYPTOSALT_pos = token.buf[3];

  apple_secure_notes->ZCRYPTOSALT[ 0] = hex_to_u32 ((const u8 *) &ZCRYPTOSALT_pos[ 0]);
  apple_secure_notes->ZCRYPTOSALT[ 1] = hex_to_u32 ((const u8 *) &ZCRYPTOSALT_pos[ 8]);
  apple_secure_notes->ZCRYPTOSALT[ 2] = hex_to_u32 ((const u8 *) &ZCRYPTOSALT_pos[16]);
  apple_secure_notes->ZCRYPTOSALT[ 3] = hex_to_u32 ((const u8 *) &ZCRYPTOSALT_pos[24]);
  apple_secure_notes->ZCRYPTOSALT[ 4] = 0;
  apple_secure_notes->ZCRYPTOSALT[ 5] = 0;
  apple_secure_notes->ZCRYPTOSALT[ 6] = 0;
  apple_secure_notes->ZCRYPTOSALT[ 7] = 0;
  apple_secure_notes->ZCRYPTOSALT[ 8] = 0;
  apple_secure_notes->ZCRYPTOSALT[ 9] = 0;
  apple_secure_notes->ZCRYPTOSALT[10] = 0;
  apple_secure_notes->ZCRYPTOSALT[11] = 0;
  apple_secure_notes->ZCRYPTOSALT[12] = 0;
  apple_secure_notes->ZCRYPTOSALT[13] = 0;
  apple_secure_notes->ZCRYPTOSALT[14] = 0;
  apple_secure_notes->ZCRYPTOSALT[15] = 0;

  // ZCRYPTOITERATIONCOUNT

  const u8 *ZCRYPTOITERATIONCOUNT_pos = token.buf[4];

  const u32 ZCRYPTOITERATIONCOUNT = hc_strtoul ((const char *) ZCRYPTOITERATIONCOUNT_pos, NULL, 10);

  apple_secure_notes->ZCRYPTOITERATIONCOUNT = ZCRYPTOITERATIONCOUNT;

  // ZCRYPTOWRAPPEDKEY

  const u8 *ZCRYPTOWRAPPEDKEY_pos = token.buf[5];

  apple_secure_notes->ZCRYPTOWRAPPEDKEY[0] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[ 0]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[1] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[ 8]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[2] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[16]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[3] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[24]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[4] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[32]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[5] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[40]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[6] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[48]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[7] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[56]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[8] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[64]);
  apple_secure_notes->ZCRYPTOWRAPPEDKEY[9] = hex_to_u32 ((const u8 *) &ZCRYPTOWRAPPEDKEY_pos[72]);

  // fake salt

  salt->salt_buf[0] = apple_secure_notes->ZCRYPTOSALT[0];
  salt->salt_buf[1] = apple_secure_notes->ZCRYPTOSALT[1];
  salt->salt_buf[2] = apple_secure_notes->ZCRYPTOSALT[2];
  salt->salt_buf[3] = apple_secure_notes->ZCRYPTOSALT[3];
  salt->salt_buf[4] = apple_secure_notes->Z_PK;

  salt->salt_iter = apple_secure_notes->ZCRYPTOITERATIONCOUNT - 1;
  salt->salt_len  = 20;

  // fake hash

  digest[0] = apple_secure_notes->ZCRYPTOWRAPPEDKEY[0];
  digest[1] = apple_secure_notes->ZCRYPTOWRAPPEDKEY[1];
  digest[2] = apple_secure_notes->ZCRYPTOWRAPPEDKEY[2];
  digest[3] = apple_secure_notes->ZCRYPTOWRAPPEDKEY[3];

  return (PARSER_OK);
}

/**
 * hook functions
 */





u32 kernel_threads_mxx (hashcat_ctx_t *hashcat_ctx)
{


  if (hashconfig->hash_mode ==  8900) kernel_threads = 16; // SCRYPT
  if (hashconfig->hash_mode ==  9000) kernel_threads = 8;  // Blowfish
  if (hashconfig->hash_mode ==  9300) kernel_threads = 8;  // SCRYPT
  if (hashconfig->hash_mode ==  9700) kernel_threads = 64; // RC4
  if (hashconfig->hash_mode ==  9710) kernel_threads = 64; // RC4
  if (hashconfig->hash_mode ==  9800) kernel_threads = 64; // RC4
  if (hashconfig->hash_mode ==  9810) kernel_threads = 64; // RC4
  if (hashconfig->hash_mode == 10400) kernel_threads = 64; // RC4
  if (hashconfig->hash_mode == 10410) kernel_threads = 64; // RC4
  if (hashconfig->hash_mode == 10500) kernel_threads = 64; // RC4
  if (hashconfig->hash_mode == 13100) kernel_threads = 64; // RC4
  if (hashconfig->hash_mode == 15700) kernel_threads = 1;  // SCRYPT
  if (hashconfig->hash_mode == 18200) kernel_threads = 64; // RC4

    // let the module decide if it allows user-defined values over module defined valaues

    if (user_options->kernel_threads_chgd == true)
    {
      device_param->kernel_threads_min = user_options->kernel_threads;
      device_param->kernel_threads_max = user_options->kernel_threads;
    }
}


u32 kernel_loops_mxx (hashcat_ctx_t *hashcat_ctx)
{


  if (hashconfig->hash_mode == 8900)
  {
    kernel_loops_fixed = 1;
  }

  if (hashconfig->hash_mode == 9300)
  {
    kernel_loops_fixed = 1;
  }

  if (hashconfig->hash_mode == 12500)
  {
    kernel_loops_fixed = ROUNDS_RAR3 / 16;
  }

  if (hashconfig->hash_mode == 15700)
  {
    kernel_loops_fixed = 1;
  }


    // let the module decide if it allows user-defined values over module defined valaues

    // commandline parameters overwrite tuningdb entries

    if (user_options->kernel_loops_chgd == true)
    {
      device_param->kernel_loops_min = user_options->kernel_loops;
      device_param->kernel_loops_max = user_options->kernel_loops;
    }

}

u32 kernel_accel_mxx (hashcat_ctx_t *hashcat_ctx)
{
    // limit scrypt accel otherwise we hurt ourself when calculating the scrypt tmto

    #define SCRYPT_MAX_ACCEL 16

    if ((hashconfig->hash_mode == 8900) || (hashconfig->hash_mode == 9300) || (hashconfig->hash_mode == 15700))
    {
      // 16 is actually a bit low, we may need to change this depending on user response

      device_param->kernel_accel_max = MIN (device_param->kernel_accel_max, SCRYPT_MAX_ACCEL);
    }


    // let the module decide if it allows user-defined values over module defined valaues

    // commandline parameters overwrite tuningdb entries

    if (user_options->kernel_accel_chgd == true)
    {
      device_param->kernel_accel_min = user_options->kernel_accel;
      device_param->kernel_accel_max = user_options->kernel_accel;
    }

}

void hashconfig_benchmark_defaults (hashcat_ctx_t *hashcat_ctx, salt_t *salt, void *esalt, void *hook_salt)
{
  hashconfig_t *hashconfig = hashcat_ctx->hashconfig;

  if (hashconfig->is_salted == true)
  {


    // special salt handling

    switch (hashconfig->hash_mode)
    {
      case    22: salt->salt_len    = 30;
                  break;
      case  1731: salt->salt_len = 4;
                  break;
      case  2410: salt->salt_len = 4;
                  break;
      case  3100: salt->salt_len = 1;
                  break;
      case  5800: salt->salt_len = 16;
                  break;
      case  6800: salt->salt_len = 32;
                  break;
      case  8400: salt->salt_len = 40;
                  break;
      case  8800: salt->salt_len = 16;
                  break;
      case  8900: salt->salt_len = 16;
                  salt->scrypt_N = 1024;
                  salt->scrypt_r = 1;
                  salt->scrypt_p = 1;
                  break;
      case  9100: salt->salt_len = 16;
                  break;
      case  9300: salt->salt_len = 14;
                  salt->scrypt_N = 16384;
                  salt->scrypt_r = 1;
                  salt->scrypt_p = 1;
                  break;
      case  9400: salt->salt_len = 16;
                  break;
      case  9500: salt->salt_len = 16;
                  break;
      case  9600: salt->salt_len = 16;
                  break;
      case  9700: salt->salt_len = 16;
                  break;
      case  9710: salt->salt_len = 16;
                  break;
      case  9720: salt->salt_len = 16;
                  break;
      case  9800: salt->salt_len = 16;
                  break;
      case  9810: salt->salt_len = 16;
                  break;
      case  9820: salt->salt_len = 16;
                  break;
      case 10300: salt->salt_len = 12;
                  break;
      case 11000: salt->salt_len = 56;
                  break;
      case 11500: salt->salt_len = 4;
                  break;
      case 11600: salt->salt_len = 4;
                  break;
      case 12400: salt->salt_len = 4;
                  break;
      case 12500: salt->salt_len = 8;
                  break;
      case 12600: salt->salt_len = 64;
                  break;
      case 14600: salt->salt_len = LUKS_SALTSIZE;
                  break;
      case 14700: salt->salt_len = 20;
                  break;
      case 14800: salt->salt_len = 20;
                  break;
      case 14900: salt->salt_len = 4;
                  break;
      case 15100: salt->salt_len = 8;
                  break;
      case 15600: salt->salt_len = 32;
                  break;
      case 15700: salt->salt_len = 32;
                  salt->scrypt_N = 262144;
                  salt->scrypt_r = 1;
                  salt->scrypt_p = 8;
                  break;
      case 16200: salt->salt_len = 16;
                  break;
      case 16300: salt->salt_len = 20;
                  break;
      case 16700: salt->salt_len = 16;
                  break;
      case 16900: salt->salt_len = 32;
                  break;
      case 18300: salt->salt_len = 16;
                  break;
    }

    // special esalt handling

    switch (hashconfig->hash_mode)
    {
      case  5300: ((ikepsk_t *)           esalt)->nr_len        = 1;
                  ((ikepsk_t *)           esalt)->msg_len[5]    = 1;
                  break;
      case  5400: ((ikepsk_t *)           esalt)->nr_len        = 1;
                  ((ikepsk_t *)           esalt)->msg_len[5]    = 1;
                  break;
      case  7300: ((rakp_t *)             esalt)->salt_len      = 32;
                  break;
      case 10400: ((pdf_t *)              esalt)->id_len        = 16;
                  ((pdf_t *)              esalt)->o_len         = 32;
                  ((pdf_t *)              esalt)->u_len         = 32;
                  break;
      case 10410: ((pdf_t *)              esalt)->id_len        = 16;
                  ((pdf_t *)              esalt)->o_len         = 32;
                  ((pdf_t *)              esalt)->u_len         = 32;
                  break;
      case 10420: ((pdf_t *)              esalt)->id_len        = 16;
                  ((pdf_t *)              esalt)->o_len         = 32;
                  ((pdf_t *)              esalt)->u_len         = 32;
                  break;
      case 10500: ((pdf_t *)              esalt)->id_len        = 16;
                  ((pdf_t *)              esalt)->o_len         = 32;
                  ((pdf_t *)              esalt)->u_len         = 32;
                  break;
      case 10600: ((pdf_t *)              esalt)->id_len        = 16;
                  ((pdf_t *)              esalt)->o_len         = 127;
                  ((pdf_t *)              esalt)->u_len         = 127;
                  break;
      case 10700: ((pdf_t *)              esalt)->id_len        = 16;
                  ((pdf_t *)              esalt)->o_len         = 127;
                  ((pdf_t *)              esalt)->u_len         = 127;
                  break;
      case 11400: ((sip_t *)              esalt)->salt_len      = 2;
                  ((sip_t *)              esalt)->esalt_len     = 39;
                  break;
      case 13400: ((keepass_t *)          esalt)->version       = 2;
                  break;
      case 13500: ((pstoken_t *)          esalt)->salt_len      = 113;
                  break;
      case 13600: ((zip2_t *)             esalt)->salt_len      = 16;
                  ((zip2_t *)             esalt)->data_len      = 32;
                  ((zip2_t *)             esalt)->mode          = 3;
                  break;
      case 14600: hashconfig->kern_type                         = KERN_TYPE_LUKS_SHA1_AES;
                  ((luks_t *)             esalt)->key_size      = HC_LUKS_KEY_SIZE_256;
                  ((luks_t *)             esalt)->cipher_type   = HC_LUKS_CIPHER_TYPE_AES;
                  ((luks_t *)             esalt)->cipher_mode   = HC_LUKS_CIPHER_MODE_XTS_PLAIN;
                  break;
      case 16300: ((ethereum_presale_t *) esalt)->enc_seed_len  = 608;
                  break;
      case 16500: hashconfig->kern_type                         = KERN_TYPE_JWT_HS256;
                  ((jwt_t *)              esalt)->salt_len      = 32;
                  break;
    }

    // special hook salt handling

    switch (hashconfig->hash_mode)
    {
      case 11600: ((seven_zip_hook_salt_t *) hook_salt)->iv_len      = 16;
                  ((seven_zip_hook_salt_t *) hook_salt)->data_len    = 112;
                  ((seven_zip_hook_salt_t *) hook_salt)->unpack_size = 112;
                  break;
    }
  }

  // set default iterations

  switch (hashconfig->hash_mode)
  {
    case  2100:  salt->salt_iter  = ROUNDS_DCC2;
                 break;
    case  5200:  salt->salt_iter  = ROUNDS_PSAFE3;
                 break;
    case  5800:  salt->salt_iter  = ROUNDS_ANDROIDPIN - 1;
                 break;
    case  6211:  salt->salt_iter  = ROUNDS_TRUECRYPT_2K;
                 break;
    case  6212:  salt->salt_iter  = ROUNDS_TRUECRYPT_2K;
                 break;
    case  6213:  salt->salt_iter  = ROUNDS_TRUECRYPT_2K;
                 break;
    case  6221:  salt->salt_iter  = ROUNDS_TRUECRYPT_1K;
                 break;
    case  6222:  salt->salt_iter  = ROUNDS_TRUECRYPT_1K;
                 break;
    case  6223:  salt->salt_iter  = ROUNDS_TRUECRYPT_1K;
                 break;
    case  6231:  salt->salt_iter  = ROUNDS_TRUECRYPT_1K;
                 break;
    case  6232:  salt->salt_iter  = ROUNDS_TRUECRYPT_1K;
                 break;
    case  6233:  salt->salt_iter  = ROUNDS_TRUECRYPT_1K;
                 break;
    case  6241:  salt->salt_iter  = ROUNDS_TRUECRYPT_1K;
                 break;
    case  6242:  salt->salt_iter  = ROUNDS_TRUECRYPT_1K;
                 break;
    case  6243:  salt->salt_iter  = ROUNDS_TRUECRYPT_1K;
                 break;
    case  6400:  salt->salt_iter  = ROUNDS_SHA256AIX;
                 break;
    case  6500:  salt->salt_iter  = ROUNDS_SHA512AIX;
                 break;
    case  6700:  salt->salt_iter  = ROUNDS_SHA1AIX;
                 break;
    case  6600:  salt->salt_iter  = ROUNDS_AGILEKEY;
                 break;
    case  6800:  salt->salt_iter  = ROUNDS_LASTPASS;
                 break;
    case  7100:  salt->salt_iter  = ROUNDS_SHA512MACOS;
                 break;
    case  7200:  salt->salt_iter  = ROUNDS_GRUB;
                 break;
    case  7400:  salt->salt_iter  = ROUNDS_SHA256CRYPT;
                 break;
    case  7900:  salt->salt_iter  = ROUNDS_DRUPAL7;
                 break;
    case  8200:  salt->salt_iter  = ROUNDS_CLOUDKEY;
                 break;
    case  8300:  salt->salt_iter  = ROUNDS_NSEC3;
                 break;
    case  8800:  salt->salt_iter  = ROUNDS_ANDROIDFDE;
                 break;
    case  8900:  salt->salt_iter  = 1;
                 break;
    case  9000:  salt->salt_iter  = ROUNDS_PSAFE2;
                 break;
    case  9100:  salt->salt_iter  = ROUNDS_LOTUS8;
                 break;
    case  9200:  salt->salt_iter  = ROUNDS_CISCO8;
                 break;
    case  9300:  salt->salt_iter  = 1;
                 break;
    case  9400:  salt->salt_iter  = ROUNDS_OFFICE2007;
                 break;
    case  9500:  salt->salt_iter  = ROUNDS_OFFICE2010;
                 break;
    case  9600:  salt->salt_iter  = ROUNDS_OFFICE2013;
                 break;
    case 10000:  salt->salt_iter  = ROUNDS_DJANGOPBKDF2;
                 break;
    case 10300:  salt->salt_iter  = ROUNDS_SAPH_SHA1 - 1;
                 break;
    case 10500:  salt->salt_iter  = ROUNDS_PDF14;
                 break;
    case 10700:  salt->salt_iter  = ROUNDS_PDF17L8;
                 break;
    case 10900:  salt->salt_iter  = ROUNDS_PBKDF2_SHA256 - 1;
                 break;
    case 11300:  salt->salt_iter  = ROUNDS_BITCOIN_WALLET - 1;
                 break;
    case 11600:  salt->salt_iter  = ROUNDS_SEVEN_ZIP;
                 break;
    case 11900:  salt->salt_iter  = ROUNDS_PBKDF2_MD5 - 1;
                 break;
    case 12001:  salt->salt_iter  = ROUNDS_ATLASSIAN - 1;
                 break;
    case 12100:  salt->salt_iter  = ROUNDS_PBKDF2_SHA512 - 1;
                 break;
    case 12200:  salt->salt_iter  = ROUNDS_ECRYPTFS - 1;
                 break;
    case 12300:  salt->salt_iter  = ROUNDS_ORACLET - 1;
                 break;
    case 12400:  salt->salt_iter  = ROUNDS_BSDICRYPT - 1;
                 break;
    case 12500:  salt->salt_iter  = ROUNDS_RAR3;
                 break;
    case 12700:  salt->salt_iter  = ROUNDS_MYWALLET;
                 break;
    case 12800:  salt->salt_iter  = ROUNDS_MS_DRSR - 1;
                 break;
    case 12900:  salt->salt_iter  = ROUNDS_ANDROIDFDE_SAMSUNG - 1;
                 break;
    case 13000:  salt->salt_iter  = ROUNDS_RAR5 - 1;
                 break;
    case 13200:  salt->salt_iter  = ROUNDS_AXCRYPT;
                 break;
    case 13400:  salt->salt_iter  = ROUNDS_KEEPASS;
                 break;
    case 13600:  salt->salt_iter  = ROUNDS_ZIP2;
                 break;
    case 13711:  salt->salt_iter  = ROUNDS_VERACRYPT_655331;
                 break;
    case 13712:  salt->salt_iter  = ROUNDS_VERACRYPT_655331;
                 break;
    case 13713:  salt->salt_iter  = ROUNDS_VERACRYPT_655331;
                 break;
    case 13721:  salt->salt_iter  = ROUNDS_VERACRYPT_500000;
                 break;
    case 13722:  salt->salt_iter  = ROUNDS_VERACRYPT_500000;
                 break;
    case 13723:  salt->salt_iter  = ROUNDS_VERACRYPT_500000;
                 break;
    case 13731:  salt->salt_iter  = ROUNDS_VERACRYPT_500000;
                 break;
    case 13732:  salt->salt_iter  = ROUNDS_VERACRYPT_500000;
                 break;
    case 13733:  salt->salt_iter  = ROUNDS_VERACRYPT_500000;
                 break;
    case 13741:  salt->salt_iter  = ROUNDS_VERACRYPT_327661;
                 break;
    case 13742:  salt->salt_iter  = ROUNDS_VERACRYPT_327661;
                 break;
    case 13743:  salt->salt_iter  = ROUNDS_VERACRYPT_327661;
                 break;
    case 13751:  salt->salt_iter  = ROUNDS_VERACRYPT_500000;
                 break;
    case 13752:  salt->salt_iter  = ROUNDS_VERACRYPT_500000;
                 break;
    case 13753:  salt->salt_iter  = ROUNDS_VERACRYPT_500000;
                 break;
    case 13761:  salt->salt_iter  = ROUNDS_VERACRYPT_200000;
                 break;
    case 13762:  salt->salt_iter  = ROUNDS_VERACRYPT_200000;
                 break;
    case 13763:  salt->salt_iter  = ROUNDS_VERACRYPT_200000;
                 break;
    case 13771:  salt->salt_iter  = ROUNDS_VERACRYPT_500000;
                 break;
    case 13772:  salt->salt_iter  = ROUNDS_VERACRYPT_500000;
                 break;
    case 13773:  salt->salt_iter  = ROUNDS_VERACRYPT_500000;
                 break;
    case 14600:  salt->salt_iter  = ROUNDS_LUKS;
                 break;
    case 14700:  salt->salt_iter  = ROUNDS_ITUNES9_BACKUP - 1;
                 break;
    case 14800:  salt->salt_iter  = ROUNDS_ITUNES101_BACKUP - 1;
                 salt->salt_iter2 = ROUNDS_ITUNES102_BACKUP - 1;
                 break;
    case 15100:  salt->salt_iter  = ROUNDS_NETBSD_SHA1CRYPT - 1;
                 break;
    case 15200:  salt->salt_iter  = ROUNDS_MYWALLETV2;
                 break;
    case 15300:  salt->salt_iter  = ROUNDS_DPAPIMK_V1;
                 break;
    case 15600:  salt->salt_iter  = ROUNDS_ETHEREUM_PBKDF2;
                 break;
    case 15700:  salt->salt_iter  = 1;
                 break;
    case 15900:  salt->salt_iter  = ROUNDS_DPAPIMK_V2;
                 break;
    case 16200:  salt->salt_iter  = ROUNDS_APPLE_SECURE_NOTES - 1;
                 break;
    case 16300:  salt->salt_iter  = ROUNDS_ETHEREUM_PRESALE;
                 break;
    case 16700:  salt->salt_iter  = ROUNDS_APPLE_SECURE_NOTES - 1;
                 break;
    case 16900:  salt->salt_iter  = ROUNDS_ANSIBLE_VAULT - 1;
                 break;
    case 18300:  salt->salt_iter  = ROUNDS_APPLE_SECURE_NOTES - 1;
                 break;
  }

}

int ascii_digest (hashcat_ctx_t *hashcat_ctx, char *out_buf, const int out_size, const u32 salt_pos, const u32 digest_pos)
{
  if (hash_mode == 22)
  {
    char username[30] = { 0 };

    memcpy (username, salt.salt_buf, salt.salt_len - 22);

    char sig[6] = { 'n', 'r', 'c', 's', 't', 'n' };

    u16 *ptr = (u16 *) digest_buf;

    tmp_buf[ 0] = sig[0];
    tmp_buf[ 1] = int_to_base64 (((ptr[1]) >> 12) & 0x3f);
    tmp_buf[ 2] = int_to_base64 (((ptr[1]) >>  6) & 0x3f);
    tmp_buf[ 3] = int_to_base64 (((ptr[1]) >>  0) & 0x3f);
    tmp_buf[ 4] = int_to_base64 (((ptr[0]) >> 12) & 0x3f);
    tmp_buf[ 5] = int_to_base64 (((ptr[0]) >>  6) & 0x3f);
    tmp_buf[ 6] = sig[1];
    tmp_buf[ 7] = int_to_base64 (((ptr[0]) >>  0) & 0x3f);
    tmp_buf[ 8] = int_to_base64 (((ptr[3]) >> 12) & 0x3f);
    tmp_buf[ 9] = int_to_base64 (((ptr[3]) >>  6) & 0x3f);
    tmp_buf[10] = int_to_base64 (((ptr[3]) >>  0) & 0x3f);
    tmp_buf[11] = int_to_base64 (((ptr[2]) >> 12) & 0x3f);
    tmp_buf[12] = sig[2];
    tmp_buf[13] = int_to_base64 (((ptr[2]) >>  6) & 0x3f);
    tmp_buf[14] = int_to_base64 (((ptr[2]) >>  0) & 0x3f);
    tmp_buf[15] = int_to_base64 (((ptr[5]) >> 12) & 0x3f);
    tmp_buf[16] = int_to_base64 (((ptr[5]) >>  6) & 0x3f);
    tmp_buf[17] = sig[3];
    tmp_buf[18] = int_to_base64 (((ptr[5]) >>  0) & 0x3f);
    tmp_buf[19] = int_to_base64 (((ptr[4]) >> 12) & 0x3f);
    tmp_buf[20] = int_to_base64 (((ptr[4]) >>  6) & 0x3f);
    tmp_buf[21] = int_to_base64 (((ptr[4]) >>  0) & 0x3f);
    tmp_buf[22] = int_to_base64 (((ptr[7]) >> 12) & 0x3f);
    tmp_buf[23] = sig[4];
    tmp_buf[24] = int_to_base64 (((ptr[7]) >>  6) & 0x3f);
    tmp_buf[25] = int_to_base64 (((ptr[7]) >>  0) & 0x3f);
    tmp_buf[26] = int_to_base64 (((ptr[6]) >> 12) & 0x3f);
    tmp_buf[27] = int_to_base64 (((ptr[6]) >>  6) & 0x3f);
    tmp_buf[28] = int_to_base64 (((ptr[6]) >>  0) & 0x3f);
    tmp_buf[29] = sig[5];

    snprintf (out_buf, out_size, "%s:%s",
      tmp_buf,
      username);
  }
  else if (hash_mode == 23)
  {
    // do not show the skyper part in output

    char *salt_buf_ptr = (char *) salt.salt_buf;

    salt_buf_ptr[salt.salt_len - 8] = 0;

    snprintf (out_buf, out_size, "%08x%08x%08x%08x:%s",
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      salt_buf_ptr);
  }
  else if (hash_mode == 101)
  {
    // the encoder is a bit too intelligent, it expects the input data in the wrong BOM

    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);
    digest_buf[2] = byte_swap_32 (digest_buf[2]);
    digest_buf[3] = byte_swap_32 (digest_buf[3]);
    digest_buf[4] = byte_swap_32 (digest_buf[4]);

    memcpy (tmp_buf, digest_buf, 20);

    base64_encode (int_to_base64, (const u8 *) tmp_buf, 20, (u8 *) ptr_plain);

    snprintf (out_buf, out_size, "{SHA}%s", ptr_plain);
  }
  else if (hash_mode == 111)
  {
    // the encoder is a bit too intelligent, it expects the input data in the wrong BOM

    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);
    digest_buf[2] = byte_swap_32 (digest_buf[2]);
    digest_buf[3] = byte_swap_32 (digest_buf[3]);
    digest_buf[4] = byte_swap_32 (digest_buf[4]);

    memcpy (tmp_buf, digest_buf, 20);
    memcpy (tmp_buf + 20, salt.salt_buf, salt.salt_len);

    base64_encode (int_to_base64, (const u8 *) tmp_buf, 20 + salt.salt_len, (u8 *) ptr_plain);

    snprintf (out_buf, out_size, "{SSHA}%s", ptr_plain);
  }
  else if (hash_mode == 112)
  {
    snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x:%s",
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4],
      (char *) salt.salt_buf);
  }
  else if ((hash_mode == 122) || (hash_mode == 125))
  {
    snprintf (out_buf, out_size, "%s%08x%08x%08x%08x%08x",
      (char *) salt.salt_buf,
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4]);
  }
  else if (hash_mode == 124)
  {
    snprintf (out_buf, out_size, "sha1$%s$%08x%08x%08x%08x%08x",
      (char *) salt.salt_buf,
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4]);
  }
  else if (hash_mode == 131)
  {
    snprintf (out_buf, out_size, "0x0100%s%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x",
      (char *) salt.salt_buf,
      0u, 0u, 0u, 0u, 0u,
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4]);
  }
  else if (hash_mode == 132)
  {
    snprintf (out_buf, out_size, "0x0100%s%08x%08x%08x%08x%08x",
      (char *) salt.salt_buf,
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4]);
  }
  else if (hash_mode == 133)
  {
    // the encoder is a bit too intelligent, it expects the input data in the wrong BOM

    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);
    digest_buf[2] = byte_swap_32 (digest_buf[2]);
    digest_buf[3] = byte_swap_32 (digest_buf[3]);
    digest_buf[4] = byte_swap_32 (digest_buf[4]);

    memcpy (tmp_buf, digest_buf, 20);

    base64_encode (int_to_base64, (const u8 *) tmp_buf, 20, (u8 *) ptr_plain);

    snprintf (out_buf, out_size, "%s", ptr_plain);
  }
  else if (hash_mode == 141)
  {
    memcpy (tmp_buf, salt.salt_buf, salt.salt_len);

    base64_encode (int_to_base64, (const u8 *) tmp_buf, salt.salt_len, ptr_salt);

    // the encoder is a bit too intelligent, it expects the input data in the wrong BOM

    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);
    digest_buf[2] = byte_swap_32 (digest_buf[2]);
    digest_buf[3] = byte_swap_32 (digest_buf[3]);
    digest_buf[4] = byte_swap_32 (digest_buf[4]);

    memcpy (tmp_buf, digest_buf, 20);

    memset (tmp_buf + 20, 0, sizeof (tmp_buf) - 20);

    base64_encode (int_to_base64, (const u8 *) tmp_buf, 20, (u8 *) ptr_plain);

    ptr_plain[27] = 0;

    snprintf (out_buf, out_size, "%s*0*%s*%s", SIGNATURE_EPISERVER, ptr_salt, ptr_plain);
  }
  else if (hash_mode == 1411)
  {
    // the encoder is a bit too intelligent, it expects the input data in the wrong BOM

    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);
    digest_buf[2] = byte_swap_32 (digest_buf[2]);
    digest_buf[3] = byte_swap_32 (digest_buf[3]);
    digest_buf[4] = byte_swap_32 (digest_buf[4]);
    digest_buf[5] = byte_swap_32 (digest_buf[5]);
    digest_buf[6] = byte_swap_32 (digest_buf[6]);
    digest_buf[7] = byte_swap_32 (digest_buf[7]);

    memcpy (tmp_buf, digest_buf, 32);
    memcpy (tmp_buf + 32, salt.salt_buf, salt.salt_len);

    base64_encode (int_to_base64, (const u8 *) tmp_buf, 32 + salt.salt_len, (u8 *) ptr_plain);

    snprintf (out_buf, out_size, "%s%s", SIGNATURE_SHA256B64S, ptr_plain);
  }
  else if (hash_mode == 1421)
  {
    u8 *salt_ptr = (u8 *) salt.salt_buf;

    snprintf (out_buf, out_size, "%c%c%c%c%c%c%08x%08x%08x%08x%08x%08x%08x%08x",
      salt_ptr[0],
      salt_ptr[1],
      salt_ptr[2],
      salt_ptr[3],
      salt_ptr[4],
      salt_ptr[5],
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4],
      digest_buf[5],
      digest_buf[6],
      digest_buf[7]);
  }
  else if (hash_mode == 1441)
  {
    memcpy (tmp_buf, salt.salt_buf, salt.salt_len);

    base64_encode (int_to_base64, (const u8 *) tmp_buf, salt.salt_len, ptr_salt);

    // the encoder is a bit too intelligent, it expects the input data in the wrong BOM

    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);
    digest_buf[2] = byte_swap_32 (digest_buf[2]);
    digest_buf[3] = byte_swap_32 (digest_buf[3]);
    digest_buf[4] = byte_swap_32 (digest_buf[4]);
    digest_buf[5] = byte_swap_32 (digest_buf[5]);
    digest_buf[6] = byte_swap_32 (digest_buf[6]);
    digest_buf[7] = byte_swap_32 (digest_buf[7]);

    memcpy (tmp_buf, digest_buf, 32);

    memset (tmp_buf + 32, 0, sizeof (tmp_buf) - 32);

    base64_encode (int_to_base64, (const u8 *) tmp_buf, 32, (u8 *) ptr_plain);

    ptr_plain[43] = 0;

    snprintf (out_buf, out_size, "%s*1*%s*%s", SIGNATURE_EPISERVER, ptr_salt, ptr_plain);
  }
  else if (hash_mode == 1711)
  {
    // the encoder is a bit too intelligent, it expects the input data in the wrong BOM

    digest_buf64[0] = byte_swap_64 (digest_buf64[0]);
    digest_buf64[1] = byte_swap_64 (digest_buf64[1]);
    digest_buf64[2] = byte_swap_64 (digest_buf64[2]);
    digest_buf64[3] = byte_swap_64 (digest_buf64[3]);
    digest_buf64[4] = byte_swap_64 (digest_buf64[4]);
    digest_buf64[5] = byte_swap_64 (digest_buf64[5]);
    digest_buf64[6] = byte_swap_64 (digest_buf64[6]);
    digest_buf64[7] = byte_swap_64 (digest_buf64[7]);

    memcpy (tmp_buf, digest_buf, 64);
    memcpy (tmp_buf + 64, salt.salt_buf, salt.salt_len);

    base64_encode (int_to_base64, (const u8 *) tmp_buf, 64 + salt.salt_len, (u8 *) ptr_plain);

    snprintf (out_buf, out_size, "%s%s", SIGNATURE_SHA512B64S, ptr_plain);
  }
  else if (hash_mode == 1722)
  {
    u32 *ptr = digest_buf;

    snprintf (out_buf, out_size, "%s%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x",
      (unsigned char *) salt.salt_buf,
      ptr[ 1], ptr[ 0],
      ptr[ 3], ptr[ 2],
      ptr[ 5], ptr[ 4],
      ptr[ 7], ptr[ 6],
      ptr[ 9], ptr[ 8],
      ptr[11], ptr[10],
      ptr[13], ptr[12],
      ptr[15], ptr[14]);
  }
  else if (hash_mode == 1731)
  {
    u32 *ptr = digest_buf;

    snprintf (out_buf, out_size, "0x0200%s%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x",
      (unsigned char *) salt.salt_buf,
        ptr[ 1], ptr[ 0],
        ptr[ 3], ptr[ 2],
        ptr[ 5], ptr[ 4],
        ptr[ 7], ptr[ 6],
        ptr[ 9], ptr[ 8],
        ptr[11], ptr[10],
        ptr[13], ptr[12],
        ptr[15], ptr[14]);
  }
  else if (hash_mode == 2100)
  {
    u32 pos = 0;

    snprintf (out_buf + pos, out_len - pos, "%s%u#",
      SIGNATURE_DCC2,
      salt.salt_iter + 1);

    u32 signature_len = strlen (out_buf);

    pos += signature_len;

    char *salt_ptr = (char *) salt.salt_buf;

    for (u32 i = 0; i < salt.salt_len; i++, pos++) snprintf (out_buf + pos, out_len - pos, "%c", salt_ptr[i]);

    snprintf (out_buf + pos, out_len - pos, "#%08x%08x%08x%08x",
      byte_swap_32 (digest_buf[0]),
      byte_swap_32 (digest_buf[1]),
      byte_swap_32 (digest_buf[2]),
      byte_swap_32 (digest_buf[3]));
  }
  else if ((hash_mode == 2400) || (hash_mode == 2410))
  {
    memcpy (tmp_buf, digest_buf, 16);

    // the encoder is a bit too intelligent, it expects the input data in the wrong BOM

    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);
    digest_buf[2] = byte_swap_32 (digest_buf[2]);
    digest_buf[3] = byte_swap_32 (digest_buf[3]);

    out_buf[ 0] = int_to_itoa64 ((digest_buf[0] >>  0) & 0x3f);
    out_buf[ 1] = int_to_itoa64 ((digest_buf[0] >>  6) & 0x3f);
    out_buf[ 2] = int_to_itoa64 ((digest_buf[0] >> 12) & 0x3f);
    out_buf[ 3] = int_to_itoa64 ((digest_buf[0] >> 18) & 0x3f);

    out_buf[ 4] = int_to_itoa64 ((digest_buf[1] >>  0) & 0x3f);
    out_buf[ 5] = int_to_itoa64 ((digest_buf[1] >>  6) & 0x3f);
    out_buf[ 6] = int_to_itoa64 ((digest_buf[1] >> 12) & 0x3f);
    out_buf[ 7] = int_to_itoa64 ((digest_buf[1] >> 18) & 0x3f);

    out_buf[ 8] = int_to_itoa64 ((digest_buf[2] >>  0) & 0x3f);
    out_buf[ 9] = int_to_itoa64 ((digest_buf[2] >>  6) & 0x3f);
    out_buf[10] = int_to_itoa64 ((digest_buf[2] >> 12) & 0x3f);
    out_buf[11] = int_to_itoa64 ((digest_buf[2] >> 18) & 0x3f);

    out_buf[12] = int_to_itoa64 ((digest_buf[3] >>  0) & 0x3f);
    out_buf[13] = int_to_itoa64 ((digest_buf[3] >>  6) & 0x3f);
    out_buf[14] = int_to_itoa64 ((digest_buf[3] >> 12) & 0x3f);
    out_buf[15] = int_to_itoa64 ((digest_buf[3] >> 18) & 0x3f);

    out_buf[16] = 0;
  }
  else if (hash_mode == 4400)
  {
    snprintf (out_buf, out_size, "%08x%08x%08x%08x",
      byte_swap_32 (digest_buf[0]),
      byte_swap_32 (digest_buf[1]),
      byte_swap_32 (digest_buf[2]),
      byte_swap_32 (digest_buf[3]));
  }
  else if (hash_mode == 4700)
  {
    snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x",
      byte_swap_32 (digest_buf[0]),
      byte_swap_32 (digest_buf[1]),
      byte_swap_32 (digest_buf[2]),
      byte_swap_32 (digest_buf[3]),
      byte_swap_32 (digest_buf[4]));
  }
  else if (hash_mode == 4800)
  {
    u8 chap_id_byte = (u8) salt.salt_buf[4];

    snprintf (out_buf, out_size, "%08x%08x%08x%08x:%08x%08x%08x%08x:%02x",
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      byte_swap_32 (salt.salt_buf[0]),
      byte_swap_32 (salt.salt_buf[1]),
      byte_swap_32 (salt.salt_buf[2]),
      byte_swap_32 (salt.salt_buf[3]),
      chap_id_byte);
  }
  else if (hash_mode == 4900)
  {
    snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x",
      byte_swap_32 (digest_buf[0]),
      byte_swap_32 (digest_buf[1]),
      byte_swap_32 (digest_buf[2]),
      byte_swap_32 (digest_buf[3]),
      byte_swap_32 (digest_buf[4]));
  }
  else if (hash_mode == 5200)
  {
    snprintf (out_buf, out_size, "%s", hashfile);
  }
  else if (hash_mode == 5300)
  {
    ikepsk_t *ikepsks = (ikepsk_t *) esalts_buf;

    ikepsk_t *ikepsk  = &ikepsks[digest_cur];

    size_t buf_len = out_len - 1;

    // msg_buf

    u32 ikepsk_msg_len = ikepsk->msg_len[5] / 4;

    for (u32 i = 0; i < ikepsk_msg_len; i++)
    {
      if ((i == ikepsk->msg_len[0] / 4) || (i == ikepsk->msg_len[1] / 4) || (i == ikepsk->msg_len[2] / 4) || (i == ikepsk->msg_len[3] / 4) || (i == ikepsk->msg_len[4] / 4))
      {
        snprintf (out_buf, buf_len, ":");

        buf_len--;
        out_buf++;
      }

      snprintf (out_buf, buf_len, "%08x", byte_swap_32 (ikepsk->msg_buf[i]));

      buf_len -= 8;
      out_buf += 8;
    }

    // nr_buf

    u32 ikepsk_nr_len = ikepsk->nr_len / 4;

    for (u32 i = 0; i < ikepsk_nr_len; i++)
    {
      if ((i == 0) || (i == 5))
      {
        snprintf (out_buf, buf_len, ":");

        buf_len--;
        out_buf++;
      }

      snprintf (out_buf, buf_len, "%08x", byte_swap_32 (ikepsk->nr_buf[i]));

      buf_len -= 8;
      out_buf += 8;
    }

    // digest_buf

    for (u32 i = 0; i < 4; i++)
    {
      if (i == 0)
      {
        snprintf (out_buf, buf_len, ":");

        buf_len--;
        out_buf++;
      }

      snprintf (out_buf, buf_len, "%08x", digest_buf[i]);

      buf_len -= 8;
      out_buf += 8;
    }
  }
  else if (hash_mode == 5400)
  {
    ikepsk_t *ikepsks = (ikepsk_t *) esalts_buf;

    ikepsk_t *ikepsk  = &ikepsks[digest_cur];

    size_t buf_len = out_len - 1;

    // msg_buf

    u32 ikepsk_msg_len = ikepsk->msg_len[5] / 4;

    for (u32 i = 0; i < ikepsk_msg_len; i++)
    {
      if ((i == ikepsk->msg_len[0] / 4) || (i == ikepsk->msg_len[1] / 4) || (i == ikepsk->msg_len[2] / 4) || (i == ikepsk->msg_len[3] / 4) || (i == ikepsk->msg_len[4] / 4))
      {
        snprintf (out_buf, buf_len, ":");

        buf_len--;
        out_buf++;
      }

      snprintf (out_buf, buf_len, "%08x", byte_swap_32 (ikepsk->msg_buf[i]));

      buf_len -= 8;
      out_buf += 8;
    }

    // nr_buf

    u32 ikepsk_nr_len = ikepsk->nr_len / 4;

    for (u32 i = 0; i < ikepsk_nr_len; i++)
    {
      if ((i == 0) || (i == 5))
      {
        snprintf (out_buf, buf_len, ":");

        buf_len--;
        out_buf++;
      }

      snprintf (out_buf, buf_len, "%08x", byte_swap_32 (ikepsk->nr_buf[i]));

      buf_len -= 8;
      out_buf += 8;
    }

    // digest_buf

    for (u32 i = 0; i < 5; i++)
    {
      if (i == 0)
      {
        snprintf (out_buf, buf_len, ":");

        buf_len--;
        out_buf++;
      }

      snprintf (out_buf, buf_len, "%08x", digest_buf[i]);

      buf_len -= 8;
      out_buf += 8;
    }
  }
  else if (hash_mode == 5700)
  {
    // the encoder is a bit too intelligent, it expects the input data in the wrong BOM

    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);
    digest_buf[2] = byte_swap_32 (digest_buf[2]);
    digest_buf[3] = byte_swap_32 (digest_buf[3]);
    digest_buf[4] = byte_swap_32 (digest_buf[4]);
    digest_buf[5] = byte_swap_32 (digest_buf[5]);
    digest_buf[6] = byte_swap_32 (digest_buf[6]);
    digest_buf[7] = byte_swap_32 (digest_buf[7]);

    memcpy (tmp_buf, digest_buf, 32);

    base64_encode (int_to_itoa64, (const u8 *) tmp_buf, 32, (u8 *) ptr_plain);

    ptr_plain[43] = 0;

    snprintf (out_buf, out_size, "%s", ptr_plain);
  }
  else if (hash_mode == 5800)
  {
    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);
    digest_buf[2] = byte_swap_32 (digest_buf[2]);
    digest_buf[3] = byte_swap_32 (digest_buf[3]);
    digest_buf[4] = byte_swap_32 (digest_buf[4]);

    snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x",
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4]);
  }
  else if ((hash_mode >= 6200) && (hash_mode <= 6299))
  {
    snprintf (out_buf, out_size, "%s", hashfile);
  }
  else if (hash_mode == 6400)
  {
    sha256aix_encode ((unsigned char *) digest_buf, (unsigned char *) ptr_plain);

    snprintf (out_buf, out_size, "{ssha256}%02u$%s$%s", salt.salt_sign[0], (char *) salt.salt_buf, ptr_plain);
  }
  else if (hash_mode == 6500)
  {
    sha512aix_encode ((unsigned char *) digest_buf64, (unsigned char *) ptr_plain);

    snprintf (out_buf, out_size, "{ssha512}%02u$%s$%s", salt.salt_sign[0], (char *) salt.salt_buf, ptr_plain);
  }
  else if (hash_mode == 6600)
  {
    agilekey_t *agilekeys = (agilekey_t *) esalts_buf;

    agilekey_t *agilekey = &agilekeys[digest_cur];

    salt.salt_buf[0] = byte_swap_32 (salt.salt_buf[0]);
    salt.salt_buf[1] = byte_swap_32 (salt.salt_buf[1]);

    u32 off = snprintf (out_buf, out_size, "%u:%08x%08x:", salt.salt_iter + 1, salt.salt_buf[0], salt.salt_buf[1]);

    for (u32 i = 0, j = off; i < 1040; i++, j += 2)
    {
      snprintf (out_buf + j, out_len - j, "%02x", agilekey->cipher[i]);
    }
  }
  else if (hash_mode == 6700)
  {
    sha1aix_encode ((unsigned char *) digest_buf, (unsigned char *) ptr_plain);

    snprintf (out_buf, out_size, "{ssha1}%02u$%s$%s", salt.salt_sign[0], (char *) salt.salt_buf, ptr_plain);
  }
  else if (hash_mode == 6800)
  {
    snprintf (out_buf, out_size, "%s", (char *) salt.salt_buf);
  }
  else if (hash_mode == 7000)
  {
    // salt

    memcpy (tmp_buf, salt.salt_buf, 12);

    // digest

    memcpy (tmp_buf + 12, digest_buf, 20);

    // base64 encode (salt + SHA1)

    base64_encode (int_to_base64, (const u8 *) tmp_buf, 12 + 20, (u8 *) ptr_plain);

    ptr_plain[44] = 0;

    snprintf (out_buf, out_size, "%s%s",
      SIGNATURE_FORTIGATE,
      ptr_plain);
  }
  else if (hash_mode == 7100)
  {
    u32 *ptr = digest_buf;

    pbkdf2_sha512_t *pbkdf2_sha512s = (pbkdf2_sha512_t *) esalts_buf;

    pbkdf2_sha512_t *pbkdf2_sha512  = &pbkdf2_sha512s[digest_cur];

    u32 esalt[8] = { 0 };

    esalt[0] = byte_swap_32 (pbkdf2_sha512->salt_buf[0]);
    esalt[1] = byte_swap_32 (pbkdf2_sha512->salt_buf[1]);
    esalt[2] = byte_swap_32 (pbkdf2_sha512->salt_buf[2]);
    esalt[3] = byte_swap_32 (pbkdf2_sha512->salt_buf[3]);
    esalt[4] = byte_swap_32 (pbkdf2_sha512->salt_buf[4]);
    esalt[5] = byte_swap_32 (pbkdf2_sha512->salt_buf[5]);
    esalt[6] = byte_swap_32 (pbkdf2_sha512->salt_buf[6]);
    esalt[7] = byte_swap_32 (pbkdf2_sha512->salt_buf[7]);

    snprintf (out_buf, out_size, "%s%u$%08x%08x%08x%08x%08x%08x%08x%08x$%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x",
      SIGNATURE_SHA512MACOS,
      salt.salt_iter + 1,
      esalt[ 0], esalt[ 1],
      esalt[ 2], esalt[ 3],
      esalt[ 4], esalt[ 5],
      esalt[ 6], esalt[ 7],
      ptr  [ 1], ptr  [ 0],
      ptr  [ 3], ptr  [ 2],
      ptr  [ 5], ptr  [ 4],
      ptr  [ 7], ptr  [ 6],
      ptr  [ 9], ptr  [ 8],
      ptr  [11], ptr  [10],
      ptr  [13], ptr  [12],
      ptr  [15], ptr  [14]);
  }
  else if (hash_mode == 7200)
  {
    u32 *ptr = digest_buf;

    pbkdf2_sha512_t *pbkdf2_sha512s = (pbkdf2_sha512_t *) esalts_buf;

    pbkdf2_sha512_t *pbkdf2_sha512  = &pbkdf2_sha512s[digest_cur];

    u32 len_used = 0;

    snprintf (out_buf + len_used, out_len - len_used, "%s%u.", SIGNATURE_SHA512GRUB, salt.salt_iter + 1);

    len_used = strlen (out_buf);

    unsigned char *salt_buf_ptr = (unsigned char *) pbkdf2_sha512->salt_buf;

    for (u32 i = 0; i < salt.salt_len; i++, len_used += 2)
    {
      snprintf (out_buf + len_used, out_len - len_used, "%02x", salt_buf_ptr[i]);
    }

    snprintf (out_buf + len_used, out_len - len_used, ".%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x",
      ptr[ 1], ptr[ 0],
      ptr[ 3], ptr[ 2],
      ptr[ 5], ptr[ 4],
      ptr[ 7], ptr[ 6],
      ptr[ 9], ptr[ 8],
      ptr[11], ptr[10],
      ptr[13], ptr[12],
      ptr[15], ptr[14]);
  }
  else if (hash_mode == 7300)
  {
    rakp_t *rakps = (rakp_t *) esalts_buf;

    rakp_t *rakp = &rakps[digest_cur];

    u32 i;
    u32 j;

    u8 *ptr = (u8 *) rakp->salt_buf;

    for (i = 0, j = 0; i < rakp->salt_len; i += 1, j += 2)
    {
      snprintf (out_buf + j, out_len - j, "%02x", ptr[i ^ 3]); // the ^ 3 index converts LE -> BE
    }

    snprintf (out_buf + j, out_len - j, ":%08x%08x%08x%08x%08x",
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4]);
  }
  else if (hash_mode == 7400)
  {
    // the encoder is a bit too intelligent, it expects the input data in the wrong BOM

    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);
    digest_buf[2] = byte_swap_32 (digest_buf[2]);
    digest_buf[3] = byte_swap_32 (digest_buf[3]);
    digest_buf[4] = byte_swap_32 (digest_buf[4]);
    digest_buf[5] = byte_swap_32 (digest_buf[5]);
    digest_buf[6] = byte_swap_32 (digest_buf[6]);
    digest_buf[7] = byte_swap_32 (digest_buf[7]);

    sha256crypt_encode ((unsigned char *) digest_buf, (unsigned char *) ptr_plain);

    if (salt.salt_iter == ROUNDS_SHA256CRYPT)
    {
      snprintf (out_buf, out_size, "$5$%s$%s", (char *) salt.salt_buf, ptr_plain);
    }
    else
    {
      snprintf (out_buf, out_size, "$5$rounds=%u$%s$%s", salt.salt_iter, (char *) salt.salt_buf, ptr_plain);
    }
  }
  else if ((hash_mode == 7700) || (hash_mode == 7701))
  {
    snprintf (out_buf, out_size, "%s$%08X%08X",
      (char *) salt.salt_buf,
      digest_buf[0],
      digest_buf[1]);
  }
  else if ((hash_mode == 7800) || (hash_mode == 7801))
  {
    snprintf (out_buf, out_size, "%s$%08X%08X%08X%08X%08X",
      (char *) salt.salt_buf,
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4]);
  }
  else if (hash_mode == 7900)
  {
    drupal7_encode ((unsigned char *) digest_buf64, (unsigned char *) ptr_plain);

    // ugly hack start

    char *tmp = (char *) salt.salt_buf_pc;

    ptr_plain[42] = tmp[0];

    // ugly hack end

    ptr_plain[43] = 0;

    snprintf (out_buf, out_size, "%s%s%s", (char *) salt.salt_sign, (char *) salt.salt_buf, ptr_plain);
  }
  else if (hash_mode == 8000)
  {
    snprintf (out_buf, out_size, "0xc007%s%08x%08x%08x%08x%08x%08x%08x%08x",
      (unsigned char *) salt.salt_buf,
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4],
      digest_buf[5],
      digest_buf[6],
      digest_buf[7]);
  }
  else if (hash_mode == 8100)
  {
    salt.salt_buf[0] = byte_swap_32 (salt.salt_buf[0]);
    salt.salt_buf[1] = byte_swap_32 (salt.salt_buf[1]);

    snprintf (out_buf, out_size, "1%s%08x%08x%08x%08x%08x",
      (unsigned char *) salt.salt_buf,
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4]);
  }
  else if (hash_mode == 8200)
  {
    cloudkey_t *cloudkeys = (cloudkey_t *) esalts_buf;

    cloudkey_t *cloudkey = &cloudkeys[digest_cur];

    char data_buf[4096] = { 0 };

    for (int i = 0, j = 0; i < 512; i += 1, j += 8)
    {
      sprintf (data_buf + j, "%08x", cloudkey->data_buf[i]);
    }

    data_buf[cloudkey->data_len * 2] = 0;

    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);
    digest_buf[2] = byte_swap_32 (digest_buf[2]);
    digest_buf[3] = byte_swap_32 (digest_buf[3]);
    digest_buf[4] = byte_swap_32 (digest_buf[4]);
    digest_buf[5] = byte_swap_32 (digest_buf[5]);
    digest_buf[6] = byte_swap_32 (digest_buf[6]);
    digest_buf[7] = byte_swap_32 (digest_buf[7]);

    salt.salt_buf[0] = byte_swap_32 (salt.salt_buf[0]);
    salt.salt_buf[1] = byte_swap_32 (salt.salt_buf[1]);
    salt.salt_buf[2] = byte_swap_32 (salt.salt_buf[2]);
    salt.salt_buf[3] = byte_swap_32 (salt.salt_buf[3]);

    snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x%08x%08x%08x:%08x%08x%08x%08x:%u:%s",
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4],
      digest_buf[5],
      digest_buf[6],
      digest_buf[7],
      salt.salt_buf[0],
      salt.salt_buf[1],
      salt.salt_buf[2],
      salt.salt_buf[3],
      salt.salt_iter + 1,
      data_buf);
  }
  else if (hash_mode == 8300)
  {
    char digest_buf_c[34] = { 0 };

    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);
    digest_buf[2] = byte_swap_32 (digest_buf[2]);
    digest_buf[3] = byte_swap_32 (digest_buf[3]);
    digest_buf[4] = byte_swap_32 (digest_buf[4]);

    base32_encode (int_to_itoa32, (const u8 *) digest_buf, 20, (u8 *) digest_buf_c);

    digest_buf_c[32] = 0;

    // domain

    const u32 salt_pc_len = salt.salt_len_pc;

    char domain_buf_c[33] = { 0 };

    memcpy (domain_buf_c, (char *) salt.salt_buf_pc, salt_pc_len);

    for (u32 i = 0; i < salt_pc_len; i++)
    {
      const char next = domain_buf_c[i];

      domain_buf_c[i] = '.';

      i += next;
    }

    domain_buf_c[salt_pc_len] = 0;

    // final

    snprintf (out_buf, out_size, "%s:%s:%s:%u", digest_buf_c, domain_buf_c, (char *) salt.salt_buf, salt.salt_iter);
  }
  else if (hash_mode == 8500)
  {
    snprintf (out_buf, out_size, "%s*%s*%08X%08X", SIGNATURE_RACF, (char *) salt.salt_buf, digest_buf[0], digest_buf[1]);
  }
  else if (hash_mode == 2612)
  {
    snprintf (out_buf, out_size, "%s%s$%08x%08x%08x%08x",
      SIGNATURE_PHPS,
      (char *) salt.salt_buf,
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3]);
  }
  else if (hash_mode == 3711)
  {
    char *salt_ptr = (char *) salt.salt_buf;

    salt_ptr[salt.salt_len - 1] = 0;

    snprintf (out_buf, out_size, "%s%s$%08x%08x%08x%08x",
      SIGNATURE_MEDIAWIKI_B,
      salt_ptr,
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3]);
  }
  else if (hash_mode == 8800)
  {
    androidfde_t *androidfdes = (androidfde_t *) esalts_buf;

    androidfde_t *androidfde = &androidfdes[digest_cur];

    char tmp[3073] = { 0 };

    for (u32 i = 0, j = 0; i < 384; i += 1, j += 8)
    {
      sprintf (tmp + j, "%08x", androidfde->data[i]);
    }

    tmp[3072] = 0;

    snprintf (out_buf, out_size, "%s16$%08x%08x%08x%08x$16$%08x%08x%08x%08x$%s",
      SIGNATURE_ANDROIDFDE,
      byte_swap_32 (salt.salt_buf[0]),
      byte_swap_32 (salt.salt_buf[1]),
      byte_swap_32 (salt.salt_buf[2]),
      byte_swap_32 (salt.salt_buf[3]),
      byte_swap_32 (digest_buf[0]),
      byte_swap_32 (digest_buf[1]),
      byte_swap_32 (digest_buf[2]),
      byte_swap_32 (digest_buf[3]),
      tmp);
  }
  else if (hash_mode == 8900)
  {
    u32 N = salt.scrypt_N;
    u32 r = salt.scrypt_r;
    u32 p = salt.scrypt_p;

    char base64_salt[32] = { 0 };

    base64_encode (int_to_base64, (const u8 *) salt.salt_buf, salt.salt_len, (u8 *) base64_salt);

    memset (tmp_buf, 0, 46);

    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);
    digest_buf[2] = byte_swap_32 (digest_buf[2]);
    digest_buf[3] = byte_swap_32 (digest_buf[3]);
    digest_buf[4] = byte_swap_32 (digest_buf[4]);
    digest_buf[5] = byte_swap_32 (digest_buf[5]);
    digest_buf[6] = byte_swap_32 (digest_buf[6]);
    digest_buf[7] = byte_swap_32 (digest_buf[7]);
    digest_buf[8] = 0; // needed for base64_encode ()

    base64_encode (int_to_base64, (const u8 *) digest_buf, 32, (u8 *) tmp_buf);

    snprintf (out_buf, out_size, "%s:%u:%u:%u:%s:%s",
      SIGNATURE_SCRYPT,
      N,
      r,
      p,
      base64_salt,
      tmp_buf);
  }
  else if (hash_mode == 9000)
  {
    snprintf (out_buf, out_size, "%s", hashfile);
  }
  else if (hash_mode == 9200)
  {
    // salt

    pbkdf2_sha256_t *pbkdf2_sha256s = (pbkdf2_sha256_t *) esalts_buf;

    pbkdf2_sha256_t *pbkdf2_sha256  = &pbkdf2_sha256s[digest_cur];

    unsigned char *salt_buf_ptr = (unsigned char *) pbkdf2_sha256->salt_buf;

    // hash

    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);
    digest_buf[2] = byte_swap_32 (digest_buf[2]);
    digest_buf[3] = byte_swap_32 (digest_buf[3]);
    digest_buf[4] = byte_swap_32 (digest_buf[4]);
    digest_buf[5] = byte_swap_32 (digest_buf[5]);
    digest_buf[6] = byte_swap_32 (digest_buf[6]);
    digest_buf[7] = byte_swap_32 (digest_buf[7]);
    digest_buf[8] = 0; // needed for base64_encode ()

    base64_encode (int_to_itoa64, (const u8 *) digest_buf, 32, (u8 *) tmp_buf);

    tmp_buf[43] = 0; // cut it here

    // output

    snprintf (out_buf, out_size, "%s%s$%s", SIGNATURE_CISCO8, salt_buf_ptr, tmp_buf);
  }
  else if (hash_mode == 9300)
  {
    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);
    digest_buf[2] = byte_swap_32 (digest_buf[2]);
    digest_buf[3] = byte_swap_32 (digest_buf[3]);
    digest_buf[4] = byte_swap_32 (digest_buf[4]);
    digest_buf[5] = byte_swap_32 (digest_buf[5]);
    digest_buf[6] = byte_swap_32 (digest_buf[6]);
    digest_buf[7] = byte_swap_32 (digest_buf[7]);
    digest_buf[8] = 0; // needed for base64_encode ()

    base64_encode (int_to_itoa64, (const u8 *) digest_buf, 32, (u8 *) tmp_buf);

    tmp_buf[43] = 0; // cut it here

    unsigned char *salt_buf_ptr = (unsigned char *) salt.salt_buf;

    snprintf (out_buf, out_size, "%s%s$%s", SIGNATURE_CISCO9, salt_buf_ptr, tmp_buf);
  }
  else if (hash_mode == 9400)
  {
    office2007_t *office2007s = (office2007_t *) esalts_buf;

    office2007_t *office2007 = &office2007s[digest_cur];

    snprintf (out_buf, out_size, "%s*%d*%d*%u*%d*%08x%08x%08x%08x*%08x%08x%08x%08x*%08x%08x%08x%08x%08x",
      SIGNATURE_OFFICE2007,
      2007,
      20,
      office2007->keySize,
      16,
      salt.salt_buf[0],
      salt.salt_buf[1],
      salt.salt_buf[2],
      salt.salt_buf[3],
      office2007->encryptedVerifier[0],
      office2007->encryptedVerifier[1],
      office2007->encryptedVerifier[2],
      office2007->encryptedVerifier[3],
      office2007->encryptedVerifierHash[0],
      office2007->encryptedVerifierHash[1],
      office2007->encryptedVerifierHash[2],
      office2007->encryptedVerifierHash[3],
      office2007->encryptedVerifierHash[4]);
  }
  else if (hash_mode == 9500)
  {
    office2010_t *office2010s = (office2010_t *) esalts_buf;

    office2010_t *office2010 = &office2010s[digest_cur];

    snprintf (out_buf, out_size, "%s*%d*%d*%d*%d*%08x%08x%08x%08x*%08x%08x%08x%08x*%08x%08x%08x%08x%08x%08x%08x%08x",
      SIGNATURE_OFFICE2010,
      2010,
      100000,
      128,
      16,
      salt.salt_buf[0],
      salt.salt_buf[1],
      salt.salt_buf[2],
      salt.salt_buf[3],
      office2010->encryptedVerifier[0],
      office2010->encryptedVerifier[1],
      office2010->encryptedVerifier[2],
      office2010->encryptedVerifier[3],
      office2010->encryptedVerifierHash[0],
      office2010->encryptedVerifierHash[1],
      office2010->encryptedVerifierHash[2],
      office2010->encryptedVerifierHash[3],
      office2010->encryptedVerifierHash[4],
      office2010->encryptedVerifierHash[5],
      office2010->encryptedVerifierHash[6],
      office2010->encryptedVerifierHash[7]);
  }
  else if (hash_mode == 9600)
  {
    office2013_t *office2013s = (office2013_t *) esalts_buf;

    office2013_t *office2013 = &office2013s[digest_cur];

    snprintf (out_buf, out_size, "%s*%d*%d*%d*%d*%08x%08x%08x%08x*%08x%08x%08x%08x*%08x%08x%08x%08x%08x%08x%08x%08x",
      SIGNATURE_OFFICE2013,
      2013,
      100000,
      256,
      16,
      salt.salt_buf[0],
      salt.salt_buf[1],
      salt.salt_buf[2],
      salt.salt_buf[3],
      office2013->encryptedVerifier[0],
      office2013->encryptedVerifier[1],
      office2013->encryptedVerifier[2],
      office2013->encryptedVerifier[3],
      office2013->encryptedVerifierHash[0],
      office2013->encryptedVerifierHash[1],
      office2013->encryptedVerifierHash[2],
      office2013->encryptedVerifierHash[3],
      office2013->encryptedVerifierHash[4],
      office2013->encryptedVerifierHash[5],
      office2013->encryptedVerifierHash[6],
      office2013->encryptedVerifierHash[7]);
  }
  else if (hash_mode == 9700)
  {
    oldoffice01_t *oldoffice01s = (oldoffice01_t *) esalts_buf;

    oldoffice01_t *oldoffice01 = &oldoffice01s[digest_cur];

    snprintf (out_buf, out_size, "%s%d*%08x%08x%08x%08x*%08x%08x%08x%08x*%08x%08x%08x%08x",
      SIGNATURE_OLDOFFICE,
      oldoffice01->version,
      byte_swap_32 (salt.salt_buf[0]),
      byte_swap_32 (salt.salt_buf[1]),
      byte_swap_32 (salt.salt_buf[2]),
      byte_swap_32 (salt.salt_buf[3]),
      byte_swap_32 (oldoffice01->encryptedVerifier[0]),
      byte_swap_32 (oldoffice01->encryptedVerifier[1]),
      byte_swap_32 (oldoffice01->encryptedVerifier[2]),
      byte_swap_32 (oldoffice01->encryptedVerifier[3]),
      byte_swap_32 (oldoffice01->encryptedVerifierHash[0]),
      byte_swap_32 (oldoffice01->encryptedVerifierHash[1]),
      byte_swap_32 (oldoffice01->encryptedVerifierHash[2]),
      byte_swap_32 (oldoffice01->encryptedVerifierHash[3]));
  }
  else if (hash_mode == 9710)
  {
    oldoffice01_t *oldoffice01s = (oldoffice01_t *) esalts_buf;

    oldoffice01_t *oldoffice01 = &oldoffice01s[digest_cur];

    snprintf (out_buf, out_size, "%s%d*%08x%08x%08x%08x*%08x%08x%08x%08x*%08x%08x%08x%08x",
      SIGNATURE_OLDOFFICE,
      oldoffice01->version,
      byte_swap_32 (salt.salt_buf[0]),
      byte_swap_32 (salt.salt_buf[1]),
      byte_swap_32 (salt.salt_buf[2]),
      byte_swap_32 (salt.salt_buf[3]),
      byte_swap_32 (oldoffice01->encryptedVerifier[0]),
      byte_swap_32 (oldoffice01->encryptedVerifier[1]),
      byte_swap_32 (oldoffice01->encryptedVerifier[2]),
      byte_swap_32 (oldoffice01->encryptedVerifier[3]),
      byte_swap_32 (oldoffice01->encryptedVerifierHash[0]),
      byte_swap_32 (oldoffice01->encryptedVerifierHash[1]),
      byte_swap_32 (oldoffice01->encryptedVerifierHash[2]),
      byte_swap_32 (oldoffice01->encryptedVerifierHash[3]));
  }
  else if (hash_mode == 9720)
  {
    oldoffice01_t *oldoffice01s = (oldoffice01_t *) esalts_buf;

    oldoffice01_t *oldoffice01 = &oldoffice01s[digest_cur];

    u8 *rc4key = (u8 *) oldoffice01->rc4key;

    snprintf (out_buf, out_size, "%s%d*%08x%08x%08x%08x*%08x%08x%08x%08x*%08x%08x%08x%08x:%02x%02x%02x%02x%02x",
      SIGNATURE_OLDOFFICE,
      oldoffice01->version,
      byte_swap_32 (salt.salt_buf[0]),
      byte_swap_32 (salt.salt_buf[1]),
      byte_swap_32 (salt.salt_buf[2]),
      byte_swap_32 (salt.salt_buf[3]),
      byte_swap_32 (oldoffice01->encryptedVerifier[0]),
      byte_swap_32 (oldoffice01->encryptedVerifier[1]),
      byte_swap_32 (oldoffice01->encryptedVerifier[2]),
      byte_swap_32 (oldoffice01->encryptedVerifier[3]),
      byte_swap_32 (oldoffice01->encryptedVerifierHash[0]),
      byte_swap_32 (oldoffice01->encryptedVerifierHash[1]),
      byte_swap_32 (oldoffice01->encryptedVerifierHash[2]),
      byte_swap_32 (oldoffice01->encryptedVerifierHash[3]),
      rc4key[0],
      rc4key[1],
      rc4key[2],
      rc4key[3],
      rc4key[4]);
  }
  else if (hash_mode == 9800)
  {
    oldoffice34_t *oldoffice34s = (oldoffice34_t *) esalts_buf;

    oldoffice34_t *oldoffice34 = &oldoffice34s[digest_cur];

    snprintf (out_buf, out_size, "%s%d*%08x%08x%08x%08x*%08x%08x%08x%08x*%08x%08x%08x%08x%08x",
      SIGNATURE_OLDOFFICE,
      oldoffice34->version,
      salt.salt_buf[0],
      salt.salt_buf[1],
      salt.salt_buf[2],
      salt.salt_buf[3],
      byte_swap_32 (oldoffice34->encryptedVerifier[0]),
      byte_swap_32 (oldoffice34->encryptedVerifier[1]),
      byte_swap_32 (oldoffice34->encryptedVerifier[2]),
      byte_swap_32 (oldoffice34->encryptedVerifier[3]),
      byte_swap_32 (oldoffice34->encryptedVerifierHash[0]),
      byte_swap_32 (oldoffice34->encryptedVerifierHash[1]),
      byte_swap_32 (oldoffice34->encryptedVerifierHash[2]),
      byte_swap_32 (oldoffice34->encryptedVerifierHash[3]),
      byte_swap_32 (oldoffice34->encryptedVerifierHash[4]));
  }
  else if (hash_mode == 9810)
  {
    oldoffice34_t *oldoffice34s = (oldoffice34_t *) esalts_buf;

    oldoffice34_t *oldoffice34 = &oldoffice34s[digest_cur];

    snprintf (out_buf, out_size, "%s%d*%08x%08x%08x%08x*%08x%08x%08x%08x*%08x%08x%08x%08x%08x",
      SIGNATURE_OLDOFFICE,
      oldoffice34->version,
      salt.salt_buf[0],
      salt.salt_buf[1],
      salt.salt_buf[2],
      salt.salt_buf[3],
      byte_swap_32 (oldoffice34->encryptedVerifier[0]),
      byte_swap_32 (oldoffice34->encryptedVerifier[1]),
      byte_swap_32 (oldoffice34->encryptedVerifier[2]),
      byte_swap_32 (oldoffice34->encryptedVerifier[3]),
      byte_swap_32 (oldoffice34->encryptedVerifierHash[0]),
      byte_swap_32 (oldoffice34->encryptedVerifierHash[1]),
      byte_swap_32 (oldoffice34->encryptedVerifierHash[2]),
      byte_swap_32 (oldoffice34->encryptedVerifierHash[3]),
      byte_swap_32 (oldoffice34->encryptedVerifierHash[4]));
  }
  else if (hash_mode == 9820)
  {
    oldoffice34_t *oldoffice34s = (oldoffice34_t *) esalts_buf;

    oldoffice34_t *oldoffice34 = &oldoffice34s[digest_cur];

    u8 *rc4key = (u8 *) oldoffice34->rc4key;

    snprintf (out_buf, out_size, "%s%d*%08x%08x%08x%08x*%08x%08x%08x%08x*%08x%08x%08x%08x%08x:%02x%02x%02x%02x%02x",
      SIGNATURE_OLDOFFICE,
      oldoffice34->version,
      salt.salt_buf[0],
      salt.salt_buf[1],
      salt.salt_buf[2],
      salt.salt_buf[3],
      byte_swap_32 (oldoffice34->encryptedVerifier[0]),
      byte_swap_32 (oldoffice34->encryptedVerifier[1]),
      byte_swap_32 (oldoffice34->encryptedVerifier[2]),
      byte_swap_32 (oldoffice34->encryptedVerifier[3]),
      byte_swap_32 (oldoffice34->encryptedVerifierHash[0]),
      byte_swap_32 (oldoffice34->encryptedVerifierHash[1]),
      byte_swap_32 (oldoffice34->encryptedVerifierHash[2]),
      byte_swap_32 (oldoffice34->encryptedVerifierHash[3]),
      byte_swap_32 (oldoffice34->encryptedVerifierHash[4]),
      rc4key[0],
      rc4key[1],
      rc4key[2],
      rc4key[3],
      rc4key[4]);
  }
  else if (hash_mode == 10000)
  {
    // salt

    pbkdf2_sha256_t *pbkdf2_sha256s = (pbkdf2_sha256_t *) esalts_buf;

    pbkdf2_sha256_t *pbkdf2_sha256  = &pbkdf2_sha256s[digest_cur];

    unsigned char *salt_buf_ptr = (unsigned char *) pbkdf2_sha256->salt_buf;

    // hash

    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);
    digest_buf[2] = byte_swap_32 (digest_buf[2]);
    digest_buf[3] = byte_swap_32 (digest_buf[3]);
    digest_buf[4] = byte_swap_32 (digest_buf[4]);
    digest_buf[5] = byte_swap_32 (digest_buf[5]);
    digest_buf[6] = byte_swap_32 (digest_buf[6]);
    digest_buf[7] = byte_swap_32 (digest_buf[7]);
    digest_buf[8] = 0; // needed for base64_encode ()

    base64_encode (int_to_base64, (const u8 *) digest_buf, 32, (u8 *) tmp_buf);

    // output

    snprintf (out_buf, out_size, "%s$%u$%s$%s", SIGNATURE_DJANGOPBKDF2, salt.salt_iter + 1, salt_buf_ptr, tmp_buf);
  }
  else if (hash_mode == 10100)
  {
    snprintf (out_buf, out_size, "%08x%08x:%d:%d:%08x%08x%08x%08x",
      digest_buf[0],
      digest_buf[1],
      2,
      4,
      byte_swap_32 (salt.salt_buf[0]),
      byte_swap_32 (salt.salt_buf[1]),
      byte_swap_32 (salt.salt_buf[2]),
      byte_swap_32 (salt.salt_buf[3]));
  }
  else if (hash_mode == 10200)
  {
    cram_md5_t *cram_md5s = (cram_md5_t *) esalts_buf;

    cram_md5_t *cram_md5 = &cram_md5s[digest_cur];

    // challenge

    char challenge[100] = { 0 };

    base64_encode (int_to_base64, (const u8 *) salt.salt_buf, salt.salt_len, (u8 *) challenge);

    // response

    int tmp_len = snprintf (tmp_buf, sizeof (tmp_buf), "%s %08x%08x%08x%08x",
      (char *) cram_md5->user,
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3]);

    char response[100] = { 0 };

    base64_encode (int_to_base64, (const u8 *) tmp_buf, tmp_len, (u8 *) response);

    snprintf (out_buf, out_size, "%s%s$%s", SIGNATURE_CRAM_MD5, challenge, response);
  }
  else if (hash_mode == 10300)
  {
    memcpy (tmp_buf +  0, digest_buf, 20);
    memcpy (tmp_buf + 20, salt.salt_buf, salt.salt_len);

    u32 tmp_len = 20 + salt.salt_len;

    // base64 encode it

    char base64_encoded[100] = { 0 };

    base64_encode (int_to_base64, (const u8 *) tmp_buf, tmp_len, (u8 *) base64_encoded);

    snprintf (out_buf, out_size, "%s%u}%s", SIGNATURE_SAPH_SHA1, salt.salt_iter + 1, base64_encoded);
  }
  else if (hash_mode == 10400)
  {
    pdf_t *pdfs = (pdf_t *) esalts_buf;

    pdf_t *pdf = &pdfs[digest_cur];

    snprintf (out_buf, out_size, "$pdf$%d*%d*%d*%d*%d*%d*%08x%08x%08x%08x*%d*%08x%08x%08x%08x%08x%08x%08x%08x*%d*%08x%08x%08x%08x%08x%08x%08x%08x",

      pdf->V,
      pdf->R,
      40,
      pdf->P,
      pdf->enc_md,
      pdf->id_len,
      byte_swap_32 (pdf->id_buf[0]),
      byte_swap_32 (pdf->id_buf[1]),
      byte_swap_32 (pdf->id_buf[2]),
      byte_swap_32 (pdf->id_buf[3]),
      pdf->u_len,
      byte_swap_32 (pdf->u_buf[0]),
      byte_swap_32 (pdf->u_buf[1]),
      byte_swap_32 (pdf->u_buf[2]),
      byte_swap_32 (pdf->u_buf[3]),
      byte_swap_32 (pdf->u_buf[4]),
      byte_swap_32 (pdf->u_buf[5]),
      byte_swap_32 (pdf->u_buf[6]),
      byte_swap_32 (pdf->u_buf[7]),
      pdf->o_len,
      byte_swap_32 (pdf->o_buf[0]),
      byte_swap_32 (pdf->o_buf[1]),
      byte_swap_32 (pdf->o_buf[2]),
      byte_swap_32 (pdf->o_buf[3]),
      byte_swap_32 (pdf->o_buf[4]),
      byte_swap_32 (pdf->o_buf[5]),
      byte_swap_32 (pdf->o_buf[6]),
      byte_swap_32 (pdf->o_buf[7])
    );
  }
  else if (hash_mode == 10410)
  {
    pdf_t *pdfs = (pdf_t *) esalts_buf;

    pdf_t *pdf = &pdfs[digest_cur];

    snprintf (out_buf, out_size, "$pdf$%d*%d*%d*%d*%d*%d*%08x%08x%08x%08x*%d*%08x%08x%08x%08x%08x%08x%08x%08x*%d*%08x%08x%08x%08x%08x%08x%08x%08x",

      pdf->V,
      pdf->R,
      40,
      pdf->P,
      pdf->enc_md,
      pdf->id_len,
      byte_swap_32 (pdf->id_buf[0]),
      byte_swap_32 (pdf->id_buf[1]),
      byte_swap_32 (pdf->id_buf[2]),
      byte_swap_32 (pdf->id_buf[3]),
      pdf->u_len,
      byte_swap_32 (pdf->u_buf[0]),
      byte_swap_32 (pdf->u_buf[1]),
      byte_swap_32 (pdf->u_buf[2]),
      byte_swap_32 (pdf->u_buf[3]),
      byte_swap_32 (pdf->u_buf[4]),
      byte_swap_32 (pdf->u_buf[5]),
      byte_swap_32 (pdf->u_buf[6]),
      byte_swap_32 (pdf->u_buf[7]),
      pdf->o_len,
      byte_swap_32 (pdf->o_buf[0]),
      byte_swap_32 (pdf->o_buf[1]),
      byte_swap_32 (pdf->o_buf[2]),
      byte_swap_32 (pdf->o_buf[3]),
      byte_swap_32 (pdf->o_buf[4]),
      byte_swap_32 (pdf->o_buf[5]),
      byte_swap_32 (pdf->o_buf[6]),
      byte_swap_32 (pdf->o_buf[7])
    );
  }
  else if (hash_mode == 10420)
  {
    pdf_t *pdfs = (pdf_t *) esalts_buf;

    pdf_t *pdf = &pdfs[digest_cur];

    u8 *rc4key = (u8 *) pdf->rc4key;

    snprintf (out_buf, out_size, "$pdf$%d*%d*%d*%d*%d*%d*%08x%08x%08x%08x*%d*%08x%08x%08x%08x%08x%08x%08x%08x*%d*%08x%08x%08x%08x%08x%08x%08x%08x:%02x%02x%02x%02x%02x",

      pdf->V,
      pdf->R,
      40,
      pdf->P,
      pdf->enc_md,
      pdf->id_len,
      byte_swap_32 (pdf->id_buf[0]),
      byte_swap_32 (pdf->id_buf[1]),
      byte_swap_32 (pdf->id_buf[2]),
      byte_swap_32 (pdf->id_buf[3]),
      pdf->u_len,
      byte_swap_32 (pdf->u_buf[0]),
      byte_swap_32 (pdf->u_buf[1]),
      byte_swap_32 (pdf->u_buf[2]),
      byte_swap_32 (pdf->u_buf[3]),
      byte_swap_32 (pdf->u_buf[4]),
      byte_swap_32 (pdf->u_buf[5]),
      byte_swap_32 (pdf->u_buf[6]),
      byte_swap_32 (pdf->u_buf[7]),
      pdf->o_len,
      byte_swap_32 (pdf->o_buf[0]),
      byte_swap_32 (pdf->o_buf[1]),
      byte_swap_32 (pdf->o_buf[2]),
      byte_swap_32 (pdf->o_buf[3]),
      byte_swap_32 (pdf->o_buf[4]),
      byte_swap_32 (pdf->o_buf[5]),
      byte_swap_32 (pdf->o_buf[6]),
      byte_swap_32 (pdf->o_buf[7]),
      rc4key[0],
      rc4key[1],
      rc4key[2],
      rc4key[3],
      rc4key[4]
    );
  }
  else if (hash_mode == 10500)
  {
    pdf_t *pdfs = (pdf_t *) esalts_buf;

    pdf_t *pdf = &pdfs[digest_cur];

    if (pdf->id_len == 32)
    {
      snprintf (out_buf, out_size, "$pdf$%d*%d*%d*%d*%d*%d*%08x%08x%08x%08x%08x%08x%08x%08x*%d*%08x%08x%08x%08x%08x%08x%08x%08x*%d*%08x%08x%08x%08x%08x%08x%08x%08x",

        pdf->V,
        pdf->R,
        128,
        pdf->P,
        pdf->enc_md,
        pdf->id_len,
        byte_swap_32 (pdf->id_buf[0]),
        byte_swap_32 (pdf->id_buf[1]),
        byte_swap_32 (pdf->id_buf[2]),
        byte_swap_32 (pdf->id_buf[3]),
        byte_swap_32 (pdf->id_buf[4]),
        byte_swap_32 (pdf->id_buf[5]),
        byte_swap_32 (pdf->id_buf[6]),
        byte_swap_32 (pdf->id_buf[7]),
        pdf->u_len,
        byte_swap_32 (pdf->u_buf[0]),
        byte_swap_32 (pdf->u_buf[1]),
        byte_swap_32 (pdf->u_buf[2]),
        byte_swap_32 (pdf->u_buf[3]),
        byte_swap_32 (pdf->u_buf[4]),
        byte_swap_32 (pdf->u_buf[5]),
        byte_swap_32 (pdf->u_buf[6]),
        byte_swap_32 (pdf->u_buf[7]),
        pdf->o_len,
        byte_swap_32 (pdf->o_buf[0]),
        byte_swap_32 (pdf->o_buf[1]),
        byte_swap_32 (pdf->o_buf[2]),
        byte_swap_32 (pdf->o_buf[3]),
        byte_swap_32 (pdf->o_buf[4]),
        byte_swap_32 (pdf->o_buf[5]),
        byte_swap_32 (pdf->o_buf[6]),
        byte_swap_32 (pdf->o_buf[7])
      );
    }
    else
    {
      snprintf (out_buf, out_size, "$pdf$%d*%d*%d*%d*%d*%d*%08x%08x%08x%08x*%d*%08x%08x%08x%08x%08x%08x%08x%08x*%d*%08x%08x%08x%08x%08x%08x%08x%08x",

        pdf->V,
        pdf->R,
        128,
        pdf->P,
        pdf->enc_md,
        pdf->id_len,
        byte_swap_32 (pdf->id_buf[0]),
        byte_swap_32 (pdf->id_buf[1]),
        byte_swap_32 (pdf->id_buf[2]),
        byte_swap_32 (pdf->id_buf[3]),
        pdf->u_len,
        byte_swap_32 (pdf->u_buf[0]),
        byte_swap_32 (pdf->u_buf[1]),
        byte_swap_32 (pdf->u_buf[2]),
        byte_swap_32 (pdf->u_buf[3]),
        byte_swap_32 (pdf->u_buf[4]),
        byte_swap_32 (pdf->u_buf[5]),
        byte_swap_32 (pdf->u_buf[6]),
        byte_swap_32 (pdf->u_buf[7]),
        pdf->o_len,
        byte_swap_32 (pdf->o_buf[0]),
        byte_swap_32 (pdf->o_buf[1]),
        byte_swap_32 (pdf->o_buf[2]),
        byte_swap_32 (pdf->o_buf[3]),
        byte_swap_32 (pdf->o_buf[4]),
        byte_swap_32 (pdf->o_buf[5]),
        byte_swap_32 (pdf->o_buf[6]),
        byte_swap_32 (pdf->o_buf[7])
      );
    }
  }
  else if (hash_mode == 10600)
  {
    hashinfo_t **hashinfo_ptr = hash_info;
    char        *hash_buf     = hashinfo_ptr[digest_cur]->orighash;

    snprintf (out_buf, out_size, "%s", hash_buf);
  }
  else if (hash_mode == 10700)
  {
    hashinfo_t **hashinfo_ptr = hash_info;
    char        *hash_buf     = hashinfo_ptr[digest_cur]->orighash;

    snprintf (out_buf, out_size, "%s", hash_buf);
  }
  else if (hash_mode == 10900)
  {
    hashinfo_t **hashinfo_ptr = hash_info;
    char        *hash_buf     = hashinfo_ptr[digest_cur]->orighash;

    snprintf (out_buf, out_size, "%s", hash_buf);
  }
  else if (hash_mode == 11100)
  {
    u32 salt_challenge = salt.salt_buf[0];

    salt_challenge = byte_swap_32 (salt_challenge);

    unsigned char *user_name = (unsigned char *) (salt.salt_buf + 1);

    snprintf (out_buf, out_size, "%s%s*%08x*%08x%08x%08x%08x",
        SIGNATURE_POSTGRESQL_AUTH,
        user_name,
        salt_challenge,
        digest_buf[0],
        digest_buf[1],
        digest_buf[2],
        digest_buf[3]);
  }
  else if (hash_mode == 11200)
  {
    snprintf (out_buf, out_size, "%s%s*%08x%08x%08x%08x%08x",
        SIGNATURE_MYSQL_AUTH,
        (unsigned char *) salt.salt_buf,
        digest_buf[0],
        digest_buf[1],
        digest_buf[2],
        digest_buf[3],
        digest_buf[4]);
  }
  else if (hash_mode == 11300)
  {
    bitcoin_wallet_t *bitcoin_wallets = (bitcoin_wallet_t *) esalts_buf;

    bitcoin_wallet_t *bitcoin_wallet = &bitcoin_wallets[digest_cur];

    const u32 cry_master_len = bitcoin_wallet->cry_master_len;
    const u32 ckey_len       = bitcoin_wallet->ckey_len;
    const u32 public_key_len = bitcoin_wallet->public_key_len;

    char *cry_master_buf = (char *) hcmalloc ((cry_master_len * 2) + 1);
    char *ckey_buf       = (char *) hcmalloc ((ckey_len * 2)       + 1);
    char *public_key_buf = (char *) hcmalloc ((public_key_len * 2) + 1);

    for (u32 i = 0, j = 0; i < cry_master_len; i += 1, j += 2)
    {
      const u8 *ptr = (const u8 *) bitcoin_wallet->cry_master_buf;

      sprintf (cry_master_buf + j, "%02x", ptr[i]);
    }

    for (u32 i = 0, j = 0; i < ckey_len; i += 1, j += 2)
    {
      const u8 *ptr = (const u8 *) bitcoin_wallet->ckey_buf;

      sprintf (ckey_buf + j, "%02x", ptr[i]);
    }

    for (u32 i = 0, j = 0; i < public_key_len; i += 1, j += 2)
    {
      const u8 *ptr = (const u8 *) bitcoin_wallet->public_key_buf;

      sprintf (public_key_buf + j, "%02x", ptr[i]);
    }

    snprintf (out_buf, out_size, "%s%u$%s$%u$%s$%u$%u$%s$%u$%s",
      SIGNATURE_BITCOIN_WALLET,
      cry_master_len * 2,
      cry_master_buf,
      salt.salt_len,
      (unsigned char *) salt.salt_buf,
      salt.salt_iter + 1,
      ckey_len * 2,
      ckey_buf,
      public_key_len * 2,
      public_key_buf
    );

    hcfree (cry_master_buf);
    hcfree (ckey_buf);
    hcfree (public_key_buf);
  }
  else if (hash_mode == 11400)
  {
    hashinfo_t **hashinfo_ptr = hash_info;
    char        *hash_buf     = hashinfo_ptr[digest_cur]->orighash;

    snprintf (out_buf, out_size, "%s", hash_buf);
  }
  else if (hash_mode == 11500)
  {
    snprintf (out_buf, out_size, "%08x:%s", byte_swap_32 (digest_buf[0]), (char *) salt.salt_buf);
  }
  else if (hash_mode == 11600)
  {
    seven_zip_hook_salt_t *seven_zips = (seven_zip_hook_salt_t *) hashes->hook_salts_buf;

    seven_zip_hook_salt_t *seven_zip  = &seven_zips[digest_cur];

    const u32 data_len = seven_zip->data_len;

    char *data_buf = (char *) hcmalloc ((data_len * 2) + 1);

    for (u32 i = 0, j = 0; i < data_len; i += 1, j += 2)
    {
      const u8 *ptr = (const u8 *) seven_zip->data_buf;

      snprintf (data_buf + j, (data_len * 2) + 1 - j, "%02x", ptr[i]);
    }

    u32 salt_iter = salt.salt_iter;

    u32 iv[4];

    iv[0] = byte_swap_32 (seven_zip->iv_buf[0]);
    iv[1] = byte_swap_32 (seven_zip->iv_buf[1]);
    iv[2] = byte_swap_32 (seven_zip->iv_buf[2]);
    iv[3] = byte_swap_32 (seven_zip->iv_buf[3]);

    u32 iv_len = seven_zip->iv_len;

    u32 cost = 0; // the log2 () of salt_iter

    while (salt_iter >>= 1)
    {
      cost++;
    }

    snprintf (out_buf, out_size, "%s%u$%u$%u$%s$%u$%08x%08x%08x%08x$%u$%u$%u$%s",
      SIGNATURE_SEVEN_ZIP,
      salt.salt_sign[0],
      cost,
      seven_zip->salt_len,
      (char *) seven_zip->salt_buf,
      iv_len,
      iv[0],
      iv[1],
      iv[2],
      iv[3],
      seven_zip->crc,
      seven_zip->data_len,
      seven_zip->unpack_size,
      data_buf);

    if (seven_zip->data_type > 0)
    {
      u32 bytes_written = strlen (out_buf);

      snprintf (out_buf + bytes_written, out_len - bytes_written, "$%u$", seven_zip->crc_len);

      bytes_written = strlen (out_buf);

      const u8 *ptr = (const u8 *) seven_zip->coder_attributes;

      for (u32 i = 0, j = 0; i < seven_zip->coder_attributes_len; i += 1, j += 2)
      {
        snprintf (out_buf + bytes_written, out_len - bytes_written, "%02x", ptr[i]);

        bytes_written += 2;
      }
    }

    hcfree (data_buf);
  }
  else if (hash_mode == 11700 || hash_mode == 11750 || hash_mode == 11760)
  {
    snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x%08x%08x%08x",
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4],
      digest_buf[5],
      digest_buf[6],
      digest_buf[7]);
  }
  else if (hash_mode == 11800 || hash_mode == 11850 || hash_mode == 11860)
  {
    snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x",
      byte_swap_32 (digest_buf[ 0]),
      byte_swap_32 (digest_buf[ 1]),
      byte_swap_32 (digest_buf[ 2]),
      byte_swap_32 (digest_buf[ 3]),
      byte_swap_32 (digest_buf[ 4]),
      byte_swap_32 (digest_buf[ 5]),
      byte_swap_32 (digest_buf[ 6]),
      byte_swap_32 (digest_buf[ 7]),
      byte_swap_32 (digest_buf[ 8]),
      byte_swap_32 (digest_buf[ 9]),
      byte_swap_32 (digest_buf[10]),
      byte_swap_32 (digest_buf[11]),
      byte_swap_32 (digest_buf[12]),
      byte_swap_32 (digest_buf[13]),
      byte_swap_32 (digest_buf[14]),
      byte_swap_32 (digest_buf[15]));
  }
  else if (hash_mode == 11900)
  {
    hashinfo_t **hashinfo_ptr = hash_info;
    char        *hash_buf     = hashinfo_ptr[digest_cur]->orighash;

    snprintf (out_buf, out_size, "%s", hash_buf);
  }
  else if (hash_mode == 12001)
  {
    hashinfo_t **hashinfo_ptr = hash_info;
    char        *hash_buf     = hashinfo_ptr[digest_cur]->orighash;

    snprintf (out_buf, out_size, "%s", hash_buf);
  }
  else if (hash_mode == 12100)
  {
    hashinfo_t **hashinfo_ptr = hash_info;
    char        *hash_buf     = hashinfo_ptr[digest_cur]->orighash;

    snprintf (out_buf, out_size, "%s", hash_buf);
  }
  else if (hash_mode == 12200)
  {
    u32 *ptr_digest = digest_buf;

    snprintf (out_buf, out_size, "%s0$1$%08x%08x$%08x%08x",
      SIGNATURE_ECRYPTFS,
      salt.salt_buf[0],
      salt.salt_buf[1],
      ptr_digest[0],
      ptr_digest[1]);
  }
  else if (hash_mode == 12300)
  {
    u32 *ptr_digest = digest_buf;

    snprintf (out_buf, out_size, "%08X%08X%08X%08X%08X%08X%08X%08X%08X%08X%08X%08X%08X%08X%08X%08X%08X%08X%08X%08X",
      ptr_digest[ 0], ptr_digest[ 1],
      ptr_digest[ 2], ptr_digest[ 3],
      ptr_digest[ 4], ptr_digest[ 5],
      ptr_digest[ 6], ptr_digest[ 7],
      ptr_digest[ 8], ptr_digest[ 9],
      ptr_digest[10], ptr_digest[11],
      ptr_digest[12], ptr_digest[13],
      ptr_digest[14], ptr_digest[15],
      salt.salt_buf[0],
      salt.salt_buf[1],
      salt.salt_buf[2],
      salt.salt_buf[3]);
  }
  else if (hash_mode == 12400)
  {
    // encode iteration count

    u8 salt_iter[5] = { 0 };

    salt_iter[0] = int_to_itoa64 ((salt.salt_iter      ) & 0x3f);
    salt_iter[1] = int_to_itoa64 ((salt.salt_iter >>  6) & 0x3f);
    salt_iter[2] = int_to_itoa64 ((salt.salt_iter >> 12) & 0x3f);
    salt_iter[3] = int_to_itoa64 ((salt.salt_iter >> 18) & 0x3f);
    salt_iter[4] = 0;

    // encode salt

    ptr_salt[0] = int_to_itoa64 ((salt.salt_buf[0]      ) & 0x3f);
    ptr_salt[1] = int_to_itoa64 ((salt.salt_buf[0] >>  6) & 0x3f);
    ptr_salt[2] = int_to_itoa64 ((salt.salt_buf[0] >> 12) & 0x3f);
    ptr_salt[3] = int_to_itoa64 ((salt.salt_buf[0] >> 18) & 0x3f);
    ptr_salt[4] = 0;

    // encode digest

    memset (tmp_buf, 0, sizeof (tmp_buf));

    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);

    memcpy (tmp_buf, digest_buf, 8);

    base64_encode (int_to_itoa64, (const u8 *) tmp_buf, 8, (u8 *) ptr_plain);

    ptr_plain[11] = 0;

    // fill the resulting buffer

    snprintf (out_buf, out_size, "_%s%s%s", salt_iter, ptr_salt, ptr_plain);
  }
  else if (hash_mode == 12500)
  {
    snprintf (out_buf, out_size, "%s*0*%08x%08x*%08x%08x%08x%08x",
      SIGNATURE_RAR3,
      byte_swap_32 (salt.salt_buf[0]),
      byte_swap_32 (salt.salt_buf[1]),
      salt.salt_buf[2],
      salt.salt_buf[3],
      salt.salt_buf[4],
      salt.salt_buf[5]);
  }
  else if (hash_mode == 12600)
  {
    snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x%08x%08x%08x",
      digest_buf[0] + salt.salt_buf_pc[0],
      digest_buf[1] + salt.salt_buf_pc[1],
      digest_buf[2] + salt.salt_buf_pc[2],
      digest_buf[3] + salt.salt_buf_pc[3],
      digest_buf[4] + salt.salt_buf_pc[4],
      digest_buf[5] + salt.salt_buf_pc[5],
      digest_buf[6] + salt.salt_buf_pc[6],
      digest_buf[7] + salt.salt_buf_pc[7]);
  }
  else if (hash_mode == 12700)
  {
    hashinfo_t **hashinfo_ptr = hash_info;
    char        *hash_buf     = hashinfo_ptr[digest_cur]->orighash;

    snprintf (out_buf, out_size, "%s", hash_buf);
  }
  else if (hash_mode == 12800)
  {
    const u8 *ptr = (const u8 *) salt.salt_buf;

    snprintf (out_buf, out_size, "%s,%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x,%u,%08x%08x%08x%08x%08x%08x%08x%08x",
      SIGNATURE_MS_DRSR,
      ptr[0],
      ptr[1],
      ptr[2],
      ptr[3],
      ptr[4],
      ptr[5],
      ptr[6],
      ptr[7],
      ptr[8],
      ptr[9],
      salt.salt_iter + 1,
      byte_swap_32 (digest_buf[0]),
      byte_swap_32 (digest_buf[1]),
      byte_swap_32 (digest_buf[2]),
      byte_swap_32 (digest_buf[3]),
      byte_swap_32 (digest_buf[4]),
      byte_swap_32 (digest_buf[5]),
      byte_swap_32 (digest_buf[6]),
      byte_swap_32 (digest_buf[7])
    );
  }
  else if (hash_mode == 12900)
  {
    snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x",
      salt.salt_buf[ 4],
      salt.salt_buf[ 5],
      salt.salt_buf[ 6],
      salt.salt_buf[ 7],
      salt.salt_buf[ 8],
      salt.salt_buf[ 9],
      salt.salt_buf[10],
      salt.salt_buf[11],
      byte_swap_32 (digest_buf[0]),
      byte_swap_32 (digest_buf[1]),
      byte_swap_32 (digest_buf[2]),
      byte_swap_32 (digest_buf[3]),
      byte_swap_32 (digest_buf[4]),
      byte_swap_32 (digest_buf[5]),
      byte_swap_32 (digest_buf[6]),
      byte_swap_32 (digest_buf[7]),
      salt.salt_buf[ 0],
      salt.salt_buf[ 1],
      salt.salt_buf[ 2],
      salt.salt_buf[ 3]
    );
  }
  else if (hash_mode == 13000)
  {
    rar5_t *rar5s = (rar5_t *) esalts_buf;

    rar5_t *rar5 = &rar5s[digest_cur];

    snprintf (out_buf, out_size, "$rar5$16$%08x%08x%08x%08x$%u$%08x%08x%08x%08x$8$%08x%08x",
      salt.salt_buf[0],
      salt.salt_buf[1],
      salt.salt_buf[2],
      salt.salt_buf[3],
      salt.salt_sign[0],
      rar5->iv[0],
      rar5->iv[1],
      rar5->iv[2],
      rar5->iv[3],
      byte_swap_32 (digest_buf[0]),
      byte_swap_32 (digest_buf[1])
    );
  }
  else if (hash_mode == 13100)
  {
    krb5tgs_t *krb5tgss = (krb5tgs_t *) esalts_buf;

    krb5tgs_t *krb5tgs = &krb5tgss[digest_cur];

    char data[5120 * 4 * 2] = { 0 };

    for (u32 i = 0, j = 0; i < krb5tgs->edata2_len; i += 1, j += 2)
    {
      u8 *ptr_edata2 = (u8 *) krb5tgs->edata2;

      sprintf (data + j, "%02x", ptr_edata2[i]);
    }

    snprintf (out_buf, out_size, "%s%s%08x%08x%08x%08x$%s",
      SIGNATURE_KRB5TGS,
      (char *) krb5tgs->account_info,
      byte_swap_32 (krb5tgs->checksum[0]),
      byte_swap_32 (krb5tgs->checksum[1]),
      byte_swap_32 (krb5tgs->checksum[2]),
      byte_swap_32 (krb5tgs->checksum[3]),
      data);
  }
  else if (hash_mode == 13200)
  {
    snprintf (out_buf, out_size, "%s*1*%u*%08x%08x%08x%08x*%08x%08x%08x%08x%08x%08x",
      SIGNATURE_AXCRYPT,
      salt.salt_iter,
      salt.salt_buf[0],
      salt.salt_buf[1],
      salt.salt_buf[2],
      salt.salt_buf[3],
      salt.salt_buf[4],
      salt.salt_buf[5],
      salt.salt_buf[6],
      salt.salt_buf[7],
      salt.salt_buf[8],
      salt.salt_buf[9]);
  }
  else if (hash_mode == 13300)
  {
    snprintf (out_buf, out_size, "%s%08x%08x%08x%08x",
      SIGNATURE_AXCRYPT_SHA1,
              digest_buf[0],
              digest_buf[1],
              digest_buf[2],
              digest_buf[3]);
  }
  else if (hash_mode == 13400)
  {
    keepass_t *keepasss = (keepass_t *) esalts_buf;

    keepass_t *keepass = &keepasss[digest_cur];

    u32 version     = keepass->version;
    u32 rounds      = salt.salt_iter;
    u32 algorithm   = keepass->algorithm;
    u32 keyfile_len = keepass->keyfile_len;

    u32 *ptr_final_random_seed  = (u32 *) keepass->final_random_seed;
    u32 *ptr_transf_random_seed = (u32 *) keepass->transf_random_seed;
    u32 *ptr_enc_iv             = (u32 *) keepass->enc_iv;
    u32 *ptr_contents_hash      = (u32 *) keepass->contents_hash;
    u32 *ptr_keyfile            = (u32 *) keepass->keyfile;

    // specific to version 2
    u32 expected_bytes_len;
    u32 *ptr_expected_bytes;

    u32 final_random_seed_len;
    u32 transf_random_seed_len;
    u32 enc_iv_len;
    u32 contents_hash_len;

    transf_random_seed_len = 8;
    enc_iv_len             = 4;
    contents_hash_len      = 8;
    final_random_seed_len  = 8;

    if (version == 1)
      final_random_seed_len = 4;

    snprintf (out_buf, out_size, "%s*%u*%u*%u",
      SIGNATURE_KEEPASS,
      version,
      rounds,
      algorithm);

    char *ptr_data = out_buf;

    ptr_data += strlen(out_buf);

    *ptr_data = '*';
    ptr_data++;

    for (u32 i = 0; i < final_random_seed_len; i++, ptr_data += 8)
      sprintf (ptr_data, "%08x", ptr_final_random_seed[i]);

    *ptr_data = '*';
    ptr_data++;

    for (u32 i = 0; i < transf_random_seed_len; i++, ptr_data += 8)
      sprintf (ptr_data, "%08x", ptr_transf_random_seed[i]);

    *ptr_data = '*';
    ptr_data++;

    for (u32 i = 0; i < enc_iv_len; i++, ptr_data += 8)
      sprintf (ptr_data, "%08x", ptr_enc_iv[i]);

    *ptr_data = '*';
    ptr_data++;

    if (version == 1)
    {
      u32  contents_len =         keepass->contents_len;
      u32 *ptr_contents = (u32 *) keepass->contents;

      for (u32 i = 0; i < contents_hash_len; i++, ptr_data += 8)
        sprintf (ptr_data, "%08x", ptr_contents_hash[i]);

      *ptr_data = '*';
      ptr_data++;

      // inline flag
      *ptr_data = '1';
      ptr_data++;

      *ptr_data = '*';
      ptr_data++;

      char ptr_contents_len[10] = { 0 };

      sprintf ((char*) ptr_contents_len, "%u", contents_len);

      sprintf (ptr_data, "%u", contents_len);

      ptr_data += strlen(ptr_contents_len);

      *ptr_data = '*';
      ptr_data++;

      for (u32 i = 0; i < contents_len / 4; i++, ptr_data += 8)
        sprintf (ptr_data, "%08x", ptr_contents[i]);
    }
    else if (version == 2)
    {
      expected_bytes_len = 8;
      ptr_expected_bytes = (u32 *) keepass->expected_bytes;

      for (u32 i = 0; i < expected_bytes_len; i++, ptr_data += 8)
        sprintf (ptr_data, "%08x", ptr_expected_bytes[i]);

      *ptr_data = '*';
      ptr_data++;

      for (u32 i = 0; i < contents_hash_len; i++, ptr_data += 8)
        sprintf (ptr_data, "%08x", ptr_contents_hash[i]);
    }
    if (keyfile_len)
    {
      *ptr_data = '*';
      ptr_data++;

      // inline flag
      *ptr_data = '1';
      ptr_data++;

      *ptr_data = '*';
      ptr_data++;

      sprintf (ptr_data, "%u", keyfile_len * 2);

      ptr_data += 2;

      *ptr_data = '*';
      ptr_data++;

      for (u32 i = 0; i < 8; i++, ptr_data += 8)
        sprintf (ptr_data, "%08x", ptr_keyfile[i]);
    }
  }
  else if (hash_mode == 13500)
  {
    pstoken_t *pstokens = (pstoken_t *) esalts_buf;

    pstoken_t *pstoken = &pstokens[digest_cur];

    const u32 salt_len = (pstoken->salt_len > 512) ? 512 : pstoken->salt_len;

    char pstoken_tmp[1024 + 1] = { 0 };

    for (u32 i = 0, j = 0; i < salt_len; i += 1, j += 2)
    {
      const u8 *ptr = (const u8 *) pstoken->salt_buf;

      sprintf (pstoken_tmp + j, "%02x", ptr[i]);
    }

    snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x:%s",
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4],
      pstoken_tmp);
  }
  else if (hash_mode == 13600)
  {
    zip2_t *zip2s = (zip2_t *) esalts_buf;

    zip2_t *zip2 = &zip2s[digest_cur];

    const u32 salt_len = zip2->salt_len;

    char salt_tmp[32 + 1] = { 0 };

    for (u32 i = 0, j = 0; i < salt_len; i += 1, j += 2)
    {
      const u8 *ptr = (const u8 *) zip2->salt_buf;

      sprintf (salt_tmp + j, "%02x", ptr[i]);
    }

    const u32 data_len = zip2->data_len;

    char data_tmp[8192 + 1] = { 0 };

    for (u32 i = 0, j = 0; i < data_len; i += 1, j += 2)
    {
      const u8 *ptr = (const u8 *) zip2->data_buf;

      sprintf (data_tmp + j, "%02x", ptr[i]);
    }

    const u32 auth_len = zip2->auth_len;

    char auth_tmp[20 + 1] = { 0 };

    for (u32 i = 0, j = 0; i < auth_len; i += 1, j += 2)
    {
      const u8 *ptr = (const u8 *) zip2->auth_buf;

      sprintf (auth_tmp + j, "%02x", ptr[i]);
    }

    snprintf (out_buf, out_size, "%s*%u*%u*%u*%s*%x*%u*%s*%s*%s",
      SIGNATURE_ZIP2_START,
      zip2->type,
      zip2->mode,
      zip2->magic,
      salt_tmp,
      zip2->verify_bytes,
      zip2->compress_length,
      data_tmp,
      auth_tmp,
      SIGNATURE_ZIP2_STOP);
  }
  else if ((hash_mode >= 13700) && (hash_mode <= 13799))
  {
    snprintf (out_buf, out_size, "%s", hashfile);
  }
  else if (hash_mode == 13800)
  {
    win8phone_t *esalts = (win8phone_t *) esalts_buf;

    win8phone_t *esalt = &esalts[digest_cur];

    char buf[256 + 1] = { 0 };

    for (int i = 0, j = 0; i < 32; i += 1, j += 8)
    {
      sprintf (buf + j, "%08x", esalt->salt_buf[i]);
    }

    snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x%08x%08x%08x:%s",
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4],
      digest_buf[5],
      digest_buf[6],
      digest_buf[7],
      buf);
  }
  else if (hash_mode == 14400)
  {
    snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x",
      byte_swap_32 (digest_buf[0]),
      byte_swap_32 (digest_buf[1]),
      byte_swap_32 (digest_buf[2]),
      byte_swap_32 (digest_buf[3]),
      byte_swap_32 (digest_buf[4]));
  }
  else if (hash_mode == 14600)
  {
    snprintf (out_buf, out_size, "%s", hashfile);
  }
  else if (hash_mode == 14700)
  {
    // WPKY

    itunes_backup_t *itunes_backups = (itunes_backup_t *) esalts_buf;
    itunes_backup_t *itunes_backup  = &itunes_backups[digest_cur];

    u32 wkpy_u32[10];

    wkpy_u32[0] = byte_swap_32 (itunes_backup->wpky[0]);
    wkpy_u32[1] = byte_swap_32 (itunes_backup->wpky[1]);
    wkpy_u32[2] = byte_swap_32 (itunes_backup->wpky[2]);
    wkpy_u32[3] = byte_swap_32 (itunes_backup->wpky[3]);
    wkpy_u32[4] = byte_swap_32 (itunes_backup->wpky[4]);
    wkpy_u32[5] = byte_swap_32 (itunes_backup->wpky[5]);
    wkpy_u32[6] = byte_swap_32 (itunes_backup->wpky[6]);
    wkpy_u32[7] = byte_swap_32 (itunes_backup->wpky[7]);
    wkpy_u32[8] = byte_swap_32 (itunes_backup->wpky[8]);
    wkpy_u32[9] = byte_swap_32 (itunes_backup->wpky[9]);

    u8 wpky[80 + 1];

    u32_to_hex (wkpy_u32[0], wpky +  0);
    u32_to_hex (wkpy_u32[1], wpky +  8);
    u32_to_hex (wkpy_u32[2], wpky + 16);
    u32_to_hex (wkpy_u32[3], wpky + 24);
    u32_to_hex (wkpy_u32[4], wpky + 32);
    u32_to_hex (wkpy_u32[5], wpky + 40);
    u32_to_hex (wkpy_u32[6], wpky + 48);
    u32_to_hex (wkpy_u32[7], wpky + 56);
    u32_to_hex (wkpy_u32[8], wpky + 64);
    u32_to_hex (wkpy_u32[9], wpky + 72);

    wpky[80] = 0;

    snprintf (out_buf, out_size, "%s*%u*%s*%u*%s**",
      SIGNATURE_ITUNES_BACKUP,
      salt.salt_sign[0],
      wpky,
      salt.salt_iter + 1,
      (char *) salt.salt_buf);
  }
  else if (hash_mode == 14800)
  {
    // WPKY

    itunes_backup_t *itunes_backups = (itunes_backup_t *) esalts_buf;
    itunes_backup_t *itunes_backup  = &itunes_backups[digest_cur];

    u32 wkpy_u32[10];

    wkpy_u32[0] = byte_swap_32 (itunes_backup->wpky[0]);
    wkpy_u32[1] = byte_swap_32 (itunes_backup->wpky[1]);
    wkpy_u32[2] = byte_swap_32 (itunes_backup->wpky[2]);
    wkpy_u32[3] = byte_swap_32 (itunes_backup->wpky[3]);
    wkpy_u32[4] = byte_swap_32 (itunes_backup->wpky[4]);
    wkpy_u32[5] = byte_swap_32 (itunes_backup->wpky[5]);
    wkpy_u32[6] = byte_swap_32 (itunes_backup->wpky[6]);
    wkpy_u32[7] = byte_swap_32 (itunes_backup->wpky[7]);
    wkpy_u32[8] = byte_swap_32 (itunes_backup->wpky[8]);
    wkpy_u32[9] = byte_swap_32 (itunes_backup->wpky[9]);

    u8 wpky[80 + 1];

    u32_to_hex (wkpy_u32[0], wpky +  0);
    u32_to_hex (wkpy_u32[1], wpky +  8);
    u32_to_hex (wkpy_u32[2], wpky + 16);
    u32_to_hex (wkpy_u32[3], wpky + 24);
    u32_to_hex (wkpy_u32[4], wpky + 32);
    u32_to_hex (wkpy_u32[5], wpky + 40);
    u32_to_hex (wkpy_u32[6], wpky + 48);
    u32_to_hex (wkpy_u32[7], wpky + 56);
    u32_to_hex (wkpy_u32[8], wpky + 64);
    u32_to_hex (wkpy_u32[9], wpky + 72);

    wpky[80] = 0;

    // DPSL

    u32 dpsl_u32[5];

    dpsl_u32[0] = byte_swap_32 (itunes_backup->dpsl[0]);
    dpsl_u32[1] = byte_swap_32 (itunes_backup->dpsl[1]);
    dpsl_u32[2] = byte_swap_32 (itunes_backup->dpsl[2]);
    dpsl_u32[3] = byte_swap_32 (itunes_backup->dpsl[3]);
    dpsl_u32[4] = byte_swap_32 (itunes_backup->dpsl[4]);

    u8 dpsl[80 + 1];

    u32_to_hex (dpsl_u32[0], dpsl +  0);
    u32_to_hex (dpsl_u32[1], dpsl +  8);
    u32_to_hex (dpsl_u32[2], dpsl + 16);
    u32_to_hex (dpsl_u32[3], dpsl + 24);
    u32_to_hex (dpsl_u32[4], dpsl + 32);

    dpsl[40] = 0;

    snprintf (out_buf, out_size, "%s*%u*%s*%u*%s*%u*%s",
      SIGNATURE_ITUNES_BACKUP,
      salt.salt_sign[0],
      wpky,
      salt.salt_iter2 + 1,
      (char *) salt.salt_buf,
      salt.salt_iter + 1,
      dpsl);
  }
  else if (hash_mode == 14900)
  {
    snprintf (out_buf, out_size, "%08x:%08x", digest_buf[0], salt.salt_buf[0]);
  }
  else if (hash_mode == 15100)
  {
    // encode the digest:

    netbsd_sha1crypt_encode ((unsigned char *) digest_buf, salt.salt_sign[0], (unsigned char *) ptr_plain);

    // output:

    snprintf (out_buf, out_size, "$sha1$%u$%s$%s",
      salt.salt_iter + 1,
      (char *) salt.salt_buf,
      ptr_plain);
  }
  else if (hash_mode == 15200)
  {
    hashinfo_t **hashinfo_ptr = hash_info;
    char        *hash_buf     = hashinfo_ptr[digest_cur]->orighash;

    snprintf (out_buf, out_size, "%s", hash_buf);
  }
  else if (hash_mode == 15300)
  {
    dpapimk_t *dpapimks = (dpapimk_t *) esalts_buf;

    dpapimk_t *dpapimk  = &dpapimks[digest_cur];

    u32 version      = 1;
    u32 context      = dpapimk->context;
    u32 rounds       = salt.salt_iter + 1;
    u32 contents_len = dpapimk->contents_len;
    u32 SID_len      = dpapimk->SID_len;
    u32 iv_len       = 32;

    u8 cipher_algorithm[8] = { 0 };
    u8 hash_algorithm[8]   = { 0 };
    u8 SID[512]            = { 0 };
    u8* SID_tmp;

    u32  *ptr_SID          = (u32 *)  dpapimk->SID;
    u32  *ptr_iv           = (u32 *)  dpapimk->iv;
    u32  *ptr_contents     = (u32 *)  dpapimk->contents;

    u32 u32_iv[4];
    u8 iv[32 + 1];

    // convert back SID

    SID_tmp = (u8 *) hcmalloc ((SID_len + 1) * sizeof(u8));

    for (u32 i = 0; i < (SID_len / 4) + 1; i++)
    {
      u8 hex[8] = { 0 };
      u32_to_hex (byte_swap_32 (ptr_SID[i]), hex);

      for (u32 j = 0, k = 0; j < 8; j += 2, k++)
      {
        SID_tmp[i * 4 + k] = hex_to_u8 (&hex[j]);
      }
    }
    // overwrite trailing 0x80
    SID_tmp[SID_len] = 0;

    for (u32 i = 0, j = 0 ; j < SID_len ; i++, j += 2)
    {
      SID[i] = SID_tmp[j];
    }

    hcfree(SID_tmp);

    for (u32 i = 0; i < iv_len / 8; i++)
    {
      u32_iv[i] = byte_swap_32 (ptr_iv[i]);
      u32_to_hex (u32_iv[i], iv +  i * 8);
    }
    iv[32] = 0;

    u32 u32_contents[36];
    u8  contents[288 + 1];

    for (u32 i = 0; i < contents_len / 8; i++)
    {
      u32_contents[i] = byte_swap_32 (ptr_contents[i]);
      u32_to_hex (u32_contents[i], contents +  i * 8);
    }

    contents[208] = 0;

    if (contents_len == 208)
    {
      memcpy(cipher_algorithm, "des3", strlen("des3"));
      memcpy(hash_algorithm,   "sha1", strlen("sha1"));
    }

    snprintf (out_buf, out_size, "%s%u*%u*%s*%s*%s*%u*%s*%u*%s",
      SIGNATURE_DPAPIMK,
      version,
      context,
      SID,
      cipher_algorithm,
      hash_algorithm,
      rounds,
      iv,
      contents_len,
      contents);
  }
  else if (hash_mode == 15500)
  {
    jks_sha1_t *jks_sha1s = (jks_sha1_t *) esalts_buf;

    jks_sha1_t *jks_sha1 = &jks_sha1s[digest_cur];

    char enc_key[16384 + 1] = { 0 };

    u8 *ptr = (u8 *) jks_sha1->enc_key_buf;

    for (u32 i = 0, j = 0; i < jks_sha1->enc_key_len; i += 1, j += 2)
    {
      sprintf (enc_key + j, "%02X", ptr[i]);
    }

    u8 *der = (u8 *) jks_sha1->der;

    snprintf (out_buf, out_size, "%s*%08X%08X%08X%08X%08X*%08X%08X%08X%08X%08X*%s*%02X*%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X*%s",
      SIGNATURE_JKS_SHA1,
      byte_swap_32 (jks_sha1->checksum[0]),
      byte_swap_32 (jks_sha1->checksum[1]),
      byte_swap_32 (jks_sha1->checksum[2]),
      byte_swap_32 (jks_sha1->checksum[3]),
      byte_swap_32 (jks_sha1->checksum[4]),
      byte_swap_32 (jks_sha1->iv[0]),
      byte_swap_32 (jks_sha1->iv[1]),
      byte_swap_32 (jks_sha1->iv[2]),
      byte_swap_32 (jks_sha1->iv[3]),
      byte_swap_32 (jks_sha1->iv[4]),
      enc_key,
      der[ 0],
      der[ 6],
      der[ 7],
      der[ 8],
      der[ 9],
      der[10],
      der[11],
      der[12],
      der[13],
      der[14],
      der[15],
      der[16],
      der[17],
      der[18],
      der[19],
      (char *) jks_sha1->alias
    );
  }
  else if (hash_mode == 15600)
  {
    ethereum_pbkdf2_t *ethereum_pbkdf2s = (ethereum_pbkdf2_t *) esalts_buf;
    ethereum_pbkdf2_t *ethereum_pbkdf2  = &ethereum_pbkdf2s[digest_cur];

    snprintf (out_buf, out_size, "%s*%u*%s*%08x%08x%08x%08x%08x%08x%08x%08x*%08x%08x%08x%08x%08x%08x%08x%08x",
      SIGNATURE_ETHEREUM_PBKDF2,
      salt.salt_iter + 1,
      (char *) salt.salt_buf,
      byte_swap_32 (ethereum_pbkdf2->ciphertext[0]),
      byte_swap_32 (ethereum_pbkdf2->ciphertext[1]),
      byte_swap_32 (ethereum_pbkdf2->ciphertext[2]),
      byte_swap_32 (ethereum_pbkdf2->ciphertext[3]),
      byte_swap_32 (ethereum_pbkdf2->ciphertext[4]),
      byte_swap_32 (ethereum_pbkdf2->ciphertext[5]),
      byte_swap_32 (ethereum_pbkdf2->ciphertext[6]),
      byte_swap_32 (ethereum_pbkdf2->ciphertext[7]),
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4],
      digest_buf[5],
      digest_buf[6],
      digest_buf[7]
    );
  }
  else if (hash_mode == 15700)
  {
    ethereum_scrypt_t *ethereum_scrypts = (ethereum_scrypt_t *) esalts_buf;
    ethereum_scrypt_t *ethereum_scrypt  = &ethereum_scrypts[digest_cur];

    snprintf (out_buf, out_size, "%s*%u*%u*%u*%s*%08x%08x%08x%08x%08x%08x%08x%08x*%08x%08x%08x%08x%08x%08x%08x%08x",
      SIGNATURE_ETHEREUM_SCRYPT,
      salt.scrypt_N,
      salt.scrypt_r,
      salt.scrypt_p,
      (char *) salt.salt_buf,
      byte_swap_32 (ethereum_scrypt->ciphertext[0]),
      byte_swap_32 (ethereum_scrypt->ciphertext[1]),
      byte_swap_32 (ethereum_scrypt->ciphertext[2]),
      byte_swap_32 (ethereum_scrypt->ciphertext[3]),
      byte_swap_32 (ethereum_scrypt->ciphertext[4]),
      byte_swap_32 (ethereum_scrypt->ciphertext[5]),
      byte_swap_32 (ethereum_scrypt->ciphertext[6]),
      byte_swap_32 (ethereum_scrypt->ciphertext[7]),
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3],
      digest_buf[4],
      digest_buf[5],
      digest_buf[6],
      digest_buf[7]
    );
  }
  else if (hash_mode == 15900)
  {
    dpapimk_t *dpapimks = (dpapimk_t *) esalts_buf;

    dpapimk_t *dpapimk  = &dpapimks[digest_cur];

    u32 version      = 2;
    u32 context      = dpapimk->context;
    u32 rounds       = salt.salt_iter + 1;
    u32 contents_len = dpapimk->contents_len;
    u32 SID_len      = dpapimk->SID_len;
    u32 iv_len       = 32;

    u8 cipher_algorithm[8] = { 0 };
    u8 hash_algorithm[8]   = { 0 };
    u8 SID[512]            = { 0 };
    u8* SID_tmp;

    u32  *ptr_SID          = (u32 *)  dpapimk->SID;
    u32  *ptr_iv           = (u32 *)  dpapimk->iv;
    u32  *ptr_contents     = (u32 *)  dpapimk->contents;

    u32 u32_iv[4];
    u8 iv[32 + 1];

    // convert back SID

    SID_tmp = (u8 *) hcmalloc ((SID_len + 1) * sizeof(u8));

    for (u32 i = 0; i < (SID_len / 4) + 1; i++)
    {
      u8 hex[8] = { 0 };
      u32_to_hex (byte_swap_32 (ptr_SID[i]), hex);

      for (u32 j = 0, k = 0; j < 8; j += 2, k++)
      {
        SID_tmp[i * 4 + k] = hex_to_u8 (&hex[j]);
      }
    }
    // overwrite trailing 0x80
    SID_tmp[SID_len] = 0;

    for (u32 i = 0, j = 0 ; j < SID_len ; i++, j += 2)
    {
      SID[i] = SID_tmp[j];
    }

    hcfree(SID_tmp);

    for (u32 i = 0; i < iv_len / 8; i++)
    {
      u32_iv[i] = byte_swap_32 (ptr_iv[i]);
      u32_to_hex (u32_iv[i], iv +  i * 8);
    }
    iv[32] = 0;

    u32 u32_contents[36];
    u8  contents[288 + 1];

    for (u32 i = 0; i < contents_len / 8; i++)
    {
      u32_contents[i] = byte_swap_32 (ptr_contents[i]);
      u32_to_hex (u32_contents[i], contents +  i * 8);
    }

    contents[288] = 0;

    if (contents_len == 288)
    {
      memcpy(cipher_algorithm, "aes256", strlen("aes256"));
      memcpy(hash_algorithm,   "sha512", strlen("sha512"));
    }

    snprintf (out_buf, out_size, "%s%d*%d*%s*%s*%s*%d*%s*%d*%s",
      SIGNATURE_DPAPIMK,
      version,
      context,
      SID,
      cipher_algorithm,
      hash_algorithm,
      rounds,
      iv,
      contents_len,
      contents);
  }
  else if (hash_mode == 16000)
  {
    memset (tmp_buf, 0, sizeof (tmp_buf));

    // the encoder is a bit too intelligent, it expects the input data in the wrong BOM

    digest_buf[0] = byte_swap_32 (digest_buf[0]);
    digest_buf[1] = byte_swap_32 (digest_buf[1]);

    memcpy (tmp_buf, digest_buf, 8);

    base64_encode (int_to_itoa64, (const u8 *) tmp_buf, 8, (u8 *) ptr_plain);

    snprintf (out_buf, out_size, "%s", ptr_plain + 1);

    out_buf[10] = 0;
  }
  else if (hash_mode == 16100)
  {
    tacacs_plus_t *tacacs_pluss = (tacacs_plus_t *) esalts_buf;

    tacacs_plus_t *tacacs_plus = &tacacs_pluss[digest_cur];

    char ct_data[256 + 1] = { 0 };

    u8 *ct_data_ptr = (u8 *) tacacs_plus->ct_data_buf;

    for (u32 i = 0, j = 0; i < tacacs_plus->ct_data_len; i += 1, j += 2)
    {
      sprintf (ct_data + j, "%02x", ct_data_ptr[i]);
    }

    u8 *session_ptr  = (u8 *) tacacs_plus->session_buf;
    u8 *sequence_ptr = (u8 *) tacacs_plus->sequence_buf;

    snprintf (out_buf, out_size, "%s%02x%02x%02x%02x$%s$%02x%02x",
      SIGNATURE_TACACS_PLUS,
      session_ptr[0],
      session_ptr[1],
      session_ptr[2],
      session_ptr[3],
      ct_data,
      sequence_ptr[0],
      sequence_ptr[1]);
  }
  else if (hash_mode == 16200)
  {
    apple_secure_notes_t *apple_secure_notess = (apple_secure_notes_t *) esalts_buf;

    apple_secure_notes_t *apple_secure_notes = &apple_secure_notess[digest_cur];

    snprintf (out_buf, out_size, "%s*%u*%u*%08x%08x%08x%08x*%08x%08x%08x%08x%08x%08x",
      SIGNATURE_APPLE_SECURE_NOTES,
      apple_secure_notes->Z_PK,
      apple_secure_notes->ZCRYPTOITERATIONCOUNT,
      byte_swap_32 (apple_secure_notes->ZCRYPTOSALT[0]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOSALT[1]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOSALT[2]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOSALT[3]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[0]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[1]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[2]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[3]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[4]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[5]));
  }
  else if (hash_mode == 16300)
  {
    ethereum_presale_t *ethereum_presales = (ethereum_presale_t *) esalts_buf;
    ethereum_presale_t *ethereum_presale  = &ethereum_presales[digest_cur];

    // get the initialization vector:

    u8 encseed[1248 + 1] = { 0 };

    u32 iv[4];

    iv[0] = byte_swap_32 (ethereum_presale->iv[0]);
    iv[1] = byte_swap_32 (ethereum_presale->iv[1]);
    iv[2] = byte_swap_32 (ethereum_presale->iv[2]);
    iv[3] = byte_swap_32 (ethereum_presale->iv[3]);

    u32_to_hex (iv[0], encseed +  0);
    u32_to_hex (iv[1], encseed +  8);
    u32_to_hex (iv[2], encseed + 16);
    u32_to_hex (iv[3], encseed + 24);

    // get the raw enc_seed (without iv):

    u32 *enc_seed_ptr = ethereum_presale->enc_seed;

    for (u32 i = 0, j = 32; i < ethereum_presale->enc_seed_len / 4; i++, j += 8)
    {
      u32 tmp = enc_seed_ptr[i];

      tmp = byte_swap_32 (tmp);

      u32_to_hex (tmp, encseed + j);
    }

    const u32 max_hex_len = (16 + ethereum_presale->enc_seed_len) * 2; // 16 bytes IV + encrypted seed (in hex)

    const u32 max_pos = MIN (sizeof (encseed) - 1, max_hex_len);

    encseed[max_pos] = 0;

    // output:

    snprintf (out_buf, out_size, "%s*%s*%s*%08x%08x%08x%08x",
      SIGNATURE_ETHEREUM_PRESALE,
      encseed,
      (char *) salt.salt_buf,
      digest_buf[0],
      digest_buf[1],
      digest_buf[2],
      digest_buf[3]
    );
  }
  else if (hash_mode == 16400)
  {
    hashinfo_t **hashinfo_ptr = hash_info;
    char        *hash_buf     = hashinfo_ptr[digest_cur]->orighash;

    snprintf (out_buf, out_size, "%s", hash_buf);
  }
  else if (hash_mode == 16500)
  {
    jwt_t *jwts = (jwt_t *) esalts_buf;

    jwt_t *jwt = &jwts[digest_cur];

    if (hashconfig->kern_type == KERN_TYPE_JWT_HS256)
    {
      digest_buf[0] = byte_swap_32 (digest_buf[0]);
      digest_buf[1] = byte_swap_32 (digest_buf[1]);
      digest_buf[2] = byte_swap_32 (digest_buf[2]);
      digest_buf[3] = byte_swap_32 (digest_buf[3]);
      digest_buf[4] = byte_swap_32 (digest_buf[4]);
      digest_buf[5] = byte_swap_32 (digest_buf[5]);
      digest_buf[6] = byte_swap_32 (digest_buf[6]);
      digest_buf[7] = byte_swap_32 (digest_buf[7]);

      memset (tmp_buf, 0, sizeof (tmp_buf));

      memcpy (tmp_buf, digest_buf, 32);

      base64_encode (int_to_base64url, (const u8 *) tmp_buf, 32, (u8 *) ptr_plain);

      ptr_plain[43] = 0;
    }
    else if (hashconfig->kern_type == KERN_TYPE_JWT_HS384)
    {
      digest_buf64[0] = byte_swap_64 (digest_buf64[0]);
      digest_buf64[1] = byte_swap_64 (digest_buf64[1]);
      digest_buf64[2] = byte_swap_64 (digest_buf64[2]);
      digest_buf64[3] = byte_swap_64 (digest_buf64[3]);
      digest_buf64[4] = byte_swap_64 (digest_buf64[4]);
      digest_buf64[5] = byte_swap_64 (digest_buf64[5]);

      memset (tmp_buf, 0, sizeof (tmp_buf));

      memcpy (tmp_buf, digest_buf64, 48);

      base64_encode (int_to_base64url, (const u8 *) tmp_buf, 48, (u8 *) ptr_plain);

      ptr_plain[64] = 0;
    }
    else if (hashconfig->kern_type == KERN_TYPE_JWT_HS512)
    {
      digest_buf64[0] = byte_swap_64 (digest_buf64[0]);
      digest_buf64[1] = byte_swap_64 (digest_buf64[1]);
      digest_buf64[2] = byte_swap_64 (digest_buf64[2]);
      digest_buf64[3] = byte_swap_64 (digest_buf64[3]);
      digest_buf64[4] = byte_swap_64 (digest_buf64[4]);
      digest_buf64[5] = byte_swap_64 (digest_buf64[5]);
      digest_buf64[6] = byte_swap_64 (digest_buf64[6]);
      digest_buf64[7] = byte_swap_64 (digest_buf64[7]);

      memset (tmp_buf, 0, sizeof (tmp_buf));

      memcpy (tmp_buf, digest_buf64, 64);

      base64_encode (int_to_base64url, (const u8 *) tmp_buf, 64, (u8 *) ptr_plain);

      ptr_plain[86] = 0;
    }

    snprintf (out_buf, out_size, "%s.%s",
      (char *) jwt->salt_buf,
      (char *) ptr_plain);
  }
  else if (hash_mode == 16600)
  {
    electrum_wallet_t *electrum_wallets = (electrum_wallet_t *) esalts_buf;

    electrum_wallet_t *electrum_wallet = &electrum_wallets[digest_cur];

    snprintf (out_buf, out_size, "%s%d*%08x%08x%08x%08x*%08x%08x%08x%08x",
      SIGNATURE_ELECTRUM_WALLET,
      electrum_wallet->salt_type,
      byte_swap_32 (electrum_wallet->iv[0]),
      byte_swap_32 (electrum_wallet->iv[1]),
      byte_swap_32 (electrum_wallet->iv[2]),
      byte_swap_32 (electrum_wallet->iv[3]),
      byte_swap_32 (electrum_wallet->encrypted[0]),
      byte_swap_32 (electrum_wallet->encrypted[1]),
      byte_swap_32 (electrum_wallet->encrypted[2]),
      byte_swap_32 (electrum_wallet->encrypted[3]));
  }
  else if (hash_mode == 16700)
  {
    apple_secure_notes_t *apple_secure_notess = (apple_secure_notes_t *) esalts_buf;

    apple_secure_notes_t *apple_secure_notes = &apple_secure_notess[digest_cur];

    snprintf (out_buf, out_size, "%s%u$16$%08x%08x%08x%08x$%u$%08x%08x%08x%08x%08x%08x",
      SIGNATURE_FILEVAULT2,
      apple_secure_notes->Z_PK,
      byte_swap_32 (apple_secure_notes->ZCRYPTOSALT[0]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOSALT[1]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOSALT[2]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOSALT[3]),
      apple_secure_notes->ZCRYPTOITERATIONCOUNT,
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[0]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[1]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[2]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[3]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[4]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[5]));
  }
  else if (hash_mode == 16900)
  {
    ansible_vault_t *ansible_vaults = (ansible_vault_t *) esalts_buf;

    ansible_vault_t *ansible_vault = &ansible_vaults[digest_cur];

    u8 ct_data[16384 + 1] = { 0 };

    u32 *ct_data_ptr = ansible_vault->ct_data_buf;

    for (u32 i = 0, j = 0; i < ansible_vault->ct_data_len / 4; i++, j += 8)
    {
      u32_to_hex (ct_data_ptr[i], ct_data + j);
    }

    snprintf (out_buf, out_size, "%s%u*%u*%08x%08x%08x%08x%08x%08x%08x%08x*%s*%08x%08x%08x%08x%08x%08x%08x%08x",
      SIGNATURE_ANSIBLE_VAULT,
      ansible_vault->cipher,
      ansible_vault->version,
      salt.salt_buf[0],
      salt.salt_buf[1],
      salt.salt_buf[2],
      salt.salt_buf[3],
      salt.salt_buf[4],
      salt.salt_buf[5],
      salt.salt_buf[6],
      salt.salt_buf[7],
      ct_data,
      byte_swap_32 (digest_buf[0]),
      byte_swap_32 (digest_buf[1]),
      byte_swap_32 (digest_buf[2]),
      byte_swap_32 (digest_buf[3]),
      byte_swap_32 (digest_buf[4]),
      byte_swap_32 (digest_buf[5]),
      byte_swap_32 (digest_buf[6]),
      byte_swap_32 (digest_buf[7]));
  }
  else if (hash_mode == 17500 || hash_mode == 17900)
  {
      u32 *ptr = digest_buf;

      snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x",
        ptr[ 1], ptr[ 0],
        ptr[ 3], ptr[ 2],
        ptr[ 5], ptr[ 4],
        ptr[ 7], ptr[ 6],
        ptr[ 9], ptr[ 8],
        ptr[11], ptr[10]
      );
  }
  else if (hash_mode == 17600 || hash_mode == 18000)
  {
      u32 *ptr = digest_buf;

      snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x",
        ptr[ 1], ptr[ 0],
        ptr[ 3], ptr[ 2],
        ptr[ 5], ptr[ 4],
        ptr[ 7], ptr[ 6],
        ptr[ 9], ptr[ 8],
        ptr[11], ptr[10],
        ptr[13], ptr[12],
        ptr[15], ptr[14]
      );
  }
  else if (hash_mode == 18100)
  {
      // salt_buf[1] holds our 32 bit value. salt_buf[0] and salt_buf[1] would be 64 bits.
      // we also need to multiply salt by our step to see the floor of our original timestamp range.
      // again, we will use the default RFC 6238 step of 30.

      u64 tmp_salt_buf = (((u64) (salt.salt_buf[2])) << 32) | ((u64) (salt.salt_buf[3]));

      snprintf (out_buf, out_size, "%06d:%" PRIu64, digest_buf[0], tmp_salt_buf);
  }
  else if (hash_mode == 18200)
  {
    krb5asrep_t *krb5asreps = (krb5asrep_t *) esalts_buf;

    krb5asrep_t *krb5asrep = &krb5asreps[digest_cur];

    char data[5120 * 4 * 2] = { 0 };

    for (u32 i = 0, j = 0; i < krb5asrep->edata2_len; i += 1, j += 2)
    {
      u8 *ptr_edata2 = (u8 *) krb5asrep->edata2;

      sprintf (data + j, "%02x", ptr_edata2[i]);
    }

    snprintf (out_buf, out_size, "%s%s%08x%08x%08x%08x$%s",
      SIGNATURE_KRB5ASREP,
      (char *) krb5asrep->account_info,
      byte_swap_32 (krb5asrep->checksum[0]),
      byte_swap_32 (krb5asrep->checksum[1]),
      byte_swap_32 (krb5asrep->checksum[2]),
      byte_swap_32 (krb5asrep->checksum[3]),
      data);
  }
  else if (hash_mode == 18300)
  {
    apple_secure_notes_t *apple_secure_notess = (apple_secure_notes_t *) esalts_buf;

    apple_secure_notes_t *apple_secure_notes = &apple_secure_notess[digest_cur];

    snprintf (out_buf, out_size, "%s%u$16$%08x%08x%08x%08x$%u$%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x",
      SIGNATURE_FILEVAULT2,
      apple_secure_notes->Z_PK,
      byte_swap_32 (apple_secure_notes->ZCRYPTOSALT[0]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOSALT[1]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOSALT[2]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOSALT[3]),
      apple_secure_notes->ZCRYPTOITERATIONCOUNT,
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[0]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[1]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[2]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[3]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[4]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[5]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[6]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[7]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[8]),
      byte_swap_32 (apple_secure_notes->ZCRYPTOWRAPPEDKEY[9]));
  }
  else if (hash_mode == 99999)
  {
    char *ptr = (char *) digest_buf;

    snprintf (out_buf, out_size, "%s", ptr + 64);
  }
  else
  {
    if (hash_type == HASH_TYPE_MD4)
    {
      snprintf (out_buf, out_size, "%08x%08x%08x%08x",
        digest_buf[0],
        digest_buf[1],
        digest_buf[2],
        digest_buf[3]);
    }
    else if (hash_type == HASH_TYPE_MD5)
    {
      snprintf (out_buf, out_size, "%08x%08x%08x%08x",
        digest_buf[0],
        digest_buf[1],
        digest_buf[2],
        digest_buf[3]);
    }
    else if (hash_type == HASH_TYPE_SHA1)
    {
      snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x",
        digest_buf[0],
        digest_buf[1],
        digest_buf[2],
        digest_buf[3],
        digest_buf[4]);
    }
    else if (hash_type == HASH_TYPE_SHA224)
    {
      snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x%08x%08x",
        digest_buf[0],
        digest_buf[1],
        digest_buf[2],
        digest_buf[3],
        digest_buf[4],
        digest_buf[5],
        digest_buf[6]);
    }
    else if (hash_type == HASH_TYPE_SHA256)
    {
      snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x%08x%08x%08x",
        digest_buf[0],
        digest_buf[1],
        digest_buf[2],
        digest_buf[3],
        digest_buf[4],
        digest_buf[5],
        digest_buf[6],
        digest_buf[7]);
    }
    else if (hash_type == HASH_TYPE_SHA384)
    {
      u32 *ptr = digest_buf;

      snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x",
        ptr[ 1], ptr[ 0],
        ptr[ 3], ptr[ 2],
        ptr[ 5], ptr[ 4],
        ptr[ 7], ptr[ 6],
        ptr[ 9], ptr[ 8],
        ptr[11], ptr[10]);
    }
    else if (hash_type == HASH_TYPE_SHA512)
    {
      u32 *ptr = digest_buf;

      snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x",
        ptr[ 1], ptr[ 0],
        ptr[ 3], ptr[ 2],
        ptr[ 5], ptr[ 4],
        ptr[ 7], ptr[ 6],
        ptr[ 9], ptr[ 8],
        ptr[11], ptr[10],
        ptr[13], ptr[12],
        ptr[15], ptr[14]);
    }
    else if (hash_type == HASH_TYPE_ORACLEH)
    {
      snprintf (out_buf, out_size, "%08X%08X",
        digest_buf[0],
        digest_buf[1]);
    }
    else if (hash_type == HASH_TYPE_CHACHA20)
    {
      u32 *ptr = digest_buf;

      const chacha20_t *chacha20_tmp = (const chacha20_t *) esalts_buf;
      const chacha20_t *chacha20     = &chacha20_tmp[digest_cur];

      snprintf (out_buf, out_size, "%s*%08x%08x*%u*%08x%08x*%08x%08x*%08x%08x",
        SIGNATURE_CHACHA20,
        byte_swap_32 (chacha20->position[0]),
        byte_swap_32 (chacha20->position[1]),
        chacha20->offset,
        byte_swap_32 (chacha20->iv[1]),
        byte_swap_32 (chacha20->iv[0]),
        byte_swap_32 (chacha20->plain[0]),
        byte_swap_32 (chacha20->plain[1]),
        ptr[1],
        ptr[0]);
    }
    else if (hash_type == HASH_TYPE_RIPEMD160)
    {
      snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x",
        digest_buf[0],
        digest_buf[1],
        digest_buf[2],
        digest_buf[3],
        digest_buf[4]);
    }
    else if (hash_type == HASH_TYPE_WHIRLPOOL)
    {
      snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x",
        digest_buf[ 0],
        digest_buf[ 1],
        digest_buf[ 2],
        digest_buf[ 3],
        digest_buf[ 4],
        digest_buf[ 5],
        digest_buf[ 6],
        digest_buf[ 7],
        digest_buf[ 8],
        digest_buf[ 9],
        digest_buf[10],
        digest_buf[11],
        digest_buf[12],
        digest_buf[13],
        digest_buf[14],
        digest_buf[15]);
    }
    else if (hash_type == HASH_TYPE_GOST)
    {
      snprintf (out_buf, out_size, "%08x%08x%08x%08x%08x%08x%08x%08x",
        digest_buf[0],
        digest_buf[1],
        digest_buf[2],
        digest_buf[3],
        digest_buf[4],
        digest_buf[5],
        digest_buf[6],
        digest_buf[7]);
    }
    else if (hash_type == HASH_TYPE_MYSQL)
    {
      snprintf (out_buf, out_size, "%08x%08x",
        digest_buf[0],
        digest_buf[1]);
    }
    else if (hash_type == HASH_TYPE_LOTUS5)
    {
      snprintf (out_buf, out_size, "%08x%08x%08x%08x",
        digest_buf[0],
        digest_buf[1],
        digest_buf[2],
        digest_buf[3]);
    }
    else if (hash_type == HASH_TYPE_LOTUS6)
    {
      digest_buf[ 0] = byte_swap_32 (digest_buf[ 0]);
      digest_buf[ 1] = byte_swap_32 (digest_buf[ 1]);
      digest_buf[ 2] = byte_swap_32 (digest_buf[ 2]);
      digest_buf[ 3] = byte_swap_32 (digest_buf[ 3]);

      char buf[16] = { 0 };

      memcpy (buf + 0, salt.salt_buf, 5);
      memcpy (buf + 5, digest_buf, 9);

      buf[3] -= -4;

      base64_encode (int_to_lotus64, (const u8 *) buf, 14, (u8 *) tmp_buf);

      tmp_buf[18] = salt.salt_buf_pc[7];
      tmp_buf[19] = 0;

      snprintf (out_buf, out_size, "(G%s)", tmp_buf);
    }
    else if (hash_type == HASH_TYPE_LOTUS8)
    {
      char buf[52] = { 0 };

      // salt

      memcpy (buf + 0, salt.salt_buf, 16);

      buf[3] -= -4;

      // iteration

      snprintf (buf + 16, 11, "%010u", salt.salt_iter + 1);

      // chars

      buf[26] = salt.salt_buf_pc[0];
      buf[27] = salt.salt_buf_pc[1];

      // digest

      memcpy (buf + 28, digest_buf, 8);

      base64_encode (int_to_lotus64, (const u8 *) buf, 36, (u8 *) tmp_buf);

      tmp_buf[49] = 0;

      snprintf (out_buf, out_size, "(H%s)", tmp_buf);
    }
  }

}


int hashconfig_init (hashcat_ctx_t *hashcat_ctx)
{

  switch (hashconfig->hash_mode)
  {




    case    12:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_MD5_PWSLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = postgresql_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_MEET_IN_MIDDLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00012;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case    21:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_MD5_SLTPW;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = osc_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00021;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case    22:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_MD5_SLTPW;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = netscreen_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00022;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case    23:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_MD5_SLTPW;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = skype_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00023;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case    30:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_UTF16LE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_MD5_PWUSLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_MEET_IN_MIDDLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00030;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case    40:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14
                                            | OPTS_TYPE_PT_UTF16LE;
                 hashconfig->kern_type      = KERN_TYPE_MD5_SLTPWU;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00040;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case    50:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_HMACMD5_PW;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00050;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case    60:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_HMACMD5_SLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00060;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;



    case   111:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_PWSLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = sha1b64s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00111;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case   112:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15
                                            | OPTS_TYPE_ST_HEX;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_PWSLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = oracles_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00112;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case   120:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_SLTPW;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = sha1s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00120;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case   121:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15
                                            | OPTS_TYPE_ST_LOWER;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_SLTPW;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = sha1s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00121;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case   122:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15
                                            | OPTS_TYPE_ST_HEX;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_SLTPW;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = macos1_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00122;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case   124:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_SLTPW;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = djangosha1_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00124;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case   125:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15
                                            | OPTS_TYPE_ST_HEX;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_SLTPW;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = arubaos_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00125;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case   130:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_UTF16LE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_PWUSLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = sha1s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00130;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case   131:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_UTF16LE
                                            | OPTS_TYPE_PT_UPPER
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15
                                            | OPTS_TYPE_ST_HEX;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_PWUSLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = mssql2000_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00131;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case   132:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_UTF16LE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15
                                            | OPTS_TYPE_ST_HEX;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_PWUSLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = mssql2005_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00132;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case   133:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_UTF16LE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_PWUSLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = peoplesoft_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00133;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case   140:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15
                                            | OPTS_TYPE_PT_UTF16LE;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_SLTPWU;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = sha1s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00140;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case   141:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15
                                            | OPTS_TYPE_PT_UTF16LE
                                            | OPTS_TYPE_ST_BASE64;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_SLTPWU;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = episerver_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00141;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case   150:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_HMACSHA1_PW;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = sha1s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00150;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case   160:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_HMACSHA1_SLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = sha1s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_00160;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1100:  hashconfig->hash_type      = HASH_TYPE_MD4;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14
                                            | OPTS_TYPE_PT_UTF16LE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_UTF16LE
                                            | OPTS_TYPE_ST_LOWER;
                 hashconfig->kern_type      = KERN_TYPE_MD44_PWUSLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md4s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_01100;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1410:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA256_PWSLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = sha256s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 6;
                 hashconfig->st_hash        = ST_HASH_01410;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1411:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA256_PWSLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = sha256b64s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 6;
                 hashconfig->st_hash        = ST_HASH_01411;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1420:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA256_SLTPW;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = sha256s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 6;
                 hashconfig->st_hash        = ST_HASH_01420;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1421:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA256_SLTPW;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = hmailserver_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 6;
                 hashconfig->st_hash        = ST_HASH_01421;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1430:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_UTF16LE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA256_PWUSLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = sha256s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 6;
                 hashconfig->st_hash        = ST_HASH_01430;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1440:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15
                                            | OPTS_TYPE_PT_UTF16LE;
                 hashconfig->kern_type      = KERN_TYPE_SHA256_SLTPWU;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = sha256s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 6;
                 hashconfig->st_hash        = ST_HASH_01440;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1441:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15
                                            | OPTS_TYPE_PT_UTF16LE
                                            | OPTS_TYPE_ST_BASE64;
                 hashconfig->kern_type      = KERN_TYPE_SHA256_SLTPWU;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = episerver4_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 6;
                 hashconfig->st_hash        = ST_HASH_01441;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1450:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_ST_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_HMACSHA256_PW;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = sha256s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 6;
                 hashconfig->st_hash        = ST_HASH_01450;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1460:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_HMACSHA256_SLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = sha256s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 6;
                 hashconfig->st_hash        = ST_HASH_01460;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1600:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PREFERED_THREAD;
                 hashconfig->kern_type      = KERN_TYPE_APR1CRYPT;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5apr1_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_01600;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1710:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA512_PWSLT;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = sha512s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 14;
                 hashconfig->dgst_pos1      = 15;
                 hashconfig->dgst_pos2      = 6;
                 hashconfig->dgst_pos3      = 7;
                 hashconfig->st_hash        = ST_HASH_01710;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1711:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA512_PWSLT;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = sha512b64s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 14;
                 hashconfig->dgst_pos1      = 15;
                 hashconfig->dgst_pos2      = 6;
                 hashconfig->dgst_pos3      = 7;
                 hashconfig->st_hash        = ST_HASH_01711;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1720:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA512_SLTPW;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = sha512s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 14;
                 hashconfig->dgst_pos1      = 15;
                 hashconfig->dgst_pos2      = 6;
                 hashconfig->dgst_pos3      = 7;
                 hashconfig->st_hash        = ST_HASH_01720;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1722:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15
                                            | OPTS_TYPE_ST_HEX;
                 hashconfig->kern_type      = KERN_TYPE_SHA512_SLTPW;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = macos512_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 14;
                 hashconfig->dgst_pos1      = 15;
                 hashconfig->dgst_pos2      = 6;
                 hashconfig->dgst_pos3      = 7;
                 hashconfig->st_hash        = ST_HASH_01722;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1730:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_UTF16LE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA512_PWSLTU;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = sha512s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 14;
                 hashconfig->dgst_pos1      = 15;
                 hashconfig->dgst_pos2      = 6;
                 hashconfig->dgst_pos3      = 7;
                 hashconfig->st_hash        = ST_HASH_01730;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1731:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_UTF16LE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15
                                            | OPTS_TYPE_ST_HEX;
                 hashconfig->kern_type      = KERN_TYPE_SHA512_PWSLTU;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = mssql2012_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 14;
                 hashconfig->dgst_pos1      = 15;
                 hashconfig->dgst_pos2      = 6;
                 hashconfig->dgst_pos3      = 7;
                 hashconfig->st_hash        = ST_HASH_01731;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1740:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15
                                            | OPTS_TYPE_PT_UTF16LE;
                 hashconfig->kern_type      = KERN_TYPE_SHA512_SLTPWU;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = sha512s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 14;
                 hashconfig->dgst_pos1      = 15;
                 hashconfig->dgst_pos2      = 6;
                 hashconfig->dgst_pos3      = 7;
                 hashconfig->st_hash        = ST_HASH_01740;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1750:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_ST_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_HMACSHA512_PW;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = sha512s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 14;
                 hashconfig->dgst_pos1      = 15;
                 hashconfig->dgst_pos2      = 6;
                 hashconfig->dgst_pos3      = 7;
                 hashconfig->st_hash        = ST_HASH_01750;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  1760:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_HMACSHA512_SLT;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = sha512s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 14;
                 hashconfig->dgst_pos1      = 15;
                 hashconfig->dgst_pos2      = 6;
                 hashconfig->dgst_pos3      = 7;
                 hashconfig->st_hash        = ST_HASH_01760;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  2000:  hashconfig->hash_type      = HASH_TYPE_STDOUT;
                 hashconfig->salt_type      = SALT_TYPE_NONE;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_STDOUT;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = NULL;
                 hashconfig->opti_type      = 0;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 0;
                 hashconfig->dgst_pos2      = 0;
                 hashconfig->dgst_pos3      = 0;
                 hashconfig->st_hash        = NULL;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  2100:  hashconfig->hash_type      = HASH_TYPE_DCC2;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_LOWER;
                 hashconfig->kern_type      = KERN_TYPE_DCC2;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = dcc2_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_02100;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  2410:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_MD5ASA;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5asa_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_02410;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  2600:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_VIRTUAL;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14
                                            | OPTS_TYPE_ST_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_MD55_PWSLT1;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5md5_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_02600;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  2611:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14
                                            | OPTS_TYPE_ST_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_MD55_PWSLT1;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_02611;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  2612:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_HEX;
                 hashconfig->kern_type      = KERN_TYPE_MD55_PWSLT1;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = phps_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_02612;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  2711:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14
                                            | OPTS_TYPE_ST_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_MD55_PWSLT2;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = vb30_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_EARLY_SKIP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_02711;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  2811:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_HASH_MD5
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_MD55_SLTPW;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_EARLY_SKIP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_02811;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  3100:  hashconfig->hash_type      = HASH_TYPE_ORACLEH;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_UPPER
                                            | OPTS_TYPE_ST_UPPER;
                 hashconfig->kern_type      = KERN_TYPE_ORACLEH;
                 hashconfig->dgst_size      = DGST_SIZE_4_4; // originally DGST_SIZE_4_2
                 hashconfig->parse_func     = oracleh_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_03100;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  3710:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_MD5_SLT_MD5_PW;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_03710;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  3711:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_MD5_SLT_MD5_PW;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = mediawiki_b_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_03711;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  3800:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_MD5_SLT_PW_SLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_03800;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  3910:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14
                                            | OPTS_TYPE_ST_HASH_MD5
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_MD55_PWSLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_EARLY_SKIP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_03910;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  4010:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_MD5_SLT_MD5_SLT_PW;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_04010;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  4110:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_MD5_SLT_MD5_PW_SLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_04110;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  4300:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_VIRTUAL;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14
                                            | OPTS_TYPE_ST_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_MD5U5_PWSLT1;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5md5_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_04300;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  4400:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_NONE;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_MD5_SHA1;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_NOT_SALTED
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_04400;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  4500:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_NONE;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA11;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = sha1_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_SALTED;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_04500;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  4520:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_SLT_SHA1_PW;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = sha1s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_04520;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  4521:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_SLT_SHA1_PW;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = redmine_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_04521;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  4522:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_SLT_SHA1_PW;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = punbb_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_04522;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  4700:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_NONE;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_MD5;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = sha1_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_NOT_SALTED
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_04700;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  4800:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_MD5_CHAP;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = chap_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_MEET_IN_MIDDLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_04800;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  4900:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_SLT_PW_SLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = sha1s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_04900;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  5200:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_PSAFE3;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = psafe3_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_05200;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  5300:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_IKEPSK_MD5;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = ikepsk_md5_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_05300;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  5400:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_ST_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_IKEPSK_SHA1;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = ikepsk_sha1_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_05400;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  5700:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_NONE;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA256;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = cisco4_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_NOT_SALTED
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 6;
                 hashconfig->st_hash        = ST_HASH_05700;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  5800:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_ANDROIDPIN;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = androidpin_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_05800;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6000:  hashconfig->hash_type      = HASH_TYPE_RIPEMD160;
                 hashconfig->salt_type      = SALT_TYPE_NONE;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_RIPEMD160;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = ripemd160_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06000;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6100:  hashconfig->hash_type      = HASH_TYPE_WHIRLPOOL;
                 hashconfig->salt_type      = SALT_TYPE_NONE;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_WHIRLPOOL;
                 hashconfig->dgst_size      = DGST_SIZE_4_16;
                 hashconfig->parse_func     = whirlpool_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06100;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6211:  hashconfig->hash_type      = HASH_TYPE_RIPEMD160;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCRIPEMD160_XTS512;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = truecrypt_parse_hash_2k;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06211;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6212:  hashconfig->hash_type      = HASH_TYPE_RIPEMD160;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCRIPEMD160_XTS1024;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = truecrypt_parse_hash_2k;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06212;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6213:  hashconfig->hash_type      = HASH_TYPE_RIPEMD160;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCRIPEMD160_XTS1536;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = truecrypt_parse_hash_2k;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06213;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6221:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCSHA512_XTS512;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = truecrypt_parse_hash_1k;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP
                                            | OPTI_TYPE_USES_BITS_64;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06221;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6222:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCSHA512_XTS1024;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = truecrypt_parse_hash_1k;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP
                                            | OPTI_TYPE_USES_BITS_64;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06222;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6223:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCSHA512_XTS1536;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = truecrypt_parse_hash_1k;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP
                                            | OPTI_TYPE_USES_BITS_64;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06223;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6231:  hashconfig->hash_type      = HASH_TYPE_WHIRLPOOL;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCWHIRLPOOL_XTS512;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = truecrypt_parse_hash_1k;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06231;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6232:  hashconfig->hash_type      = HASH_TYPE_WHIRLPOOL;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCWHIRLPOOL_XTS1024;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = truecrypt_parse_hash_1k;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06232;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6233:  hashconfig->hash_type      = HASH_TYPE_WHIRLPOOL;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCWHIRLPOOL_XTS1536;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = truecrypt_parse_hash_1k;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06233;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6241:  hashconfig->hash_type      = HASH_TYPE_RIPEMD160;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE
                                            | OPTS_TYPE_KEYBOARD_MAPPING;
                 hashconfig->kern_type      = KERN_TYPE_TCRIPEMD160_XTS512;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = truecrypt_parse_hash_1k;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06241;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6242:  hashconfig->hash_type      = HASH_TYPE_RIPEMD160;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE
                                            | OPTS_TYPE_KEYBOARD_MAPPING;
                 hashconfig->kern_type      = KERN_TYPE_TCRIPEMD160_XTS1024;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = truecrypt_parse_hash_1k;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06242;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6243:  hashconfig->hash_type      = HASH_TYPE_RIPEMD160;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE
                                            | OPTS_TYPE_KEYBOARD_MAPPING;
                 hashconfig->kern_type      = KERN_TYPE_TCRIPEMD160_XTS1536;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = truecrypt_parse_hash_1k;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06243;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6300:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PREFERED_THREAD;
                 hashconfig->kern_type      = KERN_TYPE_MD5AIX;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = md5aix_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06300;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6400:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_SHA256AIX;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = sha256aix_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06400;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6500:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_SHA512AIX;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = sha512aix_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP
                                            | OPTI_TYPE_USES_BITS_64;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06500;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6600:  hashconfig->hash_type      = HASH_TYPE_AES;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_AGILEKEY;
                 hashconfig->dgst_size      = DGST_SIZE_4_5; // because kernel uses _SHA1_
                 hashconfig->parse_func     = agilekey_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06600;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6700:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_SHA1AIX;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = sha1aix_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06700;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6800:  hashconfig->hash_type      = HASH_TYPE_AES;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_LASTPASS;
                 hashconfig->dgst_size      = DGST_SIZE_4_8; // because kernel uses _SHA256_
                 hashconfig->parse_func     = lastpass_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06800;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  6900:  hashconfig->hash_type      = HASH_TYPE_GOST;
                 hashconfig->salt_type      = SALT_TYPE_NONE;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_GOST;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = gost_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_06900;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  7000:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_FORTIGATE;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = fortigate_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_07000;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  7100:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_PBKDF2_SHA512;
                 hashconfig->dgst_size      = DGST_SIZE_8_16;
                 hashconfig->parse_func     = sha512macos_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_07100;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  7200:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_PBKDF2_SHA512;
                 hashconfig->dgst_size      = DGST_SIZE_8_16;
                 hashconfig->parse_func     = sha512grub_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_07200;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  7300:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_RAKP;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = rakp_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_07300;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  7400:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_SHA256CRYPT;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = sha256crypt_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_07400;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  7700:  hashconfig->hash_type      = HASH_TYPE_SAPB;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_UPPER
                                            | OPTS_TYPE_ST_UPPER;
                 hashconfig->kern_type      = KERN_TYPE_SAPB;
                 hashconfig->dgst_size      = DGST_SIZE_4_4; // originally DGST_SIZE_4_2
                 hashconfig->parse_func     = sapb_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_07700;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  7701:  hashconfig->hash_type      = HASH_TYPE_SAPB;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_UPPER
                                            | OPTS_TYPE_ST_UPPER;
                 hashconfig->kern_type      = KERN_TYPE_SAPB_MANGLED;
                 hashconfig->dgst_size      = DGST_SIZE_4_4; // originally DGST_SIZE_4_2
                 hashconfig->parse_func     = sapb_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_07701;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  7800:  hashconfig->hash_type      = HASH_TYPE_SAPG;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_UPPER;
                 hashconfig->kern_type      = KERN_TYPE_SAPG;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = sapg_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_07800;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  7801:  hashconfig->hash_type      = HASH_TYPE_SAPG;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_UPPER;
                 hashconfig->kern_type      = KERN_TYPE_SAPG_MANGLED;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = sapg_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_07801;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  7900:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_DRUPAL7;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = drupal7_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_USES_BITS_64;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_07900;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  8000:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_UTF16LE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_HEX;
                 hashconfig->kern_type      = KERN_TYPE_SYBASEASE;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = sybasease_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 6;
                 hashconfig->st_hash        = ST_HASH_08000;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  8100:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE;
                 hashconfig->kern_type      = KERN_TYPE_NETSCALER;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = netscaler_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_08100;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  8200:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_CLOUDKEY;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = cloudkey_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_08200;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  8300:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_ST_HEX
                                            | OPTS_TYPE_ST_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_NSEC3;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = nsec3_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_08300;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  8400:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_WBB3;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = wbb3_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_08400;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  8500:  hashconfig->hash_type      = HASH_TYPE_DESRACF;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_UPPER;
                 hashconfig->kern_type      = KERN_TYPE_RACF;
                 hashconfig->dgst_size      = DGST_SIZE_4_4; // originally DGST_SIZE_4_2
                 hashconfig->parse_func     = racf_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_PERMUT;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_08500;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  8600:  hashconfig->hash_type      = HASH_TYPE_LOTUS5;
                 hashconfig->salt_type      = SALT_TYPE_NONE;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_LOTUS5;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = lotus5_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_NOT_SALTED
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_08600;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  8700:  hashconfig->hash_type      = HASH_TYPE_LOTUS6;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_LOTUS6;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = lotus6_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_08700;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  8800:  hashconfig->hash_type      = HASH_TYPE_ANDROIDFDE;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_ANDROIDFDE;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = androidfde_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_08800;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  8900:  hashconfig->hash_type      = HASH_TYPE_SCRYPT;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_SCRYPT;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = scrypt_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = NULL;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  9000:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_PSAFE2;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = psafe2_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_09000;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  9100:  hashconfig->hash_type      = HASH_TYPE_LOTUS8;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_LOTUS8;
                 hashconfig->dgst_size      = DGST_SIZE_4_4; // originally DGST_SIZE_4_2
                 hashconfig->parse_func     = lotus8_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_09100;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  9200:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_PBKDF2_SHA256;
                 hashconfig->dgst_size      = DGST_SIZE_4_32;
                 hashconfig->parse_func     = cisco8_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_09200;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  9300:  hashconfig->hash_type      = HASH_TYPE_SCRYPT;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_SCRYPT;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = cisco9_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_09300;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  9400:  hashconfig->hash_type      = HASH_TYPE_OFFICE2007;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_OFFICE2007;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = office2007_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_09400;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  9500:  hashconfig->hash_type      = HASH_TYPE_OFFICE2010;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_OFFICE2010;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = office2010_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_09500;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  9600:  hashconfig->hash_type      = HASH_TYPE_OFFICE2013;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_DEEP_COMP_KERNEL;
                 hashconfig->kern_type      = KERN_TYPE_OFFICE2013;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = office2013_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_09600;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  9700:  hashconfig->hash_type      = HASH_TYPE_OLDOFFICE01;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_UTF16LE;
                 hashconfig->kern_type      = KERN_TYPE_OLDOFFICE01;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = oldoffice01_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_09700;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  9710:  hashconfig->hash_type      = HASH_TYPE_OLDOFFICE01;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ALWAYS_HEXIFY;
                 hashconfig->kern_type      = KERN_TYPE_OLDOFFICE01CM1;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = oldoffice01cm1_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_09710;
                 hashconfig->st_pass        = ST_PASS_BIN_09710;
                 break;

    case  9720:  hashconfig->hash_type      = HASH_TYPE_OLDOFFICE01;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_UTF16LE
                                            | OPTS_TYPE_PT_NEVERCRACK;
                 hashconfig->kern_type      = KERN_TYPE_OLDOFFICE01CM2;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = oldoffice01cm2_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_09720;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  9800:  hashconfig->hash_type      = HASH_TYPE_OLDOFFICE34;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_UTF16LE;
                 hashconfig->kern_type      = KERN_TYPE_OLDOFFICE34;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = oldoffice34_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_09800;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  9810:  hashconfig->hash_type      = HASH_TYPE_OLDOFFICE34;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ALWAYS_HEXIFY;
                 hashconfig->kern_type      = KERN_TYPE_OLDOFFICE34CM1;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = oldoffice34cm1_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_09810;
                 hashconfig->st_pass        = ST_PASS_BIN_09810;
                 break;

    case  9820:  hashconfig->hash_type      = HASH_TYPE_OLDOFFICE34;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_UTF16LE
                                            | OPTS_TYPE_PT_NEVERCRACK;
                 hashconfig->kern_type      = KERN_TYPE_OLDOFFICE34CM2;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = oldoffice34cm2_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_09820;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case  9900:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_NONE;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_RADMIN2;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = radmin2_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_NOT_SALTED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_09900;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 10000:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_PBKDF2_SHA256;
                 hashconfig->dgst_size      = DGST_SIZE_4_32;
                 hashconfig->parse_func     = djangopbkdf2_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_10000;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 10100:  hashconfig->hash_type      = HASH_TYPE_SIPHASH;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_SIPHASH;
                 hashconfig->dgst_size      = DGST_SIZE_4_4; // originally DGST_SIZE_4_2
                 hashconfig->parse_func     = siphash_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_10100;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 10200:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_HMACMD5_PW;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = crammd5_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_10200;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 10300:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_SAPH_SHA1;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = saph_sha1_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_10300;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 10400:  hashconfig->hash_type      = HASH_TYPE_PDFU16;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_PDF11;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = pdf11_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_10400;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 10410:  hashconfig->hash_type      = HASH_TYPE_PDFU16;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ALWAYS_HEXIFY;
                 hashconfig->kern_type      = KERN_TYPE_PDF11CM1;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = pdf11cm1_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_10410;
                 hashconfig->st_pass        = ST_PASS_BIN_10410;
                 break;

    case 10420:  hashconfig->hash_type      = HASH_TYPE_PDFU16;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_PDF11CM2;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = pdf11cm2_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_10420;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 10500:  hashconfig->hash_type      = HASH_TYPE_PDFU16;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_PDF14;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = pdf14_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_10500;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 10600:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15
                                            | OPTS_TYPE_HASH_COPY;
                 hashconfig->kern_type      = KERN_TYPE_SHA256_PWSLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = pdf17l3_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 6;
                 hashconfig->st_hash        = ST_HASH_10600;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 10700:  hashconfig->hash_type      = HASH_TYPE_PDFU32;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_HASH_COPY;
                 hashconfig->kern_type      = KERN_TYPE_PDF17L8;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = pdf17l8_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_10700;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 10900:  hashconfig->hash_type      = HASH_TYPE_PBKDF2_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_BASE64
                                            | OPTS_TYPE_HASH_COPY;
                 hashconfig->kern_type      = KERN_TYPE_PBKDF2_SHA256;
                 hashconfig->dgst_size      = DGST_SIZE_4_32;
                 hashconfig->parse_func     = pbkdf2_sha256_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_10900;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 11000:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_PRESTASHOP;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = prestashop_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_11000;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 11100:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_POSTGRESQL_AUTH;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = postgresql_auth_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_11100;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 11200:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_ST_HEX;
                 hashconfig->kern_type      = KERN_TYPE_MYSQL_AUTH;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = mysql_auth_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_EARLY_SKIP;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_11200;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 11300:  hashconfig->hash_type      = HASH_TYPE_BITCOIN_WALLET;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_HEX
                                            | OPTS_TYPE_ST_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_BITCOIN_WALLET;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = bitcoin_wallet_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_11300;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 11400:  hashconfig->hash_type      = HASH_TYPE_MD5;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_HASH_COPY;
                 hashconfig->kern_type      = KERN_TYPE_SIP_AUTH;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = sip_auth_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_11400;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 11500:  hashconfig->hash_type      = HASH_TYPE_CRC32;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_GENERATE_LE
                                            | OPTS_TYPE_ST_HEX;
                 hashconfig->kern_type      = KERN_TYPE_CRC32;
                 hashconfig->dgst_size      = DGST_SIZE_4_4; // originally DGST_SIZE_4_2
                 hashconfig->parse_func     = crc32_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_11500;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 11600:  hashconfig->hash_type      = HASH_TYPE_AES;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_HOOK23;
                 hashconfig->kern_type      = KERN_TYPE_SEVEN_ZIP;
                 hashconfig->dgst_size      = DGST_SIZE_4_4; // originally DGST_SIZE_4_2
                 hashconfig->parse_func     = seven_zip_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_11600;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 11700:  hashconfig->hash_type      = HASH_TYPE_STREEBOG_256;
                 hashconfig->salt_type      = SALT_TYPE_NONE;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD01;
                 hashconfig->kern_type      = KERN_TYPE_STREEBOG_256;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = streebog_256_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_11700;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 11750:  hashconfig->hash_type      = HASH_TYPE_STREEBOG_256;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD01;
                 hashconfig->kern_type      = KERN_TYPE_HMAC_STREEBOG_256_PW;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = streebog_256s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_11750;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 11760:  hashconfig->hash_type      = HASH_TYPE_STREEBOG_256;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD01;
                 hashconfig->kern_type      = KERN_TYPE_HMAC_STREEBOG_256_SLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = streebog_256s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_11760;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 11800:  hashconfig->hash_type      = HASH_TYPE_STREEBOG_512;
                 hashconfig->salt_type      = SALT_TYPE_NONE;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD01;
                 hashconfig->kern_type      = KERN_TYPE_STREEBOG_512;
                 hashconfig->dgst_size      = DGST_SIZE_4_16;
                 hashconfig->parse_func     = streebog_512_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_11800;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 11850:  hashconfig->hash_type      = HASH_TYPE_STREEBOG_512;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD01;
                 hashconfig->kern_type      = KERN_TYPE_HMAC_STREEBOG_512_PW;
                 hashconfig->dgst_size      = DGST_SIZE_4_16;
                 hashconfig->parse_func     = streebog_512s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_11850;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 11860:  hashconfig->hash_type      = HASH_TYPE_STREEBOG_512;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD01;
                 hashconfig->kern_type      = KERN_TYPE_HMAC_STREEBOG_512_SLT;
                 hashconfig->dgst_size      = DGST_SIZE_4_16;
                 hashconfig->parse_func     = streebog_512s_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_11860;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 11900:  hashconfig->hash_type      = HASH_TYPE_PBKDF2_MD5;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_BASE64
                                            | OPTS_TYPE_HASH_COPY;
                 hashconfig->kern_type      = KERN_TYPE_PBKDF2_MD5;
                 hashconfig->dgst_size      = DGST_SIZE_4_32;
                 hashconfig->parse_func     = pbkdf2_md5_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_11900;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 12001:  hashconfig->hash_type      = HASH_TYPE_PBKDF2_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_HASH_COPY;
                 hashconfig->kern_type      = KERN_TYPE_PBKDF2_SHA1;
                 hashconfig->dgst_size      = DGST_SIZE_4_32;
                 hashconfig->parse_func     = atlassian_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_12001;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 12100:  hashconfig->hash_type      = HASH_TYPE_PBKDF2_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_BASE64
                                            | OPTS_TYPE_HASH_COPY;
                 hashconfig->kern_type      = KERN_TYPE_PBKDF2_SHA512;
                 hashconfig->dgst_size      = DGST_SIZE_8_16;
                 hashconfig->parse_func     = pbkdf2_sha512_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_12100;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 12200:  hashconfig->hash_type      = HASH_TYPE_ECRYPTFS;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_ECRYPTFS;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = ecryptfs_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_12200;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 12300:  hashconfig->hash_type      = HASH_TYPE_ORACLET;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_ORACLET;
                 hashconfig->dgst_size      = DGST_SIZE_8_16;
                 hashconfig->parse_func     = oraclet_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_12300;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 12400:  hashconfig->hash_type      = HASH_TYPE_BSDICRYPT;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_BSDICRYPT;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = bsdicrypt_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_PERMUT;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_12400;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 12500:  hashconfig->hash_type      = HASH_TYPE_RAR3HP;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_RAR3;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = rar3hp_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_12500;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 12600:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_CF10;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = cf10_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 6;
                 hashconfig->st_hash        = ST_HASH_12600;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 12700:  hashconfig->hash_type      = HASH_TYPE_AES;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_HASH_COPY;
                 hashconfig->kern_type      = KERN_TYPE_MYWALLET;
                 hashconfig->dgst_size      = DGST_SIZE_4_5; // because kernel uses _SHA1_
                 hashconfig->parse_func     = mywallet_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_12700;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 12800:  hashconfig->hash_type      = HASH_TYPE_PBKDF2_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_MS_DRSR;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = ms_drsr_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_12800;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 12900:  hashconfig->hash_type      = HASH_TYPE_PBKDF2_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_ANDROIDFDE_SAMSUNG;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = androidfde_samsung_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_12900;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13000:  hashconfig->hash_type      = HASH_TYPE_PBKDF2_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_RAR5;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = rar5_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13000;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13100:  hashconfig->hash_type      = HASH_TYPE_KRB5TGS;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_KRB5TGS;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = krb5tgs_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13100;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13200:  hashconfig->hash_type      = HASH_TYPE_AES;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_AXCRYPT;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = axcrypt_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13200;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13300:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_NONE;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_SHA1_AXCRYPT;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = sha1axcrypt_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_NOT_SALTED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 3;
                 hashconfig->dgst_pos3      = 2;
                 hashconfig->st_hash        = ST_HASH_13300;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13400:  hashconfig->hash_type      = HASH_TYPE_AES;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PREFERED_THREAD;
                 hashconfig->kern_type      = KERN_TYPE_KEEPASS;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = keepass_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13400;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13500:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_UTF16LE
                                            | OPTS_TYPE_PT_ADD80;
                 hashconfig->kern_type      = KERN_TYPE_PSTOKEN;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = pstoken_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_PREPENDED_SALT
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_13500;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13600:  hashconfig->hash_type      = HASH_TYPE_PBKDF2_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_ZIP2;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = zip2_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13600;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13711:  hashconfig->hash_type      = HASH_TYPE_RIPEMD160;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCRIPEMD160_XTS512;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = veracrypt_parse_hash_655331;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13711;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13712:  hashconfig->hash_type      = HASH_TYPE_RIPEMD160;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCRIPEMD160_XTS1024;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = veracrypt_parse_hash_655331;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13712;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13713:  hashconfig->hash_type      = HASH_TYPE_RIPEMD160;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCRIPEMD160_XTS1536;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = veracrypt_parse_hash_655331;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13713;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13721:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCSHA512_XTS512;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = veracrypt_parse_hash_500000;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP
                                            | OPTI_TYPE_USES_BITS_64;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13721;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13722:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCSHA512_XTS1024;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = veracrypt_parse_hash_500000;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP
                                            | OPTI_TYPE_USES_BITS_64;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13722;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13723:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCSHA512_XTS1536;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = veracrypt_parse_hash_500000;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP
                                            | OPTI_TYPE_USES_BITS_64;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13723;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13731:  hashconfig->hash_type      = HASH_TYPE_WHIRLPOOL;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCWHIRLPOOL_XTS512;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = veracrypt_parse_hash_500000;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13731;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13732:  hashconfig->hash_type      = HASH_TYPE_WHIRLPOOL;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCWHIRLPOOL_XTS1024;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = veracrypt_parse_hash_500000;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13732;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13733:  hashconfig->hash_type      = HASH_TYPE_WHIRLPOOL;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_TCWHIRLPOOL_XTS1536;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = veracrypt_parse_hash_500000;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13733;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13741:  hashconfig->hash_type      = HASH_TYPE_RIPEMD160;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE
                                            | OPTS_TYPE_KEYBOARD_MAPPING;
                 hashconfig->kern_type      = KERN_TYPE_TCRIPEMD160_XTS512;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = veracrypt_parse_hash_327661;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = NULL;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13742:  hashconfig->hash_type      = HASH_TYPE_RIPEMD160;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE
                                            | OPTS_TYPE_KEYBOARD_MAPPING;
                 hashconfig->kern_type      = KERN_TYPE_TCRIPEMD160_XTS1024;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = veracrypt_parse_hash_327661;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = NULL;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13743:  hashconfig->hash_type      = HASH_TYPE_RIPEMD160;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE
                                            | OPTS_TYPE_KEYBOARD_MAPPING;
                 hashconfig->kern_type      = KERN_TYPE_TCRIPEMD160_XTS1536;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = veracrypt_parse_hash_327661;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = NULL;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13751:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_VCSHA256_XTS512;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = veracrypt_parse_hash_500000;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13751;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13752:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_VCSHA256_XTS1024;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = veracrypt_parse_hash_500000;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13752;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13753:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_VCSHA256_XTS1536;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = veracrypt_parse_hash_500000;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13753;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13761:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE
                                            | OPTS_TYPE_KEYBOARD_MAPPING;
                 hashconfig->kern_type      = KERN_TYPE_VCSHA256_XTS512;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = veracrypt_parse_hash_200000;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = NULL;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13762:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE
                                            | OPTS_TYPE_KEYBOARD_MAPPING;
                 hashconfig->kern_type      = KERN_TYPE_VCSHA256_XTS1024;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = veracrypt_parse_hash_200000;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = NULL;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13763:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE
                                            | OPTS_TYPE_KEYBOARD_MAPPING;
                 hashconfig->kern_type      = KERN_TYPE_VCSHA256_XTS1536;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = veracrypt_parse_hash_200000;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = NULL;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13771:  hashconfig->hash_type      = HASH_TYPE_STREEBOG_512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_VCSBOG512_XTS512;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = veracrypt_parse_hash_500000;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP
                                            | OPTI_TYPE_USES_BITS_64;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13771;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13772:  hashconfig->hash_type      = HASH_TYPE_STREEBOG_512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_VCSBOG512_XTS1024;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = veracrypt_parse_hash_500000;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP
                                            | OPTI_TYPE_USES_BITS_64;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13772;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13773:  hashconfig->hash_type      = HASH_TYPE_STREEBOG_512;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = KERN_TYPE_VCSBOG512_XTS1536;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = veracrypt_parse_hash_500000;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP
                                            | OPTI_TYPE_USES_BITS_64;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_13773;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13800:  hashconfig->hash_type      = HASH_TYPE_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_UTF16LE;
                 hashconfig->kern_type      = KERN_TYPE_WIN8PHONE;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = win8phone_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 6;
                 hashconfig->st_hash        = ST_HASH_13800;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 13900:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_OPENCART;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = opencart_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_13900;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 14400:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_SHA1CX;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = sha1cx_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_EARLY_SKIP;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_14400;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 14600:  hashconfig->hash_type      = HASH_TYPE_LUKS;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_BINARY_HASHFILE;
                 hashconfig->kern_type      = (u32) -1; // this gets overwritten from within parser
                 hashconfig->dgst_size      = DGST_SIZE_4_16;
                 hashconfig->parse_func     = NULL; // luks_parse_hash is kind of unconvetional
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = NULL;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 14700:  hashconfig->hash_type      = HASH_TYPE_ITUNES_BACKUP_9;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_GENERATE_LE
                                            | OPTS_TYPE_ST_HEX;
                 hashconfig->kern_type      = KERN_TYPE_ITUNES_BACKUP_9;
                 hashconfig->dgst_size      = DGST_SIZE_4_4; // we actually do not have a digest
                 hashconfig->parse_func     = itunes_backup_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_14700;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 14800:  hashconfig->hash_type      = HASH_TYPE_ITUNES_BACKUP_10;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_GENERATE_LE
                                            | OPTS_TYPE_ST_HEX
                                            | OPTS_TYPE_INIT2
                                            | OPTS_TYPE_LOOP2;
                 hashconfig->kern_type      = KERN_TYPE_ITUNES_BACKUP_10;
                 hashconfig->dgst_size      = DGST_SIZE_4_4; // we actually do not have a digest
                 hashconfig->parse_func     = itunes_backup_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_14800;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 14900:  hashconfig->hash_type      = HASH_TYPE_SKIP32;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_GENERATE_LE
                                            | OPTS_TYPE_PT_NEVERCRACK;
                 hashconfig->kern_type      = KERN_TYPE_SKIP32;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = skip32_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_14900;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_EXCL3;
                 break;

    case 15000:  hashconfig->hash_type      = HASH_TYPE_SHA512;
                 hashconfig->salt_type      = SALT_TYPE_GENERIC;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE; // OPTS_TYPE_ST_ADD80 added within kernel
                 hashconfig->kern_type      = KERN_TYPE_FILEZILLA_SERVER;
                 hashconfig->dgst_size      = DGST_SIZE_8_8;
                 hashconfig->parse_func     = filezilla_server_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 14;
                 hashconfig->dgst_pos1      = 15;
                 hashconfig->dgst_pos2      = 6;
                 hashconfig->dgst_pos3      = 7;
                 hashconfig->st_hash        = ST_HASH_15000;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 15100:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_NETBSD_SHA1CRYPT;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = netbsd_sha1crypt_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_15100;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 15200:  hashconfig->hash_type      = HASH_TYPE_AES;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_HASH_COPY;
                 hashconfig->kern_type      = KERN_TYPE_MYWALLET;
                 hashconfig->dgst_size      = DGST_SIZE_4_5; // because kernel uses _SHA1_
                 hashconfig->parse_func     = mywalletv2_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_15200;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 15300:  hashconfig->hash_type      = HASH_TYPE_DPAPIMK;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_DPAPIMK_V1;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = dpapimk_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_15300;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 15400:  hashconfig->hash_type      = HASH_TYPE_CHACHA20;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_CHACHA20;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = chacha20_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_USES_BITS_32
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_15400;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 15500:  hashconfig->hash_type      = HASH_TYPE_JKS_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_UTF16BE
                                            | OPTS_TYPE_ST_ADD80
                                            | OPTS_TYPE_ST_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_JKS_SHA1;
                 hashconfig->dgst_size      = DGST_SIZE_4_5;
                 hashconfig->parse_func     = jks_sha1_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_APPENDED_SALT;
                 hashconfig->dgst_pos0      = 3;
                 hashconfig->dgst_pos1      = 4;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_15500;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 15600:  hashconfig->hash_type      = HASH_TYPE_PBKDF2_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_HEX;
                 hashconfig->kern_type      = KERN_TYPE_ETHEREUM_PBKDF2;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = ethereum_pbkdf2_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_15600;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 15700:  hashconfig->hash_type      = HASH_TYPE_SCRYPT;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_HEX;
                 hashconfig->kern_type      = KERN_TYPE_ETHEREUM_SCRYPT;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = ethereum_scrypt_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = NULL;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 15900:  hashconfig->hash_type      = HASH_TYPE_DPAPIMK;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PREFERED_THREAD;
                 hashconfig->kern_type      = KERN_TYPE_DPAPIMK_V2;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = dpapimk_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_15900;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 16000:  hashconfig->hash_type      = HASH_TYPE_DESCRYPT;
                 hashconfig->salt_type      = SALT_TYPE_NONE;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_TRIPCODE;
                 hashconfig->dgst_size      = DGST_SIZE_4_4; // originally DGST_SIZE_4_2
                 hashconfig->parse_func     = tripcode_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_PERMUT;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_16000;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 16100:  hashconfig->hash_type      = HASH_TYPE_TACACS_PLUS;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_TACACS_PLUS;
                 hashconfig->dgst_size      = DGST_SIZE_4_4; // originally DGST_SIZE_4_2
                 hashconfig->parse_func     = tacacs_plus_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_16100;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 16200:  hashconfig->hash_type      = HASH_TYPE_APPLE_SECURE_NOTES;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_APPLE_SECURE_NOTES;
                 hashconfig->dgst_size      = DGST_SIZE_4_4; // originally DGST_SIZE_4_2
                 hashconfig->parse_func     = apple_secure_notes_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_16200;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 16300:  hashconfig->hash_type      = HASH_TYPE_PBKDF2_SHA256;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_ST_HEX;
                 hashconfig->kern_type      = KERN_TYPE_ETHEREUM_PRESALE;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = ethereum_presale_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_16300;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 16400:  hashconfig->hash_type      = HASH_TYPE_CRAM_MD5_DOVECOT;
                 hashconfig->salt_type      = SALT_TYPE_NONE;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_HASH_COPY;
                 hashconfig->kern_type      = KERN_TYPE_CRAM_MD5_DOVECOT;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = crammd5_dovecot_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_MEET_IN_MIDDLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_16400;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 16500:  hashconfig->hash_type      = HASH_TYPE_JWT;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE;
                 hashconfig->kern_type      = (u32) -1; // this gets overwritten from within parser
                 hashconfig->dgst_size      = DGST_SIZE_4_16;
                 hashconfig->parse_func     = jwt_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = NULL;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 16600:  hashconfig->hash_type      = HASH_TYPE_ELECTRUM_WALLET;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15;
                 hashconfig->kern_type      = KERN_TYPE_ELECTRUM_WALLET13;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = electrum_wallet13_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_16600;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 16700:  hashconfig->hash_type      = HASH_TYPE_APPLE_SECURE_NOTES;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_APPLE_SECURE_NOTES;
                 hashconfig->dgst_size      = DGST_SIZE_4_4; // originally DGST_SIZE_4_2
                 hashconfig->parse_func     = filevault2_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_16700;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 16900:  hashconfig->hash_type      = HASH_TYPE_ANSIBLE_VAULT;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_ANSIBLE_VAULT;
                 hashconfig->dgst_size      = DGST_SIZE_4_8;
                 hashconfig->parse_func     = ansible_vault_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_16900;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 17500:  hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD06;
                 hashconfig->kern_type      = KERN_TYPE_SHA3_384;
                 hashconfig->dgst_size      = DGST_SIZE_8_25;
                 hashconfig->parse_func     = keccak_384_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 6;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 4;
                 hashconfig->dgst_pos3      = 5;
                 hashconfig->st_hash        = ST_HASH_17500;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 17600:  hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD06;
                 hashconfig->kern_type      = KERN_TYPE_SHA3_512;
                 hashconfig->dgst_size      = DGST_SIZE_8_25;
                 hashconfig->parse_func     = keccak_512_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 6;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 4;
                 hashconfig->dgst_pos3      = 5;
                 hashconfig->st_hash        = ST_HASH_17600;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 17900:  hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD01;
                 hashconfig->kern_type      = KERN_TYPE_KECCAK_384;
                 hashconfig->dgst_size      = DGST_SIZE_8_25;
                 hashconfig->parse_func     = keccak_384_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 6;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 4;
                 hashconfig->dgst_pos3      = 5;
                 hashconfig->st_hash        = ST_HASH_17900;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 18000:  hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD01;
                 hashconfig->kern_type      = KERN_TYPE_KECCAK_512;
                 hashconfig->dgst_size      = DGST_SIZE_8_25;
                 hashconfig->parse_func     = keccak_512_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_USES_BITS_64
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 6;
                 hashconfig->dgst_pos1      = 7;
                 hashconfig->dgst_pos2      = 4;
                 hashconfig->dgst_pos3      = 5;
                 hashconfig->st_hash        = ST_HASH_18000;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 18100:  hashconfig->hash_type      = HASH_TYPE_SHA1;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_BE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS15
                                            | OPTS_TYPE_PT_NEVERCRACK;
                 hashconfig->kern_type      = KERN_TYPE_TOTP_HMACSHA1;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = totp_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_18100;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 18200:  hashconfig->hash_type      = HASH_TYPE_KRB5ASREP;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_KRB5ASREP;
                 hashconfig->dgst_size      = DGST_SIZE_4_4;
                 hashconfig->parse_func     = krb5asrep_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_NOT_ITERATED;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_18200;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 18300:  hashconfig->hash_type      = HASH_TYPE_APPLE_SECURE_NOTES;
                 hashconfig->salt_type      = SALT_TYPE_EMBEDDED;
                 hashconfig->attack_exec    = ATTACK_EXEC_OUTSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE;
                 hashconfig->kern_type      = KERN_TYPE_APFS;
                 hashconfig->dgst_size      = DGST_SIZE_4_4; // originally DGST_SIZE_4_2
                 hashconfig->parse_func     = apfs_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_SLOW_HASH_SIMD_LOOP;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 1;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 3;
                 hashconfig->st_hash        = ST_HASH_18300;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    case 99999:  hashconfig->hash_type      = HASH_TYPE_PLAINTEXT;
                 hashconfig->salt_type      = SALT_TYPE_NONE;
                 hashconfig->attack_exec    = ATTACK_EXEC_INSIDE_KERNEL;
                 hashconfig->opts_type      = OPTS_TYPE_PT_GENERATE_LE
                                            | OPTS_TYPE_PT_ADD80
                                            | OPTS_TYPE_PT_ADDBITS14;
                 hashconfig->kern_type      = KERN_TYPE_MD4;
                 hashconfig->dgst_size      = DGST_SIZE_4_32; // originally DGST_SIZE_4_2
                 hashconfig->parse_func     = plaintext_parse_hash;
                 hashconfig->opti_type      = OPTI_TYPE_ZERO_BYTE
                                            | OPTI_TYPE_PRECOMPUTE_INIT
                                            | OPTI_TYPE_PRECOMPUTE_MERKLE
                                            | OPTI_TYPE_MEET_IN_MIDDLE
                                            | OPTI_TYPE_EARLY_SKIP
                                            | OPTI_TYPE_NOT_ITERATED
                                            | OPTI_TYPE_NOT_SALTED
                                            | OPTI_TYPE_RAW_HASH;
                 hashconfig->dgst_pos0      = 0;
                 hashconfig->dgst_pos1      = 3;
                 hashconfig->dgst_pos2      = 2;
                 hashconfig->dgst_pos3      = 1;
                 hashconfig->st_hash        = ST_HASH_99999;
                 hashconfig->st_pass        = ST_PASS_HASHCAT_PLAIN;
                 break;

    default:     return -1;
  }

  // esalt_size

  switch (hashconfig->hash_mode)
  {
    case  5300: hashconfig->esalt_size = sizeof (ikepsk_t);             break;
    case  5400: hashconfig->esalt_size = sizeof (ikepsk_t);             break;
    case  6211: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case  6212: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case  6213: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case  6221: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case  6222: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case  6223: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case  6231: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case  6232: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case  6233: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case  6241: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case  6242: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case  6243: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case  6600: hashconfig->esalt_size = sizeof (agilekey_t);           break;
    case  7100: hashconfig->esalt_size = sizeof (pbkdf2_sha512_t);      break;
    case  7200: hashconfig->esalt_size = sizeof (pbkdf2_sha512_t);      break;
    case  7300: hashconfig->esalt_size = sizeof (rakp_t);               break;
    case  8200: hashconfig->esalt_size = sizeof (cloudkey_t);           break;
    case  8800: hashconfig->esalt_size = sizeof (androidfde_t);         break;
    case  9200: hashconfig->esalt_size = sizeof (pbkdf2_sha256_t);      break;
    case  9400: hashconfig->esalt_size = sizeof (office2007_t);         break;
    case  9500: hashconfig->esalt_size = sizeof (office2010_t);         break;
    case  9600: hashconfig->esalt_size = sizeof (office2013_t);         break;
    case  9700: hashconfig->esalt_size = sizeof (oldoffice01_t);        break;
    case  9710: hashconfig->esalt_size = sizeof (oldoffice01_t);        break;
    case  9720: hashconfig->esalt_size = sizeof (oldoffice01_t);        break;
    case  9800: hashconfig->esalt_size = sizeof (oldoffice34_t);        break;
    case  9810: hashconfig->esalt_size = sizeof (oldoffice34_t);        break;
    case  9820: hashconfig->esalt_size = sizeof (oldoffice34_t);        break;
    case 10000: hashconfig->esalt_size = sizeof (pbkdf2_sha256_t);      break;
    case 10200: hashconfig->esalt_size = sizeof (cram_md5_t);           break;
    case 10400: hashconfig->esalt_size = sizeof (pdf_t);                break;
    case 10410: hashconfig->esalt_size = sizeof (pdf_t);                break;
    case 10420: hashconfig->esalt_size = sizeof (pdf_t);                break;
    case 10500: hashconfig->esalt_size = sizeof (pdf_t);                break;
    case 10600: hashconfig->esalt_size = sizeof (pdf_t);                break;
    case 10700: hashconfig->esalt_size = sizeof (pdf_t);                break;
    case 10900: hashconfig->esalt_size = sizeof (pbkdf2_sha256_t);      break;
    case 11300: hashconfig->esalt_size = sizeof (bitcoin_wallet_t);     break;
    case 11400: hashconfig->esalt_size = sizeof (sip_t);                break;
    case 11900: hashconfig->esalt_size = sizeof (pbkdf2_md5_t);         break;
    case 12001: hashconfig->esalt_size = sizeof (pbkdf2_sha1_t);        break;
    case 12100: hashconfig->esalt_size = sizeof (pbkdf2_sha512_t);      break;
    case 13000: hashconfig->esalt_size = sizeof (rar5_t);               break;
    case 13100: hashconfig->esalt_size = sizeof (krb5tgs_t);            break;
    case 13400: hashconfig->esalt_size = sizeof (keepass_t);            break;
    case 13500: hashconfig->esalt_size = sizeof (pstoken_t);            break;
    case 13600: hashconfig->esalt_size = sizeof (zip2_t);               break;
    case 13711: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13712: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13713: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13721: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13722: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13723: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13731: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13732: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13733: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13741: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13742: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13743: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13751: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13752: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13753: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13761: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13762: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13763: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13771: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13772: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13773: hashconfig->esalt_size = sizeof (tc_t);                 break;
    case 13800: hashconfig->esalt_size = sizeof (win8phone_t);          break;
    case 14600: hashconfig->esalt_size = sizeof (luks_t);               break;
    case 14700: hashconfig->esalt_size = sizeof (itunes_backup_t);      break;
    case 14800: hashconfig->esalt_size = sizeof (itunes_backup_t);      break;
    case 15300: hashconfig->esalt_size = sizeof (dpapimk_t);            break;
    case 15400: hashconfig->esalt_size = sizeof (chacha20_t);           break;
    case 15500: hashconfig->esalt_size = sizeof (jks_sha1_t);           break;
    case 15600: hashconfig->esalt_size = sizeof (ethereum_pbkdf2_t);    break;
    case 15700: hashconfig->esalt_size = sizeof (ethereum_scrypt_t);    break;
    case 15900: hashconfig->esalt_size = sizeof (dpapimk_t);            break;
    case 16100: hashconfig->esalt_size = sizeof (tacacs_plus_t);        break;
    case 16200: hashconfig->esalt_size = sizeof (apple_secure_notes_t); break;
    case 16300: hashconfig->esalt_size = sizeof (ethereum_presale_t);   break;
    case 16500: hashconfig->esalt_size = sizeof (jwt_t);                break;
    case 16600: hashconfig->esalt_size = sizeof (electrum_wallet_t);    break;
    case 16700: hashconfig->esalt_size = sizeof (apple_secure_notes_t); break;
    case 16900: hashconfig->esalt_size = sizeof (ansible_vault_t);      break;
    case 18200: hashconfig->esalt_size = sizeof (krb5asrep_t);          break;
    case 18300: hashconfig->esalt_size = sizeof (apple_secure_notes_t); break;
  }

  // hook_salt_size

  switch (hashconfig->hash_mode)
  {
    case 11600: hashconfig->hook_salt_size = sizeof (seven_zip_hook_salt_t); break;
  }

  // tmp_size

  switch (hashconfig->hash_mode)
  {
    case  2100: hashconfig->tmp_size = sizeof (dcc2_tmp_t);               break;
    case  5200: hashconfig->tmp_size = sizeof (pwsafe3_tmp_t);            break;
    case  5800: hashconfig->tmp_size = sizeof (androidpin_tmp_t);         break;
    case  6211: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case  6212: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case  6213: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case  6221: hashconfig->tmp_size = sizeof (tc64_tmp_t);               break;
    case  6222: hashconfig->tmp_size = sizeof (tc64_tmp_t);               break;
    case  6223: hashconfig->tmp_size = sizeof (tc64_tmp_t);               break;
    case  6231: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case  6232: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case  6233: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case  6241: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case  6242: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case  6243: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case  6400: hashconfig->tmp_size = sizeof (sha256aix_tmp_t);          break;
    case  6500: hashconfig->tmp_size = sizeof (sha512aix_tmp_t);          break;
    case  6600: hashconfig->tmp_size = sizeof (agilekey_tmp_t);           break;
    case  6700: hashconfig->tmp_size = sizeof (sha1aix_tmp_t);            break;
    case  6800: hashconfig->tmp_size = sizeof (lastpass_tmp_t);           break;
    case  7100: hashconfig->tmp_size = sizeof (pbkdf2_sha512_tmp_t);      break;
    case  7200: hashconfig->tmp_size = sizeof (pbkdf2_sha512_tmp_t);      break;
    case  7400: hashconfig->tmp_size = sizeof (sha256crypt_tmp_t);        break;
    case  7900: hashconfig->tmp_size = sizeof (drupal7_tmp_t);            break;
    case  8200: hashconfig->tmp_size = sizeof (pbkdf2_sha512_tmp_t);      break;
    case  8800: hashconfig->tmp_size = sizeof (androidfde_tmp_t);         break;
    case  9000: hashconfig->tmp_size = sizeof (pwsafe2_tmp_t);            break;
    case  9100: hashconfig->tmp_size = sizeof (lotus8_tmp_t);             break;
    case  9200: hashconfig->tmp_size = sizeof (pbkdf2_sha256_tmp_t);      break;
    case  9400: hashconfig->tmp_size = sizeof (office2007_tmp_t);         break;
    case  9500: hashconfig->tmp_size = sizeof (office2010_tmp_t);         break;
    case  9600: hashconfig->tmp_size = sizeof (office2013_tmp_t);         break;
    case 10000: hashconfig->tmp_size = sizeof (pbkdf2_sha256_tmp_t);      break;
    case 10200: hashconfig->tmp_size = sizeof (cram_md5_t);               break;
    case 10300: hashconfig->tmp_size = sizeof (saph_sha1_tmp_t);          break;
    case 10500: hashconfig->tmp_size = sizeof (pdf14_tmp_t);              break;
    case 10700: hashconfig->tmp_size = sizeof (pdf17l8_tmp_t);            break;
    case 10900: hashconfig->tmp_size = sizeof (pbkdf2_sha256_tmp_t);      break;
    case 11300: hashconfig->tmp_size = sizeof (bitcoin_wallet_tmp_t);     break;
    case 11600: hashconfig->tmp_size = sizeof (seven_zip_tmp_t);          break;
    case 11900: hashconfig->tmp_size = sizeof (pbkdf2_md5_tmp_t);         break;
    case 12001: hashconfig->tmp_size = sizeof (pbkdf2_sha1_tmp_t);        break;
    case 12100: hashconfig->tmp_size = sizeof (pbkdf2_sha512_tmp_t);      break;
    case 12200: hashconfig->tmp_size = sizeof (ecryptfs_tmp_t);           break;
    case 12300: hashconfig->tmp_size = sizeof (oraclet_tmp_t);            break;
    case 12400: hashconfig->tmp_size = sizeof (bsdicrypt_tmp_t);          break;
    case 12500: hashconfig->tmp_size = sizeof (rar3_tmp_t);               break;
    case 12700: hashconfig->tmp_size = sizeof (mywallet_tmp_t);           break;
    case 12800: hashconfig->tmp_size = sizeof (pbkdf2_sha256_tmp_t);      break;
    case 12900: hashconfig->tmp_size = sizeof (pbkdf2_sha256_tmp_t);      break;
    case 13000: hashconfig->tmp_size = sizeof (pbkdf2_sha256_tmp_t);      break;
    case 13200: hashconfig->tmp_size = sizeof (axcrypt_tmp_t);            break;
    case 13400: hashconfig->tmp_size = sizeof (keepass_tmp_t);            break;
    case 13600: hashconfig->tmp_size = sizeof (pbkdf2_sha1_tmp_t);        break;
    case 13711: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case 13712: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case 13713: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case 13721: hashconfig->tmp_size = sizeof (tc64_tmp_t);               break;
    case 13722: hashconfig->tmp_size = sizeof (tc64_tmp_t);               break;
    case 13723: hashconfig->tmp_size = sizeof (tc64_tmp_t);               break;
    case 13731: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case 13732: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case 13733: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case 13741: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case 13742: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case 13743: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case 13751: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case 13752: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case 13753: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case 13761: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case 13762: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case 13763: hashconfig->tmp_size = sizeof (tc_tmp_t);                 break;
    case 13771: hashconfig->tmp_size = sizeof (vc64_sbog_tmp_t);          break;
    case 13772: hashconfig->tmp_size = sizeof (vc64_sbog_tmp_t);          break;
    case 13773: hashconfig->tmp_size = sizeof (vc64_sbog_tmp_t);          break;
    case 14600: hashconfig->tmp_size = sizeof (luks_tmp_t);               break;
    case 14700: hashconfig->tmp_size = sizeof (pbkdf2_sha1_tmp_t);        break;
    case 14800: hashconfig->tmp_size = sizeof (pbkdf2_sha256_tmp_t);      break;
    case 15100: hashconfig->tmp_size = sizeof (pbkdf1_sha1_tmp_t);        break;
    case 15200: hashconfig->tmp_size = sizeof (mywallet_tmp_t);           break;
    case 15300: hashconfig->tmp_size = sizeof (dpapimk_tmp_v1_t);         break;
    case 15600: hashconfig->tmp_size = sizeof (pbkdf2_sha256_tmp_t);      break;
    case 15900: hashconfig->tmp_size = sizeof (dpapimk_tmp_v2_t);         break;
    case 16200: hashconfig->tmp_size = sizeof (apple_secure_notes_tmp_t); break;
    case 16300: hashconfig->tmp_size = sizeof (pbkdf2_sha256_tmp_t);      break;
    case 16700: hashconfig->tmp_size = sizeof (apple_secure_notes_tmp_t); break;
    case 16900: hashconfig->tmp_size = sizeof (pbkdf2_sha256_tmp_t);      break;
    case 18300: hashconfig->tmp_size = sizeof (apple_secure_notes_tmp_t); break;
  };

  // hook_size

  switch (hashconfig->hash_mode)
  {
    case 11600: hashconfig->hook_size = sizeof (seven_zip_hook_t);     break;
  };

}

u32 default_pw_min (MAYBE_UNUSED const hashconfig_t *hashconfig, MAYBE_UNUSED const user_options_t *user_options, MAYBE_UNUSED const user_options_extra_t *user_options_extra)
{
  // pw_min : should be set to default at the time this is executed

  u32 pw_min = hashconfig->pw_min;

  switch (hashconfig->hash_mode)
  {
    case  9710: pw_min = 5;   break; // RC4-40 fixed
    case  9810: pw_min = 5;   break; // RC4-40 fixed
    case 10410: pw_min = 5;   break; // RC4-40 fixed
    case 14900: pw_min = 10;  break; // Skip32 fixed
    case 15400: pw_min = 32;  break; // ChaCha20 fixed
  }

  return pw_min;
}

u32 default_pw_max (MAYBE_UNUSED const hashconfig_t *hashconfig, MAYBE_UNUSED const user_options_t *user_options, MAYBE_UNUSED const user_options_extra_t *user_options_extra)
{
  const bool optimized_kernel = (hashconfig->opti_type & OPTI_TYPE_OPTIMIZED_KERNEL);

  // pw_max : should be set to default at the time this is executed

  u32 pw_max = hashconfig->pw_max;

  if (optimized_kernel == true)
  {

    switch (hashconfig->hash_mode)
    {
      case  5800: pw_max = MIN (pw_max, 16); // pure kernel available
                  break;
      case  6900: pw_max = MIN (pw_max, 32); // todo
                  break;
      case  7000: pw_max = MIN (pw_max, 19); // pure kernel available
                  break;
      case  7400: pw_max = MIN (pw_max, 15); // pure kernel available
                  break;
      case 10700: pw_max = MIN (pw_max, 16); // pure kernel available
                  break;
      case 12500: pw_max = MIN (pw_max, 20); // todo
                  break;
      case 14400: pw_max = MIN (pw_max, 24); // todo
                  break;
      case 15500: pw_max = MIN (pw_max, 16); // todo
                  break;
    }
  }
  else
  {
    switch (hashconfig->hash_mode)
    {
      case 10700: pw_max = 127; // https://www.pdflib.com/knowledge-base/pdf-password-security/encryption/
                  break;
      case 16400: pw_max = 64; // HMAC-MD5 and `doveadm pw` are different for password more than 64 bytes
                  break;
    }
  }

  // pw_max : all modes listed in the following switch cases are
  //          the maximum possible password length of the related system
  //          plus the opencl kernels which eventually allows cracking of passwords of up length PW_MAX for free (no speed drop).
  //          some modes have a self-set and some have
  //          underlaying algorithms specific hard maximum password length
  //          these limits override all previous restrictions, always

  switch (hashconfig->hash_mode)
  {
    case   112: pw_max = 30;      break; // https://www.toadworld.com/platforms/oracle/b/weblog/archive/2013/11/12/oracle-12c-passwords
    case  2100: pw_max = PW_MAX;  break;
    case  3100: pw_max = 30;      break; // http://www.red-database-security.de/whitepaper/oracle_passwords.html
    case  5200: pw_max = PW_MAX;  break;
    case  6211: pw_max = 64;      break; // TC limits itself to 64
    case  6212: pw_max = 64;      break; // TC limits itself to 64
    case  6213: pw_max = 64;      break; // TC limits itself to 64
    case  6221: pw_max = 64;      break; // TC limits itself to 64
    case  6222: pw_max = 64;      break; // TC limits itself to 64
    case  6223: pw_max = 64;      break; // TC limits itself to 64
    case  6231: pw_max = 64;      break; // TC limits itself to 64
    case  6232: pw_max = 64;      break; // TC limits itself to 64
    case  6233: pw_max = 64;      break; // TC limits itself to 64
    case  6241: pw_max = 64;      break; // TC limits itself to 64
    case  6242: pw_max = 64;      break; // TC limits itself to 64
    case  6243: pw_max = 64;      break; // TC limits itself to 64
    case  6400: pw_max = PW_MAX;  break;
    case  6500: pw_max = PW_MAX;  break;
    case  6600: pw_max = PW_MAX;  break;
    case  6700: pw_max = PW_MAX;  break;
    case  6800: pw_max = PW_MAX;  break;
    case  7100: pw_max = PW_MAX;  break;
    case  7200: pw_max = PW_MAX;  break;
    case  7700: pw_max = 8;       break; // https://www.daniel-berlin.de/security/sap-sec/password-hash-algorithms/
    case  7800: pw_max = 40;      break; // https://www.daniel-berlin.de/security/sap-sec/password-hash-algorithms/
    case  7900: pw_max = PW_MAX;  break;
    case  8000: pw_max = 30;      break; // http://infocenter.sybase.com/help/index.jsp?topic=/com.sybase.infocenter.dc31654.1570/html/sag1/CIHIBDBA.htm
    case  8200: pw_max = PW_MAX;  break;
    case  8500: pw_max = 8;       break; // Underlaying DES max
    case  8600: pw_max = 16;      break; // Lotus Notes/Domino 5 limits itself to 16
    case  8700: pw_max = 64;      break; // https://www.ibm.com/support/knowledgecenter/en/SSKTWP_8.5.3/com.ibm.notes85.client.doc/fram_limits_of_notes_r.html
    case  8800: pw_max = PW_MAX;  break;
    case  8900: pw_max = PW_MAX;  break;
    case  9100: pw_max = 64;      break; // https://www.ibm.com/support/knowledgecenter/en/SSKTWP_8.5.3/com.ibm.notes85.client.doc/fram_limits_of_notes_r.html
    case  9200: pw_max = PW_MAX;  break;
    case  9300: pw_max = PW_MAX;  break;
    case  9400: pw_max = PW_MAX;  break;
    case  9500: pw_max = PW_MAX;  break;
    case  9600: pw_max = PW_MAX;  break;
    case  9700: pw_max = 15;      break; // https://msdn.microsoft.com/en-us/library/dd772916(v=office.12).aspx
    case  9710: pw_max = 5;       break; // Underlaying RC4-40 max
    case  9720: pw_max = 15;      break; // https://msdn.microsoft.com/en-us/library/dd772916(v=office.12).aspx
    case  9800: pw_max = 15;      break; // https://msdn.microsoft.com/en-us/library/dd772916(v=office.12).aspx
    case  9810: pw_max = 5;       break; // Underlaying RC4-40 max
    case  9820: pw_max = 15;      break; // https://msdn.microsoft.com/en-us/library/dd772916(v=office.12).aspx
    case  9900: pw_max = 100;     break; // RAdmin2 sets w[25] = 0x80
    case 10000: pw_max = PW_MAX;  break;
    case 10300: pw_max = 40;      break; // https://www.daniel-berlin.de/security/sap-sec/password-hash-algorithms/
    case 10400: pw_max = 32;      break; // https://www.pdflib.com/knowledge-base/pdf-password-security/encryption/
    case 10410: pw_max = 5;       break; // Underlaying RC4-40 max
    case 10420: pw_max = 32;      break; // https://www.pdflib.com/knowledge-base/pdf-password-security/encryption/
    case 10500: pw_max = 32;      break; // https://www.pdflib.com/knowledge-base/pdf-password-security/encryption/
    case 10600: pw_max = 127;     break; // https://www.pdflib.com/knowledge-base/pdf-password-security/encryption/
    case 10900: pw_max = PW_MAX;  break;
    case 11300: pw_max = PW_MAX;  break;
    case 11600: pw_max = PW_MAX;  break;
    case 11900: pw_max = PW_MAX;  break;
    case 12001: pw_max = PW_MAX;  break;
    case 12200: pw_max = PW_MAX;  break;
    case 12300: pw_max = PW_MAX;  break;
    case 12400: pw_max = PW_MAX;  break;
    case 12700: pw_max = PW_MAX;  break;
    case 12800: pw_max = PW_MAX;  break;
    case 12900: pw_max = PW_MAX;  break;
    case 13000: pw_max = PW_MAX;  break;
    case 13200: pw_max = PW_MAX;  break;
    case 13400: pw_max = PW_MAX;  break;
    case 13600: pw_max = PW_MAX;  break;
    case 13711: pw_max = 64;      break; // VC limits itself to 64
    case 13712: pw_max = 64;      break; // VC limits itself to 64
    case 13713: pw_max = 64;      break; // VC limits itself to 64
    case 13721: pw_max = 64;      break; // VC limits itself to 64
    case 13722: pw_max = 64;      break; // VC limits itself to 64
    case 13723: pw_max = 64;      break; // VC limits itself to 64
    case 13731: pw_max = 64;      break; // VC limits itself to 64
    case 13732: pw_max = 64;      break; // VC limits itself to 64
    case 13733: pw_max = 64;      break; // VC limits itself to 64
    case 13741: pw_max = 64;      break; // VC limits itself to 64
    case 13742: pw_max = 64;      break; // VC limits itself to 64
    case 13743: pw_max = 64;      break; // VC limits itself to 64
    case 13751: pw_max = 64;      break; // VC limits itself to 64
    case 13752: pw_max = 64;      break; // VC limits itself to 64
    case 13753: pw_max = 64;      break; // VC limits itself to 64
    case 13761: pw_max = 64;      break; // VC limits itself to 64
    case 13762: pw_max = 64;      break; // VC limits itself to 64
    case 13763: pw_max = 64;      break; // VC limits itself to 64
    case 13771: pw_max = 64;      break; // VC limits itself to 64
    case 13772: pw_max = 64;      break; // VC limits itself to 64
    case 13773: pw_max = 64;      break; // VC limits itself to 64
    case 14611: pw_max = PW_MAX;  break;
    case 14612: pw_max = PW_MAX;  break;
    case 14613: pw_max = PW_MAX;  break;
    case 14621: pw_max = PW_MAX;  break;
    case 14622: pw_max = PW_MAX;  break;
    case 14623: pw_max = PW_MAX;  break;
    case 14631: pw_max = PW_MAX;  break;
    case 14632: pw_max = PW_MAX;  break;
    case 14633: pw_max = PW_MAX;  break;
    case 14641: pw_max = PW_MAX;  break;
    case 14642: pw_max = PW_MAX;  break;
    case 14643: pw_max = PW_MAX;  break;
    case 14700: pw_max = PW_MAX;  break;
    case 14800: pw_max = PW_MAX;  break;
    case 14900: pw_max = 10;      break; // Underlaying Skip32 fixed
    case 15100: pw_max = PW_MAX;  break;
    case 15300: pw_max = PW_MAX;  break;
    case 15400: pw_max = 32;      break; // Underlaying ChaCha20 fixed
    case 15600: pw_max = PW_MAX;  break;
    case 15700: pw_max = PW_MAX;  break;
    case 15900: pw_max = PW_MAX;  break;
    case 16000: pw_max = 8;       break; // Underlaying DES max
    case 16900: pw_max = PW_MAX;  break;
  }

  return pw_max;
}

u32 default_salt_min (MAYBE_UNUSED const hashconfig_t *hashconfig, MAYBE_UNUSED const user_options_t *user_options, MAYBE_UNUSED const user_options_extra_t *user_options_extra)
{

  // salt_min : should be set to default at the time this is executed

  u32 salt_min = hashconfig->salt_min;



    switch (hashconfig->hash_mode)
    {
      case 11000: salt_min = 56; break;
      case 12600: salt_min = 64; break;
      case 15000: salt_min = 64; break;
    }

  return salt_min;
}

u32 default_salt_max (MAYBE_UNUSED const hashconfig_t *hashconfig, MAYBE_UNUSED const user_options_t *user_options, MAYBE_UNUSED const user_options_extra_t *user_options_extra)
{

  // salt_max : should be set to default at the time this is executed

  u32 salt_max = hashconfig->salt_max;



    switch (hashconfig->hash_mode)
    {
      case 11000: salt_max = 56; break;
      case 12600: salt_max = 64; break;
      case 15000: salt_max = 64; break;
    }


  return salt_max;
}

const char *default_benchmark_mask (MAYBE_UNUSED const hashconfig_t *hashconfig, MAYBE_UNUSED const user_options_t *user_options, MAYBE_UNUSED const user_options_extra_t *user_options_extra)
{
  switch (hashconfig->hash_mode)
  {
    case  9710: mask = "?b?b?b?b?b";
                break;
    case  9810: mask = "?b?b?b?b?b";
                break;
    case 10410: mask = "?b?b?b?b?b";
                break;
    case 12500: mask = "?b?b?b?b?b";
                break;
    case 14900: mask = "?b?b?b?b?bxxxxx";
                break;
    default:    mask = "?b?b?b?b?b?b?b";
                break;
  }

}

bool default_warmup_disable (MAYBE_UNUSED const hashconfig_t *hashconfig, MAYBE_UNUSED const user_options_t *user_options, MAYBE_UNUSED const user_options_extra_t *user_options_extra)
{

  switch (hashconfig->hash_mode)
  {
    case  2000: return true;
  }

}

bool default_hlfmt_disable (MAYBE_UNUSED const hashconfig_t *hashconfig, MAYBE_UNUSED const user_options_t *user_options, MAYBE_UNUSED const user_options_extra_t *user_options_extra)
{

  switch (hashconfig->hash_mode)
  {
    case  5300: return true;
    case  5400: return true;
  }


}

u32 default_forced_outfile_format
{

  if (hashconfig->hash_mode == 9710)
  {
    user_options->outfile_format      = 5;
  }

  if (hashconfig->hash_mode == 9810)
  {
    user_options->outfile_format      = 5;
  }

  if (hashconfig->hash_mode == 10410)
  {
    user_options->outfile_format      = 5;
  }

}

// goes into seven zip module
void module_hook23 (hc_device_param_t *device_param, const void *hook_salts_buf, const u32 salt_pos, const u64 pws_cnt)
{
  seven_zip_hook_t *hook_items = (seven_zip_hook_t *) device_param->hooks_buf;

  seven_zip_hook_salt_t *seven_zips = (seven_zip_hook_salt_t *) hook_salts_buf;
  seven_zip_hook_salt_t *seven_zip  = &seven_zips[salt_pos];

  u8   data_type   = seven_zip->data_type;
  u32 *data_buf    = seven_zip->data_buf;
  u32  unpack_size = seven_zip->unpack_size;

  for (u64 pw_pos = 0; pw_pos < pws_cnt; pw_pos++)
  {
    // this hook data needs to be updated (the "hook_success" variable):

    seven_zip_hook_t *hook_item = &hook_items[pw_pos];

    const u8 *ukey = (const u8 *) hook_item->ukey;

    // init AES

    AES_KEY aes_key;

    memset (&aes_key, 0, sizeof (aes_key));

    AES_set_decrypt_key (ukey, 256, &aes_key);

    int aes_len = seven_zip->aes_len;

    u32 data[4];
    u32 out [4];
    u32 iv  [4];

    iv[0] = seven_zip->iv_buf[0];
    iv[1] = seven_zip->iv_buf[1];
    iv[2] = seven_zip->iv_buf[2];
    iv[3] = seven_zip->iv_buf[3];

    u32 out_full[81882];

    // if aes_len > 16 we need to loop

    int i = 0;
    int j = 0;

    for (i = 0, j = 0; i < aes_len - 16; i += 16, j += 4)
    {
      data[0] = data_buf[j + 0];
      data[1] = data_buf[j + 1];
      data[2] = data_buf[j + 2];
      data[3] = data_buf[j + 3];

      AES_decrypt (&aes_key, (u8*) data, (u8*) out);

      out[0] ^= iv[0];
      out[1] ^= iv[1];
      out[2] ^= iv[2];
      out[3] ^= iv[3];

      iv[0] = data[0];
      iv[1] = data[1];
      iv[2] = data[2];
      iv[3] = data[3];

      out_full[j + 0] = out[0];
      out_full[j + 1] = out[1];
      out_full[j + 2] = out[2];
      out_full[j + 3] = out[3];
    }

    // we need to run it at least once:

    data[0] = data_buf[j + 0];
    data[1] = data_buf[j + 1];
    data[2] = data_buf[j + 2];
    data[3] = data_buf[j + 3];

    AES_decrypt (&aes_key, (u8*) data, (u8*) out);

    out[0] ^= iv[0];
    out[1] ^= iv[1];
    out[2] ^= iv[2];
    out[3] ^= iv[3];

    out_full[j + 0] = out[0];
    out_full[j + 1] = out[1];
    out_full[j + 2] = out[2];
    out_full[j + 3] = out[3];

    /*
     * check the CRC32 "hash"
     */

    u32 seven_zip_crc = seven_zip->crc;

    u32 crc;

    if (data_type == 0) // uncompressed
    {
      crc = cpu_crc32_buffer ((u8 *) out_full, unpack_size);
    }
    else
    {
      u32 crc_len = seven_zip->crc_len;

      char *coder_attributes = seven_zip->coder_attributes;

      // input buffers and length

      u8 *compressed_data = (u8 *) out_full;

      SizeT compressed_data_len = aes_len;

      // output buffers and length

      unsigned char *decompressed_data;

      decompressed_data = (unsigned char *) hcmalloc (crc_len);

      SizeT decompressed_data_len = crc_len;

      int ret;

      if (data_type == 1) // LZMA1
      {
        ret = hc_lzma1_decompress (compressed_data, &compressed_data_len, decompressed_data, &decompressed_data_len, coder_attributes);
      }
      else // we only support LZMA2 in addition to LZMA1
      {
        ret = hc_lzma2_decompress (compressed_data, &compressed_data_len, decompressed_data, &decompressed_data_len, coder_attributes);
      }

      if (ret != SZ_OK)
      {
        hook_item->hook_success = 0;

        hcfree (decompressed_data);

        continue;
      }

      crc = cpu_crc32_buffer (decompressed_data, crc_len);

      hcfree (decompressed_data);
    }

    if (crc == seven_zip_crc)
    {
      hook_item->hook_success = 1;
    }
    else
    {
      hook_item->hook_success = 0;
    }
  }
}

static void precompute_salt_md5 (const u32 *salt_buf, const u32 salt_len, u8 *salt_pc)
{
  u32 digest[4] = { 0 };

  md5_complete_no_limit (digest, salt_buf, salt_len);

  u32_to_hex (digest[0], salt_pc +  0);
  u32_to_hex (digest[1], salt_pc +  8);
  u32_to_hex (digest[2], salt_pc + 16);
  u32_to_hex (digest[3], salt_pc + 24);
}


bool outfile_check_disable
{


  if ((hashconfig->hash_mode ==  5200) ||
     ((hashconfig->hash_mode >=  6200) && (hashconfig->hash_mode <=  6299)) ||
      (hashconfig->hash_mode ==  9000) ||
     ((hashconfig->hash_mode >= 13700) && (hashconfig->hash_mode <= 13799)) ||
      (hashconfig->hash_mode == 14600)) return 0;
}

bool potfile_disable
{

  if  (hashconfig->hash_mode ==  5200)  return 0;
  if ((hashconfig->hash_mode >=  6200)
   && (hashconfig->hash_mode <=  6299)) return 0;
  if  (hashconfig->hash_mode ==  9000)  return 0;
  if ((hashconfig->hash_mode >= 13700)
   && (hashconfig->hash_mode <= 13799)) return 0;
  if  (hashconfig->hash_mode == 14600)  return 0;
}

bool outfile_check_nocomp
{
          if (hash_mode == 6800)
          {
            // the comparison with only matching salt is a bit inaccurate
            // call it a bug, but it's good enough for a special case used in a special case

            cracked = true;
          }
}

int module_hash_decode_outfile (MAYBE_UNUSED const hashconfig_t *hashconfig, MAYBE_UNUSED void *digest_buf, MAYBE_UNUSED salt_t *salt, MAYBE_UNUSED void *esalt_buf, const char *line_buf, MAYBE_UNUSED const int line_len)
{


          else if (hash_mode == 6800) // special case LastPass (only email address in outfile/potfile)
          {
            // fake the parsing of the hash/salt

            if (line_len < 256) // 64 = 64 * u32 in salt_buf[]
            {
              hash_buf.salt->salt_len = line_len;

              memcpy (hash_buf.salt->salt_buf, line_buf, line_len);
            }

            return PARSER_OK;
          }
}

int build_plain_postprocess (const u32 *src_buf, MAYBE_UNUSED const size_t src_sz, const int src_len, u32 *dst_buf, MAYBE_UNUSED const size_t dst_sz)
{
  // truecrypt and veracrypt boot only:
  // we do some kernel internal substituations, so we need to do that here as well, if it cracks

  if (hashconfig->opts_type & OPTS_TYPE_KEYBOARD_MAPPING)
  {
    tc_t *tc = (tc_t *) hashes->esalts_buf;

    return execute_keyboard_layout_mapping (plain_buf, plain_len, tc->keyboard_layout_mapping_buf, tc->keyboard_layout_mapping_cnt);
  }


  // TOTP should be base32 encoded
  if (hashconfig->hash_mode == 18100)
  {


    // encode our plain
    return base32_encode (int_to_base32, (const u8 *) src_buf, src_len, (u8 *) temp_buf);


  }
}

u64 module_size_extra_buffer (MAYBE_UNUSED const hashconfig_t *hashconfig, MAYBE_UNUSED const user_options_t *user_options, MAYBE_UNUSED const user_options_extra_t *user_options_extra, MAYBE_UNUSED const hashes_t *hashes, MAYBE_UNUSED const hc_device_param_t *device_param);
{

    // scryptV stuff

    u64 scrypt_tmp_size   = 0;
    u64 scrypt_tmto_final = 0;

    u64 size_scrypt = 4;

    if ((hashconfig->hash_mode == 8900) || (hashconfig->hash_mode == 9300) || (hashconfig->hash_mode == 15700))
    {
      // we need to check that all hashes have the same scrypt settings

      const u32 scrypt_N = hashes->salts_buf[0].scrypt_N;
      const u32 scrypt_r = hashes->salts_buf[0].scrypt_r;
      const u32 scrypt_p = hashes->salts_buf[0].scrypt_p;

      for (u32 i = 1; i < hashes->salts_cnt; i++)
      {
        if ((hashes->salts_buf[i].scrypt_N != scrypt_N)
         || (hashes->salts_buf[i].scrypt_r != scrypt_r)
         || (hashes->salts_buf[i].scrypt_p != scrypt_p))
        {
          event_log_error (hashcat_ctx, "Mixed scrypt settings are not supported.");

          return -1;
        }
      }

      scrypt_tmp_size = (128 * scrypt_r * scrypt_p);

      hashconfig->tmp_size = scrypt_tmp_size;

      u32 tmto_start = 1;
      u32 tmto_stop  = 6;

      if (user_options->scrypt_tmto)
      {
        tmto_start = user_options->scrypt_tmto;
        tmto_stop  = user_options->scrypt_tmto;
      }

      const u32 scrypt_threads = hashconfig->forced_kernel_threads;

      const u64 kernel_power_max = SCRYPT_MAX_ACCEL * device_processors * scrypt_threads;

      // size_pws

      const u64 size_pws = kernel_power_max * sizeof (pw_t);

      const u64 size_pws_amp = size_pws;

      // size_pws_comp

      const u64 size_pws_comp = kernel_power_max * (sizeof (u32) * 64);

      // size_pws_idx

      const u64 size_pws_idx = (kernel_power_max + 1) * sizeof (pw_idx_t);

      // size_tmps

      const u64 size_tmps = kernel_power_max * hashconfig->tmp_size;

      // size_hooks

      const u64 size_hooks = kernel_power_max * hashconfig->hook_size;

      const u64 scrypt_extra_space
        = bitmap_ctx->bitmap_size
        + bitmap_ctx->bitmap_size
        + bitmap_ctx->bitmap_size
        + bitmap_ctx->bitmap_size
        + bitmap_ctx->bitmap_size
        + bitmap_ctx->bitmap_size
        + bitmap_ctx->bitmap_size
        + bitmap_ctx->bitmap_size
        + size_bfs
        + size_combs
        + size_digests
        + size_esalts
        + size_hooks
        + size_markov_css
        + size_plains
        + size_pws
        + size_pws_amp
        + size_pws_comp
        + size_pws_idx
        + size_results
        + size_root_css
        + size_rules
        + size_rules_c
        + size_salts
        + size_shown
        + size_tm
        + size_tmps
        + size_st_digests
        + size_st_salts
        + size_st_esalts;

      bool not_enough_memory = true;

      u32 tmto;

      for (tmto = tmto_start; tmto <= tmto_stop; tmto++)
      {
        size_scrypt = (128 * scrypt_r) * scrypt_N;

        size_scrypt /= 1u << tmto;

        size_scrypt *= kernel_power_max;

        if ((size_scrypt / 4) > device_param->device_maxmem_alloc)
        {
          if (user_options->quiet == false) event_log_warning (hashcat_ctx, "Increasing single-block device memory allocatable for --scrypt-tmto %u.", tmto);

          continue;
        }

        if ((size_scrypt + scrypt_extra_space) > device_param->device_available_mem)
        {
          if (user_options->quiet == false) event_log_warning (hashcat_ctx, "Increasing total device memory allocatable for --scrypt-tmto %u.", tmto);

          continue;
        }

        for (u32 salts_pos = 0; salts_pos < hashes->salts_cnt; salts_pos++)
        {
          scrypt_tmto_final = tmto;
        }

        not_enough_memory = false;

        break;
      }

      if (not_enough_memory == true)
      {
        event_log_error (hashcat_ctx, "Cannot allocate enough device memory. Perhaps retry with -n 1.");

        return -1;
      }

      #if defined (DEBUG)
      if (user_options->quiet == false) event_log_warning (hashcat_ctx, "SCRYPT tmto optimizer value set to: %lu, mem: %lu", scrypt_tmto_final, size_scrypt);
      if (user_options->quiet == false) event_log_warning (hashcat_ctx, NULL);
      #endif
    }

    u64 size_scrypt4 = size_scrypt / 4;

  return size_scrypt4;
}


char *module_jit_build_options (MAYBE_UNUSED const hashconfig_t *hashconfig, MAYBE_UNUSED const user_options_t *user_options, MAYBE_UNUSED const user_options_extra_t *user_options_extra, MAYBE_UNUSED const hashes_t *hashes, MAYBE_UNUSED const hc_device_param_t *device_param);
{
  /**
   * Some algorithm, like descrypt, can benefit from JIT compilation
   */


  if (hashconfig->hash_mode == 8900)
  {
    opencl_ctx->force_jit_compilation = 8900;
  }
  else if (hashconfig->hash_mode == 9300)
  {
    opencl_ctx->force_jit_compilation = 8900;
  }
  else if (hashconfig->hash_mode == 15700)
  {
    opencl_ctx->force_jit_compilation = 15700;
  }

    // scryptV stuff

    u64 scrypt_tmp_size   = 0;
    u64 scrypt_tmto_final = 0;

    u64 size_scrypt = 4;

    if ((hashconfig->hash_mode == 8900) || (hashconfig->hash_mode == 9300) || (hashconfig->hash_mode == 15700))
    {
      // we need to check that all hashes have the same scrypt settings

      const u32 scrypt_N = hashes->salts_buf[0].scrypt_N;
      const u32 scrypt_r = hashes->salts_buf[0].scrypt_r;
      const u32 scrypt_p = hashes->salts_buf[0].scrypt_p;

      for (u32 i = 1; i < hashes->salts_cnt; i++)
      {
        if ((hashes->salts_buf[i].scrypt_N != scrypt_N)
         || (hashes->salts_buf[i].scrypt_r != scrypt_r)
         || (hashes->salts_buf[i].scrypt_p != scrypt_p))
        {
          event_log_error (hashcat_ctx, "Mixed scrypt settings are not supported.");

          return -1;
        }
      }

      scrypt_tmp_size = (128 * scrypt_r * scrypt_p);

      hashconfig->tmp_size = scrypt_tmp_size;

      u32 tmto_start = 1;
      u32 tmto_stop  = 6;

      if (user_options->scrypt_tmto)
      {
        tmto_start = user_options->scrypt_tmto;
        tmto_stop  = user_options->scrypt_tmto;
      }

      const u32 scrypt_threads = hashconfig->forced_kernel_threads;

      const u64 kernel_power_max = SCRYPT_MAX_ACCEL * device_processors * scrypt_threads;

      // size_pws

      const u64 size_pws = kernel_power_max * sizeof (pw_t);

      const u64 size_pws_amp = size_pws;

      // size_pws_comp

      const u64 size_pws_comp = kernel_power_max * (sizeof (u32) * 64);

      // size_pws_idx

      const u64 size_pws_idx = (kernel_power_max + 1) * sizeof (pw_idx_t);

      // size_tmps

      const u64 size_tmps = kernel_power_max * hashconfig->tmp_size;

      // size_hooks

      const u64 size_hooks = kernel_power_max * hashconfig->hook_size;

      const u64 scrypt_extra_space
        = bitmap_ctx->bitmap_size
        + bitmap_ctx->bitmap_size
        + bitmap_ctx->bitmap_size
        + bitmap_ctx->bitmap_size
        + bitmap_ctx->bitmap_size
        + bitmap_ctx->bitmap_size
        + bitmap_ctx->bitmap_size
        + bitmap_ctx->bitmap_size
        + size_bfs
        + size_combs
        + size_digests
        + size_esalts
        + size_hooks
        + size_markov_css
        + size_plains
        + size_pws
        + size_pws_amp
        + size_pws_comp
        + size_pws_idx
        + size_results
        + size_root_css
        + size_rules
        + size_rules_c
        + size_salts
        + size_shown
        + size_tm
        + size_tmps
        + size_st_digests
        + size_st_salts
        + size_st_esalts;

      bool not_enough_memory = true;

      u32 tmto;

      for (tmto = tmto_start; tmto <= tmto_stop; tmto++)
      {
        size_scrypt = (128 * scrypt_r) * scrypt_N;

        size_scrypt /= 1u << tmto;

        size_scrypt *= kernel_power_max;

        if ((size_scrypt / 4) > device_param->device_maxmem_alloc)
        {
          if (user_options->quiet == false) event_log_warning (hashcat_ctx, "Increasing single-block device memory allocatable for --scrypt-tmto %u.", tmto);

          continue;
        }

        if ((size_scrypt + scrypt_extra_space) > device_param->device_available_mem)
        {
          if (user_options->quiet == false) event_log_warning (hashcat_ctx, "Increasing total device memory allocatable for --scrypt-tmto %u.", tmto);

          continue;
        }

        for (u32 salts_pos = 0; salts_pos < hashes->salts_cnt; salts_pos++)
        {
          scrypt_tmto_final = tmto;
        }

        not_enough_memory = false;

        break;
      }

      if (not_enough_memory == true)
      {
        event_log_error (hashcat_ctx, "Cannot allocate enough device memory. Perhaps retry with -n 1.");

        return -1;
      }

      #if defined (DEBUG)
      if (user_options->quiet == false) event_log_warning (hashcat_ctx, "SCRYPT tmto optimizer value set to: %lu, mem: %lu", scrypt_tmto_final, size_scrypt);
      if (user_options->quiet == false) event_log_warning (hashcat_ctx, NULL);
      #endif
    }

    size_t size_scrypt4 = size_scrypt / 4;


        else if ((opencl_ctx->force_jit_compilation == 8900) || (opencl_ctx->force_jit_compilation == 15700))
        {
          hc_asprintf (&build_opts_update,"%s -DSCRYPT_N=%u -DSCRYPT_R=%u -DSCRYPT_P=%u -DSCRYPT_TMTO=%u -DSCRYPT_TMP_ELEM=%" PRIu64, build_opts, hashes->salts_buf[0].scrypt_N, hashes->salts_buf[0].scrypt_r, hashes->salts_buf[0].scrypt_p, 1u << scrypt_tmto_final, (u64) scrypt_tmp_size / 16);
        }

}

bool module_unstable_warning (MAYBE_UNUSED const hashconfig_t *hashconfig, MAYBE_UNUSED const user_options_t *user_options, MAYBE_UNUSED const user_options_extra_t *user_options_extra)
{

    #if defined (__APPLE__)

    /**
     * If '--force' is not set, we proceed to excluding unstable hash-modes,
     * too high kernel runtime, even on -u1 -n1, therefore likely to run into trap 6
     */

    if (
     || (hashconfig->hash_mode ==  8900)
     || (hashconfig->hash_mode ==  9300)
     || (hashconfig->hash_mode ==  9800)
     || (hashconfig->hash_mode == 12500)
     || (hashconfig->hash_mode == 15700))
    {
      return true;
    }

    #endif // __APPLE__

  return false;
}

u32 module_deep_comp_kernel (MAYBE_UNUSED const hashes_t *hashes, MAYBE_UNUSED const u32 salt_pos, MAYBE_UNUSED const u32 digest_pos)
{
  else if (hashconfig->hash_mode == 9600)
  {
    return KERN_RUN_3;
  }
}


int module_hash_binary_count (MAYBE_UNUSED const hashes_t *hashes)
{

      else if (hashconfig->hash_mode == 14600)
      {
        return LUKS_NUMKEYS;
      }
}


int module_hash_binary_parse ()
{

          else if (hashconfig->hash_mode == 14600)
          {
            hashes->hashlist_mode = HL_MODE_FILE;

            for (int keyslot_idx = 0; keyslot_idx < LUKS_NUMKEYS; keyslot_idx++)
            {
              parser_status = luks_parse_hash ((u8 *) hash_buf, (const int) hash_len, &hashes_buf[hashes_cnt], hashconfig, keyslot_idx);

              if (parser_status != PARSER_OK)
              {
                if (parser_status != PARSER_LUKS_KEY_DISABLED) continue;
              }

              hashes_cnt++;
            }
          }

  return hashes_cnt;
}

bool module_hash_binary_verify (MAYBE_UNUSED const hashes_t *hashes)
{

        else if (hashconfig->hash_mode == 14600)
        {

        }

  return true;
}



static int hashconfig_general_defaults (hashcat_ctx_t *hashcat_ctx)
{
  hashconfig_t   *hashconfig   = hashcat_ctx->hashconfig;
  user_options_t *user_options = hashcat_ctx->user_options;

  // truecrypt and veracrypt only
  if (((hashconfig->hash_mode >=  6200) && (hashconfig->hash_mode <=  6299))
   || ((hashconfig->hash_mode >= 13700) && (hashconfig->hash_mode == 13799)))
  {
    hashes_t *hashes = hashcat_ctx->hashes;

    tc_t *tc = (tc_t *) hashes->esalts_buf;

    char *optional_param1 = NULL;

    if (user_options->truecrypt_keyfiles) optional_param1 = user_options->truecrypt_keyfiles;
    if (user_options->veracrypt_keyfiles) optional_param1 = user_options->veracrypt_keyfiles;

    if (optional_param1)
    {
      char *tcvc_keyfiles = optional_param1;

      char *keyfiles = hcstrdup (tcvc_keyfiles);

      if (keyfiles == NULL) return -1;

      char *saveptr = NULL;

      char *keyfile = strtok_r (keyfiles, ",", &saveptr);

      if (keyfile == NULL)
      {
        free (keyfiles);

        return -1;
      }

      do
      {
        const int rc_crc32 = cpu_crc32 (hashcat_ctx, keyfile, (u8 *) tc->keyfile_buf);

        if (rc_crc32 == -1)
        {
          free (keyfiles);

          return -1;
        }

      } while ((keyfile = strtok_r ((char *) NULL, ",", &saveptr)) != NULL);

      free (keyfiles);
    }

    // truecrypt and veracrypt boot only
    if (hashconfig->opts_type & OPTS_TYPE_KEYBOARD_MAPPING)
    {
      if (user_options->keyboard_layout_mapping)
      {
        const bool rc = initialize_keyboard_layout_mapping (hashcat_ctx, user_options->keyboard_layout_mapping, tc->keyboard_layout_mapping_buf, &tc->keyboard_layout_mapping_cnt);

        if (rc == false) return -1;
      }
    }
  }

  // veracrypt only
  if ((hashconfig->hash_mode >= 13700) && (hashconfig->hash_mode == 13799))
  {
    if (user_options->veracrypt_pim)
    {
      // we can access salt directly here because in VC it's always just one salt not many

      hashes_t *hashes = hashcat_ctx->hashes;

      salt_t *salts_buf = hashes->salts_buf;

      salt_t *salt = &salts_buf[0];

      switch (hashconfig->hash_mode)
      {
        case 13711:  salt->salt_iter  = 15000 + (user_options->veracrypt_pim * 1000);
                     break;
        case 13712:  salt->salt_iter  = 15000 + (user_options->veracrypt_pim * 1000);
                     break;
        case 13713:  salt->salt_iter  = 15000 + (user_options->veracrypt_pim * 1000);
                     break;
        case 13721:  salt->salt_iter  = 15000 + (user_options->veracrypt_pim * 1000);
                     break;
        case 13722:  salt->salt_iter  = 15000 + (user_options->veracrypt_pim * 1000);
                     break;
        case 13723:  salt->salt_iter  = 15000 + (user_options->veracrypt_pim * 1000);
                     break;
        case 13731:  salt->salt_iter  = 15000 + (user_options->veracrypt_pim * 1000);
                     break;
        case 13732:  salt->salt_iter  = 15000 + (user_options->veracrypt_pim * 1000);
                     break;
        case 13733:  salt->salt_iter  = 15000 + (user_options->veracrypt_pim * 1000);
                     break;
        case 13741:  salt->salt_iter  = user_options->veracrypt_pim * 2048;
                     break;
        case 13742:  salt->salt_iter  = user_options->veracrypt_pim * 2048;
                     break;
        case 13743:  salt->salt_iter  = user_options->veracrypt_pim * 2048;
                     break;
        case 13751:  salt->salt_iter  = 15000 + (user_options->veracrypt_pim * 1000);
                     break;
        case 13752:  salt->salt_iter  = 15000 + (user_options->veracrypt_pim * 1000);
                     break;
        case 13753:  salt->salt_iter  = 15000 + (user_options->veracrypt_pim * 1000);
                     break;
        case 13761:  salt->salt_iter  = user_options->veracrypt_pim * 2048;
                     break;
        case 13762:  salt->salt_iter  = user_options->veracrypt_pim * 2048;
                     break;
        case 13763:  salt->salt_iter  = user_options->veracrypt_pim * 2048;
                     break;
        case 13771:  salt->salt_iter  = 15000 + (user_options->veracrypt_pim * 1000);
                     break;
        case 13772:  salt->salt_iter  = 15000 + (user_options->veracrypt_pim * 1000);
                     break;
        case 13773:  salt->salt_iter  = 15000 + (user_options->veracrypt_pim * 1000);
                     break;
      }

      salt->salt_iter -= 1;
    }
  }

  return 0;
}

void decoder_apply_optimizer (const hashconfig_t *hashconfig, void *data)
{
  const u32 hash_type = hashconfig->hash_type;
  const u32 opti_type = hashconfig->opti_type;

  u32 *digest_buf   = (u32 *) data;
  u64 *digest_buf64 = (u64 *) data;

  if (opti_type & OPTI_TYPE_PRECOMPUTE_PERMUT)
  {
    u32 tt;

    switch (hash_type)
    {
      case HASH_TYPE_DESRACF:
        digest_buf[0] = rotl32 (digest_buf[0], 29);
        digest_buf[1] = rotl32 (digest_buf[1], 29);

        IP (digest_buf[0], digest_buf[1], tt);
        break;

      case HASH_TYPE_BSDICRYPT:
        digest_buf[0] = rotl32 (digest_buf[0], 31);
        digest_buf[1] = rotl32 (digest_buf[1], 31);

        IP (digest_buf[0], digest_buf[1], tt);
        break;
    }
  }

}

void encoder_apply_optimizer (const hashconfig_t *hashconfig, void *data)
{
  const u32 hash_type = hashconfig->hash_type;
  const u32 opti_type = hashconfig->opti_type;

  u32 *digest_buf   = (u32 *) data;
  u64 *digest_buf64 = (u64 *) data;

  if (opti_type & OPTI_TYPE_PRECOMPUTE_PERMUT)
  {
    u32 tt;

    // dont trust this too much, was created untested


        case HASH_TYPE_NETNTLM:

          salt.salt_buf[0] = rotr32 (salt.salt_buf[0], 3);
          salt.salt_buf[1] = rotr32 (salt.salt_buf[1], 3);

          u32 tt;

          FP (salt.salt_buf[1], salt.salt_buf[0], tt);

          break;



    switch (hash_type)
    {
      case HASH_TYPE_DESRACF:
        digest_buf[0] = rotl32 (digest_buf[0], 29);
        digest_buf[1] = rotl32 (digest_buf[1], 29);

        FP (digest_buf[1], digest_buf[0], tt);
        break;

      case HASH_TYPE_BSDICRYPT:
        digest_buf[0] = rotl32 (digest_buf[0], 31);
        digest_buf[1] = rotl32 (digest_buf[1], 31);

        FP (digest_buf[1], digest_buf[0], tt);
        break;
    }
  }


}

