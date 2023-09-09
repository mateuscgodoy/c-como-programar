#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int temp = 0;

  // 500 x 500 x 500 = 125.000.000 instruções!!
  for (int catetoA = 1; catetoA <= 500; catetoA++) {
    for (int catetoB = 1; catetoB <= 500; catetoB++) {
      for (int hip = 1; hip <= 500; hip++) {
        temp = catetoA * catetoA + catetoB * catetoB;

        if (temp == hip * hip) {
          wprintf(L"Cateto A: %d, Cateto B: %d, Hip: %d. Formam um Tri%lcngulo Retangulo.\n", catetoA, catetoB, hip, L'â');
        }
      }
    }
  }

  return 0;
}