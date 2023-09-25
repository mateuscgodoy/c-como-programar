#include <stdio.h>
#include <locale.h>

#define SIZE 5

float min(float numA, float numB, float numC);
float minArr(float arr[], int size);

int main(void) {
  setlocale(LC_ALL, "");

  float numbers[SIZE];
  float number = 0;

  for(int i = 0; i < SIZE; i++) {
    wprintf(L"Insira o n%lcmero: ", L'ú');
    scanf("%f", &number);
    numbers[i] = number;
  }
  // printf("%.2f", min(1, 5, 10));
  printf("%.2f", minArr(numbers, SIZE));

  return 0;
}

float min(float numA, float numB, float numC) {
  if (numB < numA && numB < numC) {
    return numB;
  }

  if (numC < numB && numC < numA) {
    return numC;
  }

  return numA;
}

float minArr(float arr[], int size) {
  float lowest = arr[0];

  for (int i = 1; i < size; i++) {
    if (arr[i] < lowest) {
      lowest = arr[i];
    }
  }
  return lowest;
}