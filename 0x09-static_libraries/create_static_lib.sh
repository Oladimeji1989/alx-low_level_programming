#!/bin/bash
gcc -wall -pedantic -worror -wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
