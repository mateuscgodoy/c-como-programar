#include <stdio.h>
#include <locale.h>

int multiplos(int numA, int numB);
void imprimeResultado(int resultado);

int main(void) {
  setlocale(LC_ALL, "");

  int prova = 0;

  prova = multiplos(2, 4);
  printf("4 ");
  imprimeResultado(prova);
  printf("2.\n");

  prova = multiplos(3, 7);
  printf("7 ");
  imprimeResultado(prova);
  printf("3.\n");
  
  prova = multiplos(9, 3);
  printf("3 ");
  imprimeResultado(prova);
  printf("9.\n");

  prova = multiplos(3, 9);
  printf("9 ");
  imprimeResultado(prova);
  printf("3.\n");

  return 0;
}

int multiplos(int numA, int numB) {
  if (numB % numA == 0) {
    return 1;
  }

  return 0;
}

void imprimeResultado(int resultado) {
  resultado == 1 ? wprintf(L"%lc m%lcltiplo de ", L'é', L'ú') 
    : wprintf(L"n%lco %lc m%lcltiplo de ", L'ã', L'é', L'ú');
}