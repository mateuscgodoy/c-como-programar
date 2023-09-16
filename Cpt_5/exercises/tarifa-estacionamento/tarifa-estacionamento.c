// 2 reais para ficar 3h
// 0.5 centavos por h ou parte de hora, válido por mais 3h
// tarifa máxima para 24h é 10 reais
// Carros não ficam mais de 24h de uma vez.
// função calcularTaxas para encontrar o valor por cliente para 3 clientes
#include <stdio.h>

float calcularTaxas(float horas);

int main(void) {
  float clientA, clientB, clientC;

  printf("Insira as horas dos 3 clientes: ");
  scanf("%f%f%f", &clientA, &clientB, &clientC);

  printf("%2s\t%10s%18s\n", "Carro", "Horas", "Taxa");
  printf("%2d\t%10.2f%18.2f\n", 1, clientA, calcularTaxas(clientA));
  printf("%2d\t%10.2f%18.2f\n", 2, clientB, calcularTaxas(clientB));
  printf("%2d\t%10.2f%18.2f\n", 3, clientC, calcularTaxas(clientC));
  printf("%2s\t%10.2f%18.2f\n", "TOTAL", 
    clientA + clientB + clientC, 
    calcularTaxas(clientA)+ calcularTaxas(clientB)+ calcularTaxas(clientC));

  return 0;
}

float calcularTaxas(float horas) {
  float taxa = 0;

  if (horas <= 3) {
    taxa = 2;
  } else if (horas > 3 && horas <= 6) {
    horas -= 3;
    taxa = 2;
    while (horas > 0) {
      horas -= 1;
      taxa += 0.5;
    }
  } else {
    taxa = 10;
  }

  return taxa;
}