#include <stdio.h>
#include <locale.h>

#define qtdDeAlunos 10
#define bonusInstrutor 8

int main(void) {
  setlocale(LC_ALL, "");

  int aprovados = 0, reprovados = 0, nota = 0;

  while (aprovados + reprovados < qtdDeAlunos) {
    printf("Insira o resultado do teste abaixo.\n");
    printf("Digite 1 para Aprovado e 2 para Reprovado: ");
    scanf("%d", &nota);
    printf("\n");

    if (nota == 1) {
      aprovados++;
    } else if (nota == 2) {
      reprovados++;
    }
  }

  printf("%d alunos foram Aprovados.\n", aprovados);
  printf("%d alunos foram Reprovados.\n", reprovados);

  if(aprovados >= bonusInstrutor) {
    wprintf(L"Parab%lcns, Instrutor! Voc%lc receber%lc um b%lcnus!", L'é', L'ê', L'á', L'ô');
  }

  return 0;
}