Pointers, Arrays, and Strings

Requirements

Language: C

OS: Ubuntu 14.04 LTS

Compiler: gcc 4.8.4, C89

Style guidelines: [Betty style] (https://github.com/holbertonschool/Betty/wiki)

Synopsis

This repository holds some projects I worked on for Holberton School. The goal is to learn coding and concepts through the C programming language.



Concepts to be learned in this repository:

pointers and how to use them

arrays and how to use them

differences between pointers and arrays

how to use strings and how to manipulate them

scope of variables

Description of what each file does:

a function that takes a pointer to an int as parameter and updates the value of the int to 98

a function that swaps the values of two integers

a function that returns the length of a string

a function that prints a string, followed by a new line, to stdout

a function that prints a string, in reverse, followed by a new line

a function that reverses a string

a function that prints one char out of 2 of a string, followed by a new line

a function that prints half of a string, and (length_of_string - 1) / 2 if odd length

a function that prints n elements of an array of integers

a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest

a function that converts a string to an integer -the number in the string can be preceded by an infinite number of characters -need to take into account all the - and + signs before the number -if there are no numbers in the string, the function must return 0 -not allowed to use long -not allowed to declare new variables of “type” array -not allowed to hard-code special values -code needs to work on both ubuntu 14.04 LTS and 16.04 LTS -code will be compiled with -fsanitize=signed-integer-overflow gcc flag (You can install the last version on your VM) -code will be compiled with gcc version 5 or above

a program that generates random valid passwords for the program 101-crackme

Authors
Samuel kufre willie
