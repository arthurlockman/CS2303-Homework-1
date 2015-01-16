#include <stdio.h>
#include <stdlib.h>
#include "gpa_calc.h"

/* This program reads in a number of student grades from the command line. 
 * Usage:
 *      ./num_grades [grade 1] [grade 2] ... [grade n]
 * Example:
 *      ./num_grades 95 97 83 84
 */

int main(int argc, const char* argv[])
{
    if (argc < 2) // Check that there was an entry
    {
        printf("Must enter a number on the command line!\n");
        return 1; // Indicate failure
    }
    
    int grades[argc - 1]; //initialize grades array with enough elements to hold all inputs
    int numberOfGrades = 0; //initialize var to hold the number of grades entered
    
    /* Loop iterates once for each grade entered on the command line. 
     * It terminates once each grade entered has been stored into the grades array.
     */
    int i; //loop iteration counter
    for (i = 1; i <= argc - 1; i++)
    {
        grades[i-1] = atoi(argv[i]); //store grade in array
        printf("Grade: %d\n", grades[i-1]);
        numberOfGrades++;
    }

    int gpa = averageGrade(grades, numberOfGrades);
 
    printf("Class GPA: %d\n", gpa);
    return 0; // Indicate success!
}

