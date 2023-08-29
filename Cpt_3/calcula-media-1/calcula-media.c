#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int total, contador, media, numeroDeAlunos, notaAtual;

  total = 0;
  contador = 1;
  media = 0;
  numeroDeAlunos = 0;

  wprintf(L"Bem-vindo(a) a Calculadora de M%lcdias!\n", L'é');
  wprintf(L"Insira o n%lcmero de alunos: ", L'ú');
  scanf("%d", &numeroDeAlunos);
  printf("\n");

  while(contador <= numeroDeAlunos) {
    notaAtual = 0;

    printf("Insira a nota do aluno(a) %d: ", contador);
    scanf("%d", &notaAtual);

    total += notaAtual;

    ++contador;
  }

  if(numeroDeAlunos > 0) {
    media = total / numeroDeAlunos;
    wprintf(L"A m%lcdia dos alunos foi %d !\n", L'é', media);
  }

  printf("Volta sempre!\n");

  return 0;
}