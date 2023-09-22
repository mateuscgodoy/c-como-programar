#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#include "stats.h"

#define NUM_DE_RESULTADOS 99

int* criaResultados(int size);

int main(void) {
  srand(time(NULL));

  int* arr = criaResultados(NUM_DE_RESULTADOS);

  int arr2[] = {3, 3, 3, 3, 4, 4, 4 ,4 ,5 ,5, 5, 5};
  printf("Media: %.2f\n", average(arr2, 12));

  int arr3[] = {3, 3, 3, 3, 4, 5, 5, 5, 5};
  printf("Median: %d\n", median(arr3, 9));

  mode(arr, NUM_DE_RESULTADOS);
  return 0;
}


int* criaResultados(int size) {
  int* arr = malloc(size * sizeof(int));
  if (arr == NULL) {
    return NULL;
  }

  for (int i = 0; i < size; i++) {
    arr[i] = 1 + (rand() % 10 );
  }

  return arr;
}