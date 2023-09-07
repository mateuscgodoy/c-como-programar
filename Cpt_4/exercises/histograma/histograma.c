#include <stdio.h>

#define TAMANHO 5

int main(void)
{
  int value1, value2, value3, value4, value5;
  value1 = value2 = value3 = 0;

  printf("Insira %d valores para formar o Histograma.\n", TAMANHO);

  for (int i = 1; i <= TAMANHO; i++)
  {
    printf("Value #%d: ", i);
    switch (i)
    {
    case 1:
      scanf("%d", &value1);
      break;
    case 2:
      scanf("%d", &value2);
      break;
    case 3:
      scanf("%d", &value3);
      break;
    case 4:
      scanf("%d", &value4);
      break;
    case 5:
      scanf("%d", &value5);
      break;
    default:
      break;
    }
  }

  printf("\n %d\t%d\t%d\t%d\t%d \n", value1, value2, value3, value4, value5);
  printf("====================================\n");
  do {
    printf(value1 > 0 ? "*\t" : " \t");
    printf(value2 > 0 ? "*\t" : " \t");
    printf(value3 > 0 ? "*\t" : " \t");
    printf(value4 > 0 ? "*\t" : " \t");
    printf(value5 > 0 ? "*\t" : " \t");

    value1--;
    value2--;
    value3--;
    value4--;
    value5--;

    printf("\n");

  } while (value1 > 0 || value2 > 0 || value3 > 0 || value4 > 0 || value5 > 0 );

  printf("\nVolte Sempre!");

  return 0;
}