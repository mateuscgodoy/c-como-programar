#include <stdio.h>
#include <locale.h>

#define VALOR_HORA_EXTRA 1.5
#define HORAS_PADRAO 40

int main(void) {
  setlocale(LC_ALL, "");

  int horasTrabalhadas = 0;
  float salarioPorHora = 0, salario = 0;

  while (horasTrabalhadas != -1) {
    wprintf(L"Insira o n%lcmero de horas trabalhas: ", L'ú');
    scanf("%d", &horasTrabalhadas);

    if (horasTrabalhadas == -1) break;

    wprintf(L"Insira o sal%lcrio por hora: R$ ", L'á');
    scanf("%f", &salarioPorHora);

    if (horasTrabalhadas <= 40) {
      salario = salarioPorHora * horasTrabalhadas;
    } else {
      salario = HORAS_PADRAO * salarioPorHora 
        + ((horasTrabalhadas - HORAS_PADRAO) * salarioPorHora * VALOR_HORA_EXTRA); 
    }

    printf("Total a receber: R$ %.2f\n\n", salario);
  }

  printf("\nObrigado por usar esse programa. Volte sempre!\n");
  return 0;
}