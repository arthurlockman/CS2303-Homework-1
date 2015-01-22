/** 
 * @file Lab1.c
 * @brief CS 2303 Lab 1 Code
 * @author Arthur Lockman
 * @version 1.0.0
 * @date 2015-01-21
 */
#include <stdio.h>

/** 
 * @brief The main function for this lab.
 *
 * This functionprints the numbers 1 through 17, then exits.
 * 
 * @return nothing.
 */
int main()
{
    int i; //Loop counter

    printf("Hello, World!\n"); //Print a cheery greeting!

    /* This loop prints the numbers from 1 to 17, one per line */
    for (i = 1; i <= 17; i++)
    {
        printf("%d\n", i);
    }

    printf("Goodbye!\n");
}

