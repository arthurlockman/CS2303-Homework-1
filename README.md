# CS2303: Homework 1
Homework 1 for WPI CS 2303, by Arthur Lockman.

This project contains a few different programs. Each are detailed below.

## num.c
This program is very simple. All it does is read in a number from the command line and print out that number. To use it, call <code>./num [some number]</code>.

## num_grades.c
This program is slightly more complex than the basic num.c program. This program calculates the GPA of a list of grades that has been input.

To use the program call <code>./num_grades [grade 1] [grade 2] ... [grade n]</code>

I worked to implement this program with (theoretically) no maximum number of grades that can be input, provided the total of the grades doesn't overflow INT_MAX. I did this by having the grades array initialized within the main loop to the length of the number of arguments in <code>argc - 1</code>, since that counts the number of arguments including the name of the function itself. This means that the number of grades to be stored is determined by the actual number of grades entered.

## Compiling and Linking
To compile the program, simple enter the directory and type <code>make</code>. To clean previous builds, use <code>make clean</code>.

