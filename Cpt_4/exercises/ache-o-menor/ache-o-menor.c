#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int tamanho = 0, menor = 999999, num = 0;

  wprintf(L"Insira quantos inteiros voc%lc deseja comparar: ", L'ê');
  scanf("%d", &tamanho);

  for (int i = 1; i <= tamanho; i++) {
    wprintf(L"Insira o n%lcmero #%d: ", L'ú', i);
    scanf("%d", &num);

    if (num < menor) menor = num;
  }

  wprintf(L"\nO menor n%lcmero %lc: %d.\n", L'ú', L'é', menor);
  return 0;
}