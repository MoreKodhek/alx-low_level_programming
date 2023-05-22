#!/bin/bash
gcc -fPIC -Wall -Wextra -Werror -pedantic *.c -shared -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
