#include <stdio.h>

void perfect(int number);

int main(void){
  for (int i = 1; i <= 1000; i++) {
    perfect(i);
  }

  return 0;
}

void perfect(int number) {
  int perfectNum = 0;
  int metade = number % 2 == 0 ? number / 2 : number / 2 + 1;

  for (int i = 1; i <= metade; i++) {
    if (number % i == 0) {
      perfectNum += i;
    }
  }

  if (perfectNum == number) {
    printf("%d PERFEITO! Fatores: ", perfectNum);
    for (int i = 1; i <= number / 2; i++) {
      if (number % i == 0) {
        printf(" %d ", i);
      }
    }
    printf("\n");
  }
}