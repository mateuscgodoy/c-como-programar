#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int even(int num);

int main(void) {
  srand(time(NULL));
  int num = 0;

  for(int i = 1; i <= 10; i++) {
    num = 1 + (rand() % (i * 10));
    if (even(num) == 1) {
      printf("%d = PAR\n", num);
    } else {
      printf("%d = IMPAR\n", num);
    }
  }

  return 0;
}

int even(int num) {
  if (num % 2 == 0) return 1;

  return 0;
}