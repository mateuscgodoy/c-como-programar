#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define D6 6
#define HOUSE_WINS1 2
#define HOUSE_WINS2 3
#define HOUSE_WINS3 12
#define JOKER_VALUE 7
#define PLAYER_WINS 11

int rolaDado();

int main(void) {

  int rolagem1 = 0, rolagem2 = 0, resultado = 0, ponto = 0;

  srand(time(NULL));
  
  do {
    rolagem1 = rolaDado();
    rolagem2 = rolaDado();
    resultado = rolagem1 + rolagem2;

    printf("Jogador rolou %d e %d. Resultado %d.\n", rolagem1, rolagem2, resultado);

    if (ponto == 0) {
      if (resultado == HOUSE_WINS1 
      || resultado == HOUSE_WINS2 
      || resultado == HOUSE_WINS3) {
        printf("Jogador perde\n");
        break;
      } else if (resultado == JOKER_VALUE 
      || resultado == PLAYER_WINS) {
        printf("Jogador vence\n");
        break;
      } else {
        printf("Valor do ponto %d.\n", resultado);
        ponto = resultado;
      }
    } else {
      if (ponto == resultado) {
        printf("Jogador vence\n");
        break;
      } else if (resultado == JOKER_VALUE) {
        printf("Jogador perde\n");
        break;
      } 
    }

    printf("\n");
  } while (1);

  return 0;
}

int rolaDado() {
  

  return 1 + rand() % 6;
}