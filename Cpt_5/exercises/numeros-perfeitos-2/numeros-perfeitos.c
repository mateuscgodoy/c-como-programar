#include <stdio.h>
#include <locale.h>

void perfect(int number);

int main(void) {
  setlocale(LC_ALL, "");

  for (int i = 1; i <= 1000; i++) {
    perfect(i);
  }

  return 0;
}

void perfect(int number) {
  int output = 0;

  for (int i = 1; i <= number / 2; i++) {
    if (number % i == 0) {
      output += i;
    }
  }

  if (output == number) {
    wprintf(L"%d %lc um n%lcmero perfeito!\n", number, L'é', L'ú');
  }
}