#include <stdio.h>

void printGrades(float grades[][4], int numOfStudents, int numOfGrades);
float minimum(float grades[][4], int numOfStudents, int numOfGrades);
float maximum(float grades[][4], int numOfStudents, int numOfGrades);
float classAverage(float grades[][4], int numOfStudents, int numOfGrades);
float studentAverage(float grades[][4], int numOfStudents, int numOfGrades, int student);

void printGrades(float grades[][4], int numOfStudents, int numOfGrades) {
  int i = 0;

  printf("\n______________________________________________\n");
  printf("%s\t%10s\n", "STUDENTS", "GRADES");
  printf("\t\t");
  for (i = 0; i < numOfGrades; i++) {
    printf("  %d\t", i + 1);
  }
  printf("\n______________________________________________\n");
  for (i = 0; i < numOfStudents; i++) {
    printf("  %d\t\t", i + 1);
    for (int j = 0; j < numOfGrades; j++) {
      printf("%.2f\t", grades[i][j]);
    }
    printf("\n");
  }
  printf("______________________________________________\n");
}

float minimum(float grades[][4], int numOfStudents, int numOfGrades) {
  float lowest = 11;

  for (int i = 0; i < numOfStudents; i++) {
    for (int j = 0; j < numOfGrades; j++) {
      if (grades[i][j] < lowest) {
        lowest = grades[i][j];
      }
    }
  }
  return lowest;
}

float maximum(float grades[][4], int numOfStudents, int numOfGrades) {
  float highest = 0;

  for (int i = 0; i < numOfStudents; i++) {
    for (int j = 0; j < numOfGrades; j++) {
      if (grades[i][j] > highest) {
        highest = grades[i][j];
      }
    }
  }
  return highest;
}

float classAverage(float grades[][4], int numOfStudents, int numOfGrades) {
  float sum = 0;

  for (int i = 0; i < numOfStudents; i++) {
    for (int j = 0; j < numOfGrades; j++) {
      sum += grades[i][j];
    }
  }

  return sum / (numOfStudents * numOfGrades);
}

float studentAverage(float grades[][4], int numOfStudents, int numOfGrades, int student) {
  float sum = 0;

  for (int i = 0; i < numOfStudents; i++) {
    for (int j = 0; j < numOfGrades; j++) {
      if (i == student) {
        sum += grades[i][j];
      }
    }
  }

  return sum / numOfGrades;
}