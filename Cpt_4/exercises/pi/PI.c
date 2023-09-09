#include <stdio.h>

double pi = 0;

int main(void) {
  for (int i = 0; i <= 9999; i++) {
    if (i%2 == 0) {
      pi += (double) 4 / (1 + (2 * i));  
    } else {
      pi -= (double) 4 / (1 + (2 * i));  
    }

    printf("Rep. #%d: %lf\n", i + 1, pi);
  }

  return 0;
}
