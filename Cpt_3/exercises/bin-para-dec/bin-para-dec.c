#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int numBin = 0, numDec = 0, contador = 0, potencia = 0, newDec = 1;

  wprintf(L"Insira um n%lcmero bin%lcrio (somente 0s e 1s): ", L'ú', L'á');
  scanf("%d", &numBin);

  while (numBin > 0) {
    if (numBin % 10 != 1 && numBin % 10 != 0) {
      wprintf(L"%d n%lco %lc um n%lcmero bin%lcrio. Tente 101101.", numBin, L'ã', L'é', L'ú', L'á');
      return 0;
    } else if (numBin % 10 == 1) {
      potencia = contador;
      newDec = 1;
      while (potencia > 0) {
        newDec *= 2;
        potencia--;
      }
      numDec += newDec;
    }
    numBin /= 10;
    contador++;
  }

  wprintf(L"N%lcmero em Decimal = %d\n", L'ú', numDec);
  return 0;
}