nesC
====
之前一直在用TinyOS,又想学习编译原理，故以此作为project学习.
**nesC** (pronounced "NES-see") is an extension to the C programming language
designed to embody the structuring concepts and execution model of TinyOS.
TinyOS is an event-driven operating system designed for sensor network nodes
that have very limited resources (e.g., 8K bytes of program memory, 512 bytes
of RAM). 

Requirements
------------

To build nesC from source requires the following packages:

- automake
- autoconf (2.64 or 2.69 or later. 2.67 and 2.68 are known not to work.)
- emacs (not version 24.3)
- gperf
- bison
- flex

Install
-------

    ./Bootstrap
    ./configure
    make
    make install

Usage
-----

Please reference `man nescc`.

