#include <stdio.h>

int main(void) {
  int sum = 0;
  for (int i = 2; i <= 30; i += 2) {
    sum += i;
  }

  printf("Soma dos pares de 2 a 30: %d.\n", sum);
  return 0;
}