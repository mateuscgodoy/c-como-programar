#include <stdio.h>
#include <locale.h>

#define BASE_DE_HORAS 40
#define BONUS_HORA_EXTRA 1.5
#define PGTO_COMISSAO 250
#define PORCENTAGEM_VENDAS 0.057


int main(void) {
  setlocale(LC_ALL, "");

  /*
    Gerentes
      Código: 1
      Pgto: X salário fixo semanal
    Trabalhadores por Hora
      Código: 2
      Pgto: X salário fixo até 40h + 1.5 * valorDaHora por hora acima das 40
    Trabalhadores Comissionados
      Código: 3
      Pgto: 250.00 fixo + 5.7% sobre o valor das vendasDaSemana
    Trabalhadores por Unidade
      Código: 4
      Pgto: X reais fixo * qtdProduzida
  */

  int codigo = 0;

  printf("Bem vindo(a) ao Calculador de Pagamentos Semanais.\n");

  do {
    wprintf(L"Por favor, entre o código do funcion%lcrio (entre -1 para sair).\n", L'á');
    wprintf(L"C%lcdigo: ", L'ó');
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
      float salario = 0;

      printf("\nGerente\n");
      wprintf(L"Insira o valor do sal%lcrio semanal: R$ ", L'á');
      scanf("%f", &salario);

      printf("\nO(A) Gerente tem a receber R$ %.2f.\n\n", salario);
      break;
    case 2:
      int horasTrabalhadas = 0;
      float valorPorHora = 0, valorAReceber = 0;

      printf("\nCooperador(a) por Hora\n");
      printf("Insira o total de horas trabalhadas: ");
      scanf("%d", &horasTrabalhadas);
      printf("Insira o valor da hora de trabalho: R$ ");
      scanf("%f", &valorPorHora);

      if(horasTrabalhadas <= 40) {
        valorAReceber = horasTrabalhadas * valorPorHora;
      } else {
        valorAReceber = BASE_DE_HORAS * valorPorHora 
          + (BONUS_HORA_EXTRA * valorPorHora * (horasTrabalhadas - BASE_DE_HORAS));
      }
      printf("\nO(A) Cooperado(a) tem a receber R$ %.2f\n\n", valorAReceber);
      break;
    case 3:
      float vendasDaSemana = 0;

      wprintf(L"\nCooperador(a) por Comiss%lco\n", L'ã');
      printf("Insira o valor das vendas da semana: R$ ");
      scanf("%f", &vendasDaSemana);

      printf("\nO(A) Cooperado(a) tem a receber R$ %.2f\n\n", PGTO_COMISSAO + (vendasDaSemana * PORCENTAGEM_VENDAS));
      break; 
    case 4:
      int qtdProduzida = 0;
      float valorPorItem = 0;

      printf("\nCooperador(a) por Unidade\n");
      printf("Insira a quantidade de produtos produzida: ");
      scanf("%d", &qtdProduzida);
      wprintf(L"Insira o valor de produ%lc%lco do produto: R$ ", L'ç', L'ã');
      scanf("%f", &valorPorItem);
      printf("\nO(A) Cooperado(a) tem a receber R$ %.2f\n\n", qtdProduzida * valorPorItem);
      break;
    case -1:
      wprintf(L"\nEncerrando a aplica%lc%lco...\n", L'ç', L'ã');
      break;  
    default:
      wprintf(L"C%lcdigo Inválido. Favor tentar novamente.", L'ó');
      break;
    }
  } while (codigo != -1);

  printf("Volte sempre.");
  return 0;
}