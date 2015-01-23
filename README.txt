# CS2303: Homework 1
Homework 1 for WPI CS 2303, by Arthur Lockman.

This project contains a few different programs. Each are detailed below.

##Files
### num.c
This program is very simple. All it does is read in a number from the command line and print out that number. To use it, call ./num [some number]. For instance, calling ./num 6 would produce the following:

	The number you entered was 6

### num_grades.c
This program is slightly more complex than the basic num.c program. This program calculates the GPA of a list of grades that has been input.

To use the program call ./num_grades [grade 1] [grade 2] ... [grade n] 

For instance, calling ./num_grades 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 would produce the following:

	Grades entered: 18
	Grade: 1
	Grade: 2
	Grade: 3
	Grade: 4
	Grade: 5
	Grade: 6
	Grade: 7
	Grade: 8
	Grade: 9
	Grade: 1
	Grade: 2
	Grade: 3
	Grade: 4
	Grade: 5
	Grade: 6
	Grade: 7
	Grade: 8
	Grade: 9
	GPA: 5.000000
	Highest: 9
	Lowest: 1

The program handles the input of more than MAX_GRADES (20) gracefully, by checking to see if there are more than 20 grades input and only processing the first 20 of those input. For instance running the program with ./num_grades 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 generates this output:

	Too many grades input! Truncating to 20 grades.
	Grades entered: 20
	Grade: 1
	Grade: 2
	Grade: 3
	Grade: 4
	Grade: 5
	Grade: 6
	Grade: 7
	Grade: 8
	Grade: 9
	Grade: 1
	Grade: 2
	Grade: 3
	Grade: 4
	Grade: 5
	Grade: 6
	Grade: 7
	Grade: 8
	Grade: 9
	Grade: 1
	Grade: 2
	GPA: 4.650000
	Highest: 9
	Lowest: 1

## Compiling and Linking
To compile the program, simple enter the directory and type make. To clean previous builds, use make clean.
