#include <stdio.h>

void staticArrayInt(void);
void automaticArrayInt(void);

int main(void) {
  printf("\nPrimeira Chamada.\n");
  staticArrayInt();
  automaticArrayInt();

  printf("\n\n======================================\n\n");

  printf("Segunda Chamada.\n");
  staticArrayInt();
  automaticArrayInt();

  return 0;
}

void staticArrayInt(void) {
  static int arr[3];

  printf("\nValores na Entrada do Static Int Array.\n");
  for(int i = 0; i <= 2; i++) {
    printf("static[%d] = %d\t", i, arr[i]);
  }

  printf("\nValores na Saida do Static Int Array.\n");
  for (int i = 0; i <= 2; i++) {
    printf("static[%d] = %d\t", i, arr[i] += 5);
  }
}

void automaticArrayInt(void) {
 int arr[3] = {1, 2, 3};

  printf("\nValores na Entrada do Automatic Int Array.\n");
  for(int i = 0; i <= 2; i++) {
    printf("static[%d] = %d\t", i, arr[i]);
  }

  printf("\nValores na Saida do Automatic Int Array.\n");
  for (int i = 0; i <= 2; i++) {
    printf("static[%d] = %d\t", i, arr[i] += 5);
  }
}