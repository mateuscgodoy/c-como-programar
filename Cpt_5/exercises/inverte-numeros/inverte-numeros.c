#include <stdio.h>

void inverteNumero(int number);

int main(void) {
  int number = 0;

  printf("Insira um valor inteiro: ");
  scanf("%d", &number);

  inverteNumero(number);

  return 0;
}

void inverteNumero(int number) {
  int output = 0;

  printf("%d inverte em ", number);

  while (number > 0) {
    int decimal = 1;
    while (decimal < number/10) {
      decimal *= 10;
    }

    output += ((number % 10) * decimal);
    number /= 10;
  }

  printf("%d!\n", output);
}