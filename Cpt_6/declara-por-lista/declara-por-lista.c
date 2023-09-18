#include <stdio.h>

int main(void) {
  int n[10] = {32, 27, 64, 18, 95, 14, 90, 70};

  printf("%s%13s\n", "Elemento", "Valor");

  for (int i = 0; i < 10; i++) {
    printf("%7d%13d\n", i, n[i]);
  }
}