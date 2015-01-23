/** 
 * @file num_grades.c
 * @brief This program reads in a number of student grades from the command line and finds the
 * smallest and largest grade, as well as the GPA of the entered grades. 
 * Usage:
 *      ./num_grades [grade 1] [grade 2] ... [grade n]
 * Example:
 *      ./num_grades 95 97 83 84
 *  
 * @author Arthur Lockman
 * @version 1.0.0
 * @date 2015-01-22
 */
#include <stdio.h>
#include <stdlib.h>
#include "gpa_calc.h"

#define MAX_GRADES 20

/** 
 * @brief The main function. Reads the numbers and performs calculations 
 * using external gpa_calc library.
 * 
 * @return 0 if no errors. 
 */
int main(int argc, const char* argv[])
{
    if (argc < 2) // Check that there was an entry
    {
        printf("Must enter one or more grades on the command line!\n");
        return 1; // Indicate failure
    } else if (argc - 1 > MAX_GRADES)
    {
        printf("Too many grades input! Truncating to %d grades.\n", MAX_GRADES);
    }
    
    int grades[MAX_GRADES]; //initialize grades array with enough elements to hold all inputs
    int numberOfGrades = (argc-1 > MAX_GRADES) ? MAX_GRADES : argc - 1; //initialize var to hold the number of grades entered
    printf("Grades entered: %d\n", numberOfGrades); 
    
    /* Loop iterates once for each grade entered on the command line. 
     * It terminates once each grade entered has been stored into the grades array.
     */
    int i; //loop iteration counter
    for (i = 1; i <= numberOfGrades; i++)
    {
        grades[i-1] = atoi(argv[i]); //store grade in array
        printf("Grade: %d\n", grades[i-1]);
    }
    return averageGrade(grades, numberOfGrades); // Indicate success!
}

