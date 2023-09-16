#include <stdio.h>

long fatorial(long number);

int main(void) {
  for (int i = 0; i <= 10; i++) {
    printf("%2d! = %ld\n", i, fatorial(i));
  }

  return 0;
}

long fatorial(long number) {
  if (number <= 1) {
    return 1;
  }

  return number * fatorial(number - 1);
}
