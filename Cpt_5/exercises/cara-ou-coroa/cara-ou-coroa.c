#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(void);

int main(void) {
  srand(time(NULL));
  int contadorCara = 0, contadorCoroa = 0;

  for(int i = 1; i <= 100; i++) {
    if (flip() == 0){
      contadorCara++;
      printf("Coroa!\n");
    } else {
      contadorCoroa++;
      printf("Cara!\n");
    }
  }

  printf("O programa retornou Cara %d vezes e Coroa %d vezes.\n", contadorCara, contadorCoroa);

  return 0;
}

int flip(void) {
  return rand() % 2;
}