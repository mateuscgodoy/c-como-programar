#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  wprintf(L"N%lcmero\tQuadrado\tCubo\n", L'ú');
  printf("%d\t%d\t\t%d\n", 0, 0*0, 0*0*0);
  printf("%d\t%d\t\t%d\n", 1, 1*1, 1*1*1);
  printf("%d\t%d\t\t%d\n", 2, 2*2, 2*2*2);
  printf("%d\t%d\t\t%d\n", 3, 3*3, 3*3*3);
  printf("%d\t%d\t\t%d\n", 4, 4*4, 4*4*4);
  printf("%d\t%d\t\t%d\n", 5, 5*5, 5*5*5);
  printf("%d\t%d\t\t%d\n", 6, 6*6, 6*6*6);
  printf("%d\t%d\t\t%d\n", 7, 7*7, 7*7*7);
  printf("%d\t%d\t\t%d\n", 8, 8*8, 8*8*8);
  printf("%d\t%d\t\t%d\n", 9, 9*9, 9*9*9);
  printf("%d\t%d\t\t%d\n", 10, 10*10, 10*10*10);

  return 0;
}