#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#include "stats.h"

#define NUM_DE_RESULTADOS 99

int* criaResultados(int size);

int main(void) {
  setlocale(LC_ALL, "");

  srand(time(NULL));

  int* resultados = criaResultados(NUM_DE_RESULTADOS);

  printf("\n===============================\n");
  wprintf(L"AN%lcLISE DOS RESULTADOS", L'Á');
  printf("\n===============================\n");
  wprintf(L"M%lcDIA: %.2f\n", L'É', average(resultados, NUM_DE_RESULTADOS));
  printf("MEDIANA: %d\n", median(resultados, NUM_DE_RESULTADOS));
  printf("MODA: %d\n", mode(resultados, NUM_DE_RESULTADOS));

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