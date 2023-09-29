#include <stdio.h>

int mdc(int numA, int numB);

int main(void) {

  printf("5 15 => %d\n", mdc(5, 15));
  printf("9 27 => %d\n", mdc(9, 27));
  printf("27 9 => %d\n", mdc(27, 9));

  return 0;
}

int mdc(int numA, int numB) {
  if (numB == 0) {
    return numA;
  }
  mdc(numB, numA % numB);
}