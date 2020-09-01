/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Complete the function, marks_summation that returns the total summa-
 *    tion of marks of boys if gender = b or girks if g. 
 *
 *        Version:  1.0
 *        Created:  01-09-2020 11:28:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int den = (gender == 'b') ? 0 : 1; 
  int sum = 0;
  for (int i = 0; (i < number_of_students); i++)
    if (i%2 == den)
        sum += marks[i];
  return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
