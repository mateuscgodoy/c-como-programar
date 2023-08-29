#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int contador, total, nota;
  float media;

  contador = 0;
  total = 0;
  nota = 0;

  while (nota != -1) {
    printf("Insira uma nota (insira -1 para sair): ");
    scanf("%d", &nota);

    if (nota > 0) {
      total += nota;
      contador++;
    }
  }

  if (contador > 0) {
    media = (float) total / contador;
    wprintf(L"\nA m%lcdia aritm%lctica encontrada foi de %.2f.\n", L'é', L'é', media);
  } else {
    printf("Nenhuma nota foi forneceida.\n");
  }

  printf("Volte sempre!\n");

  return 0;
}