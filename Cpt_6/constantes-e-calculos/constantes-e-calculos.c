#include <stdio.h>

#define SIZE 10

int main(void) {
  int s[SIZE];
  
  for(int i = 0; i < SIZE; i++) {
    s[i] = 2 + 2 * i;
  }

  printf("%s%13s\n", "Elemento", "Valor");

  for (int i = 0; i < SIZE; i++) {
    printf("%7d%13d\n", i, s[i]);
  }

  return 0;
}