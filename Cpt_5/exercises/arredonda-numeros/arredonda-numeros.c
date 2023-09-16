#include <math.h>
#include <stdio.h>
#include <locale.h>

void arredInteiro(float num);
void arredDecimos(float num);
void arredCentesimos(float num);
void arredMilesimos(float num);

int main(void) {
  setlocale(LC_ALL, "");

  float x = 0, y = 0;

  while (x != 'q') {
    wprintf(L"Insira um n%lcmero ou '0' para sair: ", L'ú');
    scanf("%f", &x);

    if (x == 0) break;

    arredInteiro(x);
    arredDecimos(x);
    arredCentesimos(x);
    arredMilesimos(x);

    printf("\n");
  }

  return 0;
}

void arredInteiro(float num) {
  float y = floor(num + .5);
  wprintf(L"N%lcmero: %.2f \tInteiro: %.4f\n", L'ú', num, y);
}

void arredDecimos(float num) {
  float y = floor( num * 10 + .5) / 10;
  wprintf(L"N%lcmero: %.2f \tD%lccimos: %.4f\n", L'ú', num, L'é', y);
}

void arredCentesimos(float num) {
  float y = floor( num * 100 + .5 ) / 100;
  wprintf(L"N%lcmero: %.2f \tCent%lcsimos: %.4f\n", L'ú', num, L'é', y);
}

void arredMilesimos(float num) {
  float y = floor( num * 1000 + .5 ) / 1000;
  wprintf(L"N%lcmero: %.2f \tMil%lcsimos: %.4f\n", L'ú', num, L'é', y);
}
