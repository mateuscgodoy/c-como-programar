#include <stdlib.h>
#include <stdio.h>

int main(void) {
  unsigned seed;

  printf("Digite a semente: ");
  scanf("%u", &seed);

  srand(seed);

  for (int i = 1; i <= 10; i++) {
    printf("%10d", 1 + (rand() % 6));

    if (i % 5 == 0) {
      printf("\n");
    }
  }

  return 0;
}