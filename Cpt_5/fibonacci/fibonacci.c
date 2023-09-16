#include <stdio.h>

long fibonacci(long n);

int main(void) {
  long num = 0, result = 0;

  printf("Digite um inteiro: ");
  scanf("%d", &num);

  result = fibonacci(num);

  printf("Fibonacci( %ld ) = %ld\n", num, result);

  return 0;
}

long fibonacci(long n) {
  if ( n == 0 | n == 1 ) {
    return n;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}