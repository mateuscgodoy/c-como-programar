#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "");

  printf("1 -> 2 -> 3 -> 4\n");

  printf("%d -> %d -> %d -> %d\n", 1, 2, 3, 4);

  printf("1 ->");
  printf(" 2 ->");
  printf(" 3 ->");
  printf(" 4\n");

  return 0;
}
