#include <stdio.h>

void printArray (const int a[][3]);

int main(void) {
  int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int arr2[2][3] = {1, 2, 3, 4, 5};
  int arr3[2][3] = {{1, 2}, {4}};

  printf("Valores no primeiro Array:\n");
  printArray(arr1);

  printf("Valores no segundo Array:\n");
  printArray(arr2);

  printf("Valores no terceiro Array:\n");
  printArray(arr3);

  return 0;
}

void printArray(const int a[][3]) {
  int i;
  int j;

  for (i = 0; i <= 1; i++) {
    for (j = 0; j <= 2; j++) {
      printf("%d ", a[i][j]);
    }

    printf("\n");
  }
}