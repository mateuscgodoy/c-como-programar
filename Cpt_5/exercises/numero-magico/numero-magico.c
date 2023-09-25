#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int darPalpite(int numMagico);

int main(void) {
  setlocale(LC_ALL, "");
  srand(time(NULL));

  int fimDoJogo = 0, numMagico = 0;

  numMagico = rand() % 1000 + 1;
  wprintf(L"Eu tenho um n%lcmero entre 1 e 1000.\n", L'ú');
  wprintf(L"Voc%lc consegue descobrir qual %lc?\n", L'ê', L'é');
  printf("Digite sua primeira tentativa.\n");

  while (fimDoJogo != 1) {
    fimDoJogo = darPalpite(numMagico);
  }

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
