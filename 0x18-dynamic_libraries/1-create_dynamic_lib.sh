#!/bin/bash
gcc -wall -wextra -worror -pedantic -c -FPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
