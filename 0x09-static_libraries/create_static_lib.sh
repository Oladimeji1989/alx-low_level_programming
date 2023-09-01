#!bin/bash
gcc -Wall -pedantic -worror -wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a

