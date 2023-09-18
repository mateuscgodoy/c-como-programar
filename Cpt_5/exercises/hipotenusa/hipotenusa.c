#include <stdio.h>
#include <math.h>

double hipotenusa(double catetoA, double catetoB);

int main(void) {
  printf("%2s%10s%16s%22s\n", "Exemplo", "Cateto A", "Cateto B", "Hipotenusa");
  printf("%2d%10d%16d%22.2lf\n",1,3,4, hipotenusa(3,4));
  printf("%2d%10d%16d%22.2lf\n",2,5,12, hipotenusa(5,12));
  printf("%2d%10d%16d%22.2lf\n",3,8,15, hipotenusa(8,15));

  return 0;
}

double hipotenusa(double catetoA, double catetoB) {
  return sqrt((catetoA * catetoA) +( catetoB * catetoB));
}

