#include <stdio.h>

int square(int y); // Protótipo da Função

int main(void) {
  int x;

  for (x = 1; x <= 10; x++) {
    printf("%d", square(x)); // Chamada ou Invocação da Função
    printf("\n");
  }

  return 0;
}

// Definição da Função
int square(int y) {
  return y * y;
}