#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>

#include "grades-operations.h"

#define STUDENTS 3
#define GRADES 4

int main(void) {
  setlocale(LC_ALL, "");
  srand(time(NULL));

  float semesterGrades[STUDENTS][GRADES] = {0};
  float currentGrade = 0, decimal = 0, temp = 0;

  for (int i = 0; i < STUDENTS; i++) {
    for (int j = 0; j < GRADES; j++) {
      currentGrade = rand() % 11;
      decimal = (float)(rand() % 101) / 100;

      if (currentGrade < 10) {
        currentGrade += decimal;
      }
      semesterGrades[i][j] = currentGrade;
    }
  }

  printGrades(semesterGrades, STUDENTS, GRADES);
  printf("\n");

  temp = minimum(semesterGrades, STUDENTS, GRADES);
  printf("The lowest grade of the class was %.2f.\n", temp);

  temp = maximum(semesterGrades, STUDENTS, GRADES);
  printf("The highest grade of the class was %.2f.\n", temp);

  temp = classAverage(semesterGrades, STUDENTS, GRADES);
  printf("The average grade of the class was %.2f.\n", temp);

  printf("\n");
  for (int i = 0; i < STUDENTS; i++) {
    temp = studentAverage(semesterGrades, STUDENTS, GRADES, i);
    printf("Student %d semester average grade was %.2f.\n", i + 1, temp);
  }

  return 0;
}