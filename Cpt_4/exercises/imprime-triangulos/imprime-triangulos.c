#include <stdio.h>

int main(void) {
  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }

  printf("\n\n");

  for (int i = 10; i >= 1; i--) {
    for (int j = i; j >= 1; j--) {
      printf("*");
    }
    printf("\n");
  }

  printf("\n\n");

  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
      if (j < i) printf(" ");
      else printf("*");
    }
    printf("\n");
  }

  printf("\n\n");

  for (int i = 1; i <= 10; i++) {
    for (int j = 10; j >= 1; j--) {
      if (j > i) printf(" ");
      else printf("*");
    }
    printf("\n");
  }

  return 0;
}