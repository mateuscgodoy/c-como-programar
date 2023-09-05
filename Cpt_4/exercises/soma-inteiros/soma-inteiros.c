#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int numDeTermos = 0;
  float sum = 0, num = 0;

  wprintf(L"Quantos n%lcmeros voc%lc deseja somar?", L'ú', L'ê');
  scanf("%d", &numDeTermos);

  for (int i = 1; i <= numDeTermos; i++) {
    wprintf(L"Insira o n%lcmero #%d: ", L'ú', i);
    scanf("%f", &num);
    sum += num;
  }

  printf("\nA soma dos %d termos foi %.2f.\n", numDeTermos, sum);
  return 0;
}