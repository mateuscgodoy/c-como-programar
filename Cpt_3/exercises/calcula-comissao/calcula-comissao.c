#include <stdio.h>
#include <locale.h>

#define VALOR_SEMANAL 200
#define COMISSAO 0.09

int main(void) {
  setlocale(LC_ALL, "");
  float valorDaVenda = 0, totalAReceber = 0;

  while (valorDaVenda != -1) {
    printf("Informe a venda semanal (entre -1 para sair): R$ ");
    scanf("%f", &valorDaVenda);

    if (valorDaVenda == -1) {
      break;
    }

    totalAReceber = VALOR_SEMANAL + (COMISSAO * valorDaVenda);

    wprintf(L"O pagamento ser%lc de: R$%.2f\n\n", L'á', totalAReceber);
  }

  printf("\nObrigado por utilizar este programa. Volte sempre!\n");
  return 0;
}