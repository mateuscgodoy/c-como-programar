#include <stdio.h>
#include <locale.h>

#define NUM_DE_CLIENTES 3

int main(void) {
  setlocale(LC_ALL, "");

  int numDaConta = 0;
  float limiteAtual = 0, saldoAtual = 0;

  for (int i = 1; i <= NUM_DE_CLIENTES; i++) {
    printf("\nCliente %d\n", i);
    wprintf(L"Insira o N%lcmero da Conta: ", L'ú');
    scanf("%d", &numDaConta);
    wprintf(L"Insira o Limite de Cr%lcdito atual: R$ ", L'é');
    scanf("%f", &limiteAtual);
    printf("Insira o Saldo Atual: R$ ");
    scanf("%f", &saldoAtual);

    limiteAtual /= 2;
    wprintf(L"\n\nLimite de Cr%lcdito Atualizado: R$ %.2f\n", L'é', limiteAtual);

    saldoAtual -= limiteAtual;

    if (saldoAtual > 0) {
      wprintf(L"O Saldo Atualizado est%lc acima do Limite de Cr%lcdito.\n", L'á', L'é');
      printf("Valor acima: R$ %.2f\n", saldoAtual);
    } else {
      wprintf(L"O Saldo Atualizado est%lc abaixo do Limite de Cr%lcdito.\n", L'á', L'é');
      printf("Valor abaixo: R$ %.2f\n", -1 * saldoAtual);
    }
    

  }

  return 0;
}