#include <stdio.h>

int power(int base, int expoente);

int main(void) {

  printf("Base: 3 | Expoente: 3 = %d", power(3, 3));
  return 0;
}

int power(int base, int expoente) {
  if (expoente == 0) return 1;

  return base * power(base, expoente - 1);  
}