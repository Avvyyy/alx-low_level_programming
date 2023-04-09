#!/bin/bash

# Converting the .c to .o
gcc -c *.c

# Converting to .a
ar rc liball.a *.o

#Indexing the files in the library
ranlib liball.a

# Removing the .o files for good practice
rm *.o

