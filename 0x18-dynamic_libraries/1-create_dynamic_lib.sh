#!/bin/bash
gcc gcc -fPIC -Wall -Wextra -Werror -pedantic *.c -shared -o liball.so
