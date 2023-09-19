#include <stdio.h>

float celsius(float temperatura);
float fahrenheit(float temperatura);

int main(void) {
  printf("%s\t%10s\n", "Celsius", "Fahrenheit");

  for (int i = 0; i <= 100; i++) {
    printf("%d\t%10.2f\n", i, fahrenheit(i));
  }

  printf("%s\t%10s\n", "Fahrenheit", "Celsius");

  for (int i = 32; i<= 212; i++) {
    printf("%d\t%10.2f\n", i, celsius(i));
  }
  return 0;
}

float celsius(float fahrenheit) {
  return (fahrenheit - 32) * 5 / 9;
}

float fahrenheit(float celsius) {
  return (celsius * 9 / 5) + 32;
}