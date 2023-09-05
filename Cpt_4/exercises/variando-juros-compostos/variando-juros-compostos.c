#include <stdio.h>
#include <locale.h>

#define ANOS 10
#define INVESTIMENTO 1000

int main(void)
{
  setlocale(LC_ALL, "");

  float investimento = INVESTIMENTO, jurosAcumulado;

  for (float juros = 0.05; juros <= 0.1; juros += 0.01)
  {
    investimento = INVESTIMENTO;
    jurosAcumulado = 1 + juros;
    for (int i = 1; i <= ANOS - 1; i++)
    {
      jurosAcumulado *= (1 + juros);
    }

    investimento = investimento * jurosAcumulado;
    wprintf(L"\nO valor final do investimento ap%lcs %d anos a uma taxa de %.0f%% foi de: R$ %.2f\n", L'ó', ANOS, juros*100, investimento);
  }

  return 0;
}