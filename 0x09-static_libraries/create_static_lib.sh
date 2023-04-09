#!/bin/bash

# Compile each .c file into a .o file
for file in *.c; do
    gcc -Wall -Werror -c "$file"
done

# Create the static library from the .o files
ar rcs liball.a *.o

# Clean up the .o files
rm -f *.o
