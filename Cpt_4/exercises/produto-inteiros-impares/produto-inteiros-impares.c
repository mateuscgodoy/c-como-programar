#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int produto = 1;

  for (int i = 1; i <= 15; i += 2) {
    produto *= i;
  }

  wprintf(L"O produto dos %lcmpares de 1 a 15 %lc: %d\n", L'í', L'é', produto);
  return 0;
}