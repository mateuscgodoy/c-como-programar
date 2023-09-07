#include <stdio.h>
#include <locale.h>

#define REVENDA_1 2.98
#define REVENDA_2 4.50
#define REVENDA_3 9.98
#define REVENDA_4 4.49
#define REVENDA_5 6.87

int main(void)
{
  setlocale(LC_ALL, "");

  double lucroSemanal = 0;
  int numDoProduto = 0, qtdVendida = 0;

  while (1)
  {
    wprintf(L"Insira o n%lcmero do produto (ou -1 para sair): ", L'ú');
    scanf("%d", &numDoProduto);

    if (numDoProduto == -1)
      break;

    printf("Insira a quantidade vendida: ");
    scanf("%d", &qtdVendida);

    switch (numDoProduto)
    {
    case 1:
      lucroSemanal += REVENDA_1 * qtdVendida;
      break;
    case 2:
      lucroSemanal += REVENDA_2 * qtdVendida;
      break;
    case 3:
      lucroSemanal += REVENDA_3 * qtdVendida;
      break;
    case 4:
      lucroSemanal += REVENDA_4 * qtdVendida;
      break;
    case 5:
      lucroSemanal += REVENDA_5 * qtdVendida;
      break;
    default:
      wprintf(L"Este n%lco %lc um n%lcmero de produto v%lclido. Tente novamente.\n", L'ã', L'é', L'ú', L'á');
      break;
    }
  }

  printf("\nO lucro semanal foi de R$ %.2lf\n", lucroSemanal);

  return 0;
}