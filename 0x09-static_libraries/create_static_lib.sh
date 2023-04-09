#!/bin/bash

# Converting the .c to .o
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

# Converting to .a
ar -rc liball.a *.o

#Indexing the files in the library
ranlib liball.a

