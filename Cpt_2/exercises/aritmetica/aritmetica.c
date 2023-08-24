#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "");
  int num1, num2;

  wprintf(L"Insira dois n%lcmeros, por favor.\n", L'ú');
  scanf("%d", &num1);
  scanf("%d", &num2);

  printf("Soma: %d\n", num1 + num2);
  wprintf(L"Subtra%lc%lco: %d\n",L'ç', L'ã', num1 - num2);
  wprintf(L"Multiplica%lc%lco: %d\n",L'ç', L'ã', num1 * num2);
  wprintf(L"Divis%lco: %d\n", L'ã', num1 / num2);
  wprintf(L"M%lcdulo: %d\n", L'ó', num1 % num2);

  return 0;
}
