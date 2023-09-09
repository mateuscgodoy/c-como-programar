#include <stdio.h>

#define UM "I"
#define DOIS "II"
#define TRES "III"
#define QUATRO "IV"
#define CINCO "V"
#define SEIS "VI"
#define SETE "VII"
#define OITO "VIII"
#define NOVE "IX"
#define DEZ "X"
#define CINQUENTA "L"
#define CEM "C"

int main(void) {
  // units = I
  // 5 = V
  // 10 = X
  // 50 = L
  // 100 = C
  int temp = 0;

  for (int i = 1; i <= 100; i++) {
    printf("%d\t-\t", i);
    
    temp = i;

    if (temp == 100) {
      temp -= 100;
      printf(CEM);
    }

    if (temp >= 50 && temp < 90) {
      temp -= 50;
      printf(CINQUENTA);
    }

    if (temp >= 10 && temp < 40) {
      while (temp >= 10) {
        temp -= 10;
        printf(DEZ);
      }
    } 

    if (temp >= 90 ) {
      temp -= 90;
      printf(DEZ);
      printf(CEM);
    } else if (temp >= 40) {
      temp -= 40;
      printf(DEZ);
      printf(CINQUENTA);
    }

    switch (temp)
    {
    case 1:
      printf(UM);
      break;
    case 2:
      printf(DOIS);
      break;
    case 3:
      printf(TRES);
      break;
    case 4:
      printf(QUATRO);
      break;
    case 5:
      printf(CINCO);
      break;
    case 6:
      printf(SEIS);
      break;
    case 7:
      printf(SETE);
      break;
    case 8:
      printf(OITO);
      break;
    case 9:
      printf(NOVE);
      break;
    default:
      break;
    }
    
    printf("\n");
  }

  return 0;
}