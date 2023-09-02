#include <stdio.h>
#include <locale.h>
#include <corecrt_math_defines.h>

int main(void) {
  setlocale(LC_ALL, "");

  float raio = 0;

  printf("Insira o valor do raio: ");
  scanf("%f", &raio);
  printf("\n");

  wprintf(L"Per%lcmetro: %.3f\n", L'í', 2 * raio * M_PI);
  wprintf(L"%lcrea: %.3f\n", L'Á', raio * raio * M_PI);

  return 0;
}