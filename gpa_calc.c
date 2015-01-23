#include "gpa_calc.h"
#include <stdio.h>

/**
 * @brief Average the class grades.
 * @param grades An array of grades in the class.
 * @param numGrades The number of grades stored in the grades array.
 *
 * @return The class GPA as an int.
 */
int averageGrade(int grades[], int numGrades)
{
    int i;
    double gpa = 0;
    int highest = 0;
    int lowest = 100;
    for (i = 0; i < numGrades; i++)
    {
        (grades[i] < lowest) ? lowest = grades[i] : 1;
        (grades[i] > highest) ? highest = grades[i] : 1;
        gpa += grades[i];    
    }
    gpa = (double)gpa / (double)numGrades;
    printf("GPA: %f\nHighest: %d\nLowest: %d\n", gpa, highest, lowest);
    return 0;
}

