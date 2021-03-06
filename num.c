/** 
 * @file num.c
 * @brief A demonstration of command line arguments.
 *
 * Very simple program to demonstrate reading a number from the command line.
 * Usage:
 *      ./num [some_number]
 * Example:
 *      ./num 2014

 * @author Arthur Lockman
 * @version 1.0.0
 * @date 2015-01-22
 */
#include <stdio.h>
#include <stdlib.h>

/** 
 * @brief The main function. Reads in a number from argv[] and prints
 * it to the command line.
 * 
 * @return 0 if number entered, 1 if nothing entered on command line. 
 */
int main(int argc, const char* argv[])
{
    int n; //Integer read from the command line goes in here.

    if (argc < 2) // Check that there was an entry
    {
        printf("Must enter a number on the command line!\n");
        return 1; // Indicate failure
    }

    n = atoi(argv[1]); // Get string from command line; convert to int
    printf("The number you entered was %d\n", n);
    return 0; // Indicate success!
}

