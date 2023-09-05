#include <stdio.h>
#include <locale.h>

#define JUROS 0.05
#define ANOS 10

int main(void) {
  setlocale(LC_ALL, "");

  float investimento = 1000, jurosAcumulado;

  jurosAcumulado = 1 + JUROS;

  for (int i = 1; i <= ANOS - 1; i++) {
    jurosAcumulado *= (1 + JUROS);
  }

  investimento = investimento * jurosAcumulado;
  wprintf(L"O valor final do investimento ap%lcs %d anos foi de: R$ %.2f", L'ó', ANOS, investimento);

  return 0;
}