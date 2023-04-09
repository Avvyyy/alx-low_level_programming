#!/bin/bash

# Listing all the c files in the directory
c_file=$(ls *.c)

# Converting the .c to .o
for file in $c_file
do
        gcc -c $file
done

# Converting to .a
ar rc liball.a *.o

# Removing the .o files for good practice
rm *.o

