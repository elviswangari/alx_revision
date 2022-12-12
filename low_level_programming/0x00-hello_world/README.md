# inside 0x00-hello_world

1. 0-preprocessor - a bash script that runs a c file through the preprocessor and saves the results into another file.
1. 1-compiler - a bash script that compiles c file but does not link into an output file with .o extension
1. 2-assembler - a bash script that generates the assembly code and saves it in onother file with .s extension
1. 3-name - a bash script that compiles a c file and creates an executable file named cisfun
1. 4-puts.c - a c file that prints ``"Programming is like building a multilingual puzzle`` without the use of printf function.
1. 5-printf.c - a c file that print `` with proper grammar, but the outcome is a piece of art, ``followed by a new line using the printf function
1. 6-sizes.c - a C program that prints the size of various types on the computer it is compiled and run on.install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
1. 100-intel -  a script that generates the assembly code (Intel syntax) of a C code and save it in an output file with the same name but diffrent extesion .s
1. 101-quote.c- a C program that prints exactly ``and that piece of art is useful" - Dora Korpar, 2015-10-19,`` followed by a new line, to the standard error.not allowed to use puts and printf functions

## how to run the bash scripts
1. make sure your script has execution permission ``chmod u+x file_name``
1. save file name into variable $CFILE by exporting ``export CFILE=filename.c``
1. run your script ``./scriptname``
___
Author: [Elvis Wangari](https://linkedin.com/in/elvis-wangari)
