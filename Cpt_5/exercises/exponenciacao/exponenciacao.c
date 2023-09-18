#include <stdio.h>
#include <locale.h>

int potenciaInt(int base, int expoent);

int main(void) {
  setlocale(LC_ALL, "");
  int base = 0, exp = 0;

  wprintf(L"Insira o valor da base (n%lcmero inteiro positivo): ", L'ú');
  scanf("%d", &base);
  wprintf(L"Insira o expoente (n%lcmero inteiro positivo): ", L'ú');
  scanf("%d", &exp);

  printf("Resultado = %d", potenciaInt(base, exp));
  return 0;
}

int potenciaInt(int base, int expoent) {
  int output = base;
  for (int i = 1; i <= expoent; i++) {
    output *= base;
  } 
  return output;
}