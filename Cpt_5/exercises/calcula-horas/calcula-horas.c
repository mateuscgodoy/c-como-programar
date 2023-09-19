#include <stdio.h>

int retornaSegundosDesde12Horas(int hora, int minuto, int segundo);

int main(void) {
  int hora1 = 0, hora2 = 0;

  printf("Hora #1: %d, Minutos #1: %d, Segundos #1: %d\n", 8, 47, 12);
  hora1 = retornaSegundosDesde12Horas(8,47,12);

  printf("Hora #2: %d, Minutos #2: %d, Segundos #2: %d\n", 3, 5, 55);
  hora2 = retornaSegundosDesde12Horas(3, 5, 55);
  
  if (hora1 > hora2) {
    printf("\nSegundos Totais #1: %d, Segundos Totais #2: %d\n", hora1, hora2);
    printf("O intervalo foi de %d segundos.\n", hora1 - hora2);
  } else {
    printf("O intervalo foi de %d segundos.\n", hora2 - hora1);
  }
}

int retornaSegundosDesde12Horas(int hora, int minuto, int segundo) {
  int output = hora * 60 * 60;
  output += minuto * 60;
  output += segundo;
  return output;
}