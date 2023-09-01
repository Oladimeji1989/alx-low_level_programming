#!bin/bash
gcc -wall -pedantic -worror -wextra -c *.c
ar -rcs liball.a *.o
ranlib liball.a

