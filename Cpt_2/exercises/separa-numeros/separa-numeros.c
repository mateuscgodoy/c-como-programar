#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int num;

  wprintf(L"Insira um n%lcmero de 5 digitos: ", L'ú');
  scanf("%d", &num);

  printf("%d %d %d %d %d\n", num / 10000, (num%10000) / 1000, (num%1000) / 100,(num%100)/10, num%10);

  return 0;
}