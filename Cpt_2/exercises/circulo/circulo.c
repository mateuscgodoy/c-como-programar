#include <stdio.h>
#include <locale.h>

#define PI 3.14159

int main(void) {
  setlocale(LC_ALL, "");

  int raio;

  wprintf(L"Insira o raio da circunfer%lcncia: ", L'ê');
  scanf("%d", &raio);
  printf("\n");

  wprintf(L"Di%lcmetro: %d\n", L'â', raio * 2);
  wprintf(L"Per%lcmetro: %f\n", L'í', 2 * PI * raio);
  wprintf(L"%lcrea: %.2f\n", L'Á', PI * raio * raio);

  return 0;
}