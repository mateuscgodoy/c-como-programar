#include <stdio.h>

double fibonacci(double termo);

int main(void) {

  double doom = 0;
  while(doom <= 1000) {
    printf("Fibonacci Termo #%lf: %lf\n", doom, fibonacci(doom));
    doom++;
  }

  return 0;
}

double fibonacci(double termo) {
  double output = 1, prev = 0;
  if (termo == 0) return prev;
  if (termo == 1) return output;

  for (int i = 2; i < termo; i++) {
    output += prev;
    prev = (output - prev);
  }

  return output;
}