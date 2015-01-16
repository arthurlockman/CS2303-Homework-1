#include <stdio.h>
#include <stdlib.h>

/* Very simple program to demonstrate reading a number from the command line.
 * Usage:
 *      ./num [some_number]
 * Example:
 *      ./num 2014
 */

int main(int argc, const char* argv[])
{
    int n; //Integer read from the command line goes in here.

    if (argc < 2)
    {
        printf("Must enter a number on the command line!\n");
        return 1;
    }

    n = atoi(argv[1]);
    printf("The number you entered was %d\n", n);
    return 0;
}

