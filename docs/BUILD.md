hashcat build documentation
=
# Revision:
* 1.3

# Authors:
* Gabriele Gristina <<matrix@hashcat.net>>
* Christoph Heuwieser <<dropdead@hashcat.net>>
* magnum <<john.magnum@hushmail.com>>

# Building hashcat for Linux and OSX

Get a copy of the **hashcat** repository

```sh
$ git clone https://github.com/hashcat/hashcat.git
```

Run "make"

```sh
$ make
```

# Install hashcat for Linux

The install target is linux FHS compatible and can be used like this:

```sh
$ make install
```

If you install it, cached kernels, session files, restore- and pot-files etc. will go to $HOME/.hashcat/

# Building hashcat for Windows

Get a copy of the **hashcat** repository

```sh
$ git clone https://github.com/hashcat/hashcat.git
```

Basically all you need is the OpenCL Headers.

Simply clone into the reference Implementation:

```sh
$ mkdir -p deps/OpenCL-Headers
$ git clone https://github.com/KhronosGroup/OpenCL-Headers deps/OpenCL-Headers/CL
```

```sh
$ make win32 win64
```
=
Enjoy your fresh **hashcat** binaries ;)
