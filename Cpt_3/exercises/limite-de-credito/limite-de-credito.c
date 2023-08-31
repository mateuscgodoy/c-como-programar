#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int numConta = 0;
  float saldoInicial = 0, encargos = 0, creditos = 0, limiteDeCreditos = 0;

  while (numConta != -1) {
    wprintf(L"Insira o N%lcmero da Conta (Insira -1 para sair.): ", L'ú');
    scanf("%d", &numConta);

    if (numConta == -1) break;

    printf("Insira o Saldo Inicial: $");
    scanf("%f", &saldoInicial);
    printf("Insira o Total de Encargos: $");
    scanf("%f", &encargos);
    wprintf(L"Insira o Total de Cr%lcditos: $", L'é');
    scanf("%f", &creditos);
    wprintf(L"Insira o Limite de Cr%lcditos: $", L'é');
    scanf("%f", &limiteDeCreditos);

    float novoSaldo = saldoInicial + encargos - creditos;

    printf("\n========================\n");

    printf("\nConta: %d\n", numConta);
    wprintf(L"Limite de Cr%lcdito: %.2f\n", L'é', limiteDeCreditos);
    printf("Saldo Atual: $%.2f\n\n", novoSaldo);

    if (novoSaldo > limiteDeCreditos) {
      printf("Limite de crédito ultrapassado em $%.2f.\n", novoSaldo - limiteDeCreditos);
    } else {
      wprintf(L"O saldo atual est%lc a $%.2f do Limite de Crédito.\n", L'á', limiteDeCreditos - novoSaldo);
    }

    printf("\n========================\n");
  }

  printf("Obrigado por utilizar este programa. Volte Sempre!\n");

  return 0;
}