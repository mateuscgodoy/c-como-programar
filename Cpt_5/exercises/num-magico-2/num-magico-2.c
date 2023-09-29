#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int darPalpite(int numMagico);
void processaResultado(int tentativas);

int main(void) {
  setlocale(LC_ALL, "");
  srand(time(NULL));

  int fimDoJogo = 0, numMagico = 0, tentativas = 0;

  numMagico = rand() % 1000 + 1;
  wprintf(L"Eu tenho um n%lcmero entre 1 e 1000.\n", L'ú');
  wprintf(L"Voc%lc consegue descobrir qual %lc?\n", L'ê', L'é');
  printf("Digite sua primeira tentativa.\n");

  while (fimDoJogo != 1) {
    fimDoJogo = darPalpite(numMagico);
    tentativas++;
  }

  processaResultado(tentativas);

  return 0;
}

int darPalpite(int numMagico) {
  int palpite = 0;

  printf("\n> ");
  scanf("%d", &palpite);

  if (palpite == numMagico) {
    wprintf(L"Excelente! Voc%lc descobriu o n%lcmero!!\n", L'ê', L'ú');
    printf("Gostaria de jogar novamente? (s ou n)\n");
    return 1;
  } else if (palpite < numMagico) {
    printf("Muito baixo. Tente Novamente.\n");
  } else {
    printf("Muito alto. Tente Novamente.\n");
  }
  
  return 0;
}

void processaResultado(int tentativas) {
  if (tentativas <= 10) {
    wprintf(L"Ou voc%lc conhece o segredo ou teve sorte!", L'ê');
    if (tentativas == 10) {
      wprintf(L"Ahah! Voc%lc conhece o segredo!", L'ê');
    }
  } else {
    wprintf(L"Voc%lc deveria se sair melhor!", L'ê');
  }

}