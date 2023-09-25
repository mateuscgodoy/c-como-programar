#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pontosDeQualidade(int nota);

int main(void) {
  srand(time(NULL));
  int nota = 0;

  for(int i = 1; i <= 3; i++) {
    nota = rand() % 100 + 1;
    pontosDeQualidade(nota);
  }


  return 0;
}

int pontosDeQualidade(int nota) {
  int output = -1;

  if (nota >= 90) {
    output = 4;
  } else if (nota >= 80) {
    output = 3;
  } else if (nota >= 70) {
    output = 2;
  } else if (nota >= 60) {
    output = 1;
  } else {
    output = 0;
  }

  printf("A nota %d equivale a um %d.\n", nota, output);
  return output;
}