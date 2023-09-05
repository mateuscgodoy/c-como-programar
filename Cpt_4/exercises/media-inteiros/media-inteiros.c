#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int num = 0, sum = 0, contador = 0;

  wprintf(L"Insira n%lcmeros inteiros ou 9999 para calcular a m%lcdia.\n", L'ú', L'é');
  do {
    scanf("%d", &num);

    if (9999 != num) {
      sum += num;
      contador++;
    }

  } while (num != 9999);

  wprintf(L"\nA m%lcdia foi de %.2f\n", L'é', (float) sum / contador);
  return 0;
}