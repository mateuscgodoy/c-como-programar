#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");
  int num = 0, contadorDeSetes = 0;

  wprintf(L"Insira um n%lcmero inteiro: ", L'ú');
  scanf("%d", &num);

  while (num > 0) {
    if (num % 10 == 7) {
      contadorDeSetes++;
    }
    num /= 10;
  }

  printf("O valor fornecido possui %d setes.\n", contadorDeSetes);

  return 0;
}