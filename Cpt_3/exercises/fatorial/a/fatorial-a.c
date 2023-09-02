#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int num = 0, fatorial = 1;

  printf("Vamos encontrar o fatorial de um inteiro!\n");
  wprintf(L"Insira um n%lcmero inteiro não negativo: ", L'ú');
  scanf("%d", &num);

  while (num - 1 > 0) {
    fatorial *= num;

    num--;
  }

  printf("O fatorial é %d.\n", fatorial);

  return 0;
}