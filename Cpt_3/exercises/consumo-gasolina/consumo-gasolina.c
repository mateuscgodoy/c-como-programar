#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  float litrosAtual = 0, litrosTotal = 0, kmRodadosAtual = 0, kmRodadosTotal = 0;

  while (litrosAtual != -1) {
    printf("Informe quantos litros abasteceu (insira -1 para sair): ");
    scanf("%f", &litrosAtual);

    if (litrosAtual == -1) {
      break;
    }

    printf("Informe quantos km dirigiu: ");
    scanf("%f", &kmRodadosAtual);
    printf("\n");

    if (kmRodadosAtual > 0 && litrosAtual > 0) {
      wprintf(L"CONSUMO ATUAL: %.3f km/L.\n", kmRodadosAtual / litrosAtual);

      litrosTotal += litrosAtual;
      kmRodadosTotal += kmRodadosAtual;
    } else {
      wprintf(L"Valores informados s%lco inv%lclidos. Tente novamente.\n", L'ã', L'á');
    }
  }

  printf("\n");

  if (kmRodadosTotal > 0 && litrosTotal > 0) {
    printf("CONSUMO TOTAL: %.3f km/L.\n", kmRodadosTotal / litrosTotal);
  }

  printf("Obrigado por usar o programa. Volte sempre!");
  return 0;
}