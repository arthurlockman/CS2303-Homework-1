#include "gpa_calc.h"

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
    int gpa = 0;
    for (i = 0; i < numGrades; i++)
    {
        gpa += grades[i];    
    }
    return (int)((float)gpa / (float)numGrades);
}

