#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  char string1[20];
  char string2[] = "string literal";

  printf("Digite uma string: ");
  scanf("%s", string1);
  

  wprintf(L"string1 %lc: %hs\nstring2 %lc: %hs\n" 
    "string1 com espaços entre caracteres %lc: \n", L'é', string1,  L'é', string2,  L'é');

  for (int i = 0; string1[i] != '\0'; i++) {
    printf("%c ", string1[i]);
  }

  printf("\n");
  return 0;
}