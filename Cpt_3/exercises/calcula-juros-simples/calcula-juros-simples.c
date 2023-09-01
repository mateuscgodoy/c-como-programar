#include <stdio.h>
#include <locale.h>

#define ANO 365

int main(void) {
  setlocale(LC_ALL, "");

  float valorPrincipal = 0, taxaDeJuros = 0, jurosSimples = 0;
  int prazoEmDias = 0;

  while (valorPrincipal != -1) {
    wprintf(L"Informe o valor principal do empr%lcstimo (entre -1 para sair): R$ ", L'é');
    scanf("%f", &valorPrincipal);

    if (valorPrincipal == -1) {
      break;
    }

    printf("Informe o valor da taxa de juros: ");
    scanf("%f", &taxaDeJuros);
    wprintf(L"Informe o prazo do empr%lcstimo em dias: ", L'é');
    scanf("%d", &prazoEmDias);

    jurosSimples = valorPrincipal * taxaDeJuros * prazoEmDias / ANO;
    wprintf(L"O valor do Juros Simples %lc de: R$ %.2f\n\n", L'é', jurosSimples);
  }

  printf("\nObrigado por utilizar este programa. Volte sempre!\n");
  return 0;
}