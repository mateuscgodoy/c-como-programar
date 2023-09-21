#include <stdio.h>

#define TAMANHO 100

int linearSearch(const int array[], int key, int size);

int main(void) {
  int a[TAMANHO];
  int searchKey = 0, element = 0;

  for (int x = 0; x < TAMANHO; x++) {
    a[x] = 2 * x;
  }

  printf("Digite uma chave de pesquisa de inteiro:\n");
  scanf("%d", &searchKey);

  element = linearSearch(a, searchKey, TAMANHO);

  if (element != -1) {
    printf("Valor encontrado no elemento %d\n", element);
  } else {
    printf("Valor inexistente.\n");
  }

  return 0;
}

int linearSearch(const int array[], int key, int size) {
  for (int n = 0; n < size; n++) {
    if (array[n] == key) {
      return n;
    }
  }
  
  return -1;
}