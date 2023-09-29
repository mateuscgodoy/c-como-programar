#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status
{
  CONTINUE,
  WON,
  LOST
};

int rollDice(void);

int main(void)
{
  int sum;
  int myPoint;
  int turno = 1;
  float saldoBanca = 1000;
  float valorApostado = 0;

  enum Status gameStatus;

  srand(time(NULL));

  do
  {
    gameStatus = CONTINUE;
    valorApostado = 0;
    
    printf("\nTurno #%d\n", turno++);

    do
    {
      printf("Saldo: R$%.2f\n", saldoBanca);
      printf("Quanto gostaria de apostar?");
      scanf("%f", &valorApostado);

      if (valorApostado > saldoBanca)
      {
        printf("O valor apostado precisa ser menor que o saldo atual!\n");
      }

    } while (valorApostado > saldoBanca);

    sum = rollDice();
    switch (sum)
    {
    case 7:
    case 11:
      gameStatus = WON;
      printf("Assim vou acabar quebrando!!\n");
      saldoBanca += valorApostado;
      break;
    case 2:
    case 3:
    case 12:
      saldoBanca -= valorApostado;
      printf("Continue tentando! A sorte sempre muda.\n");
      gameStatus = LOST;
      break;
    default:
      gameStatus = CONTINUE;
      myPoint = sum;
      printf("Ponto vale %d\n", myPoint);
      break;
    }

    while (gameStatus == CONTINUE)
    {
      sum = rollDice();

      if (sum == myPoint)
      {
        gameStatus = WON;
        printf("Como assim eu perdi!?\n");
        saldoBanca += valorApostado;
      }
      else
      {
        if (sum == 7)
        {
          saldoBanca -= valorApostado;
          gameStatus = LOST;
          printf("Continue tentando!\n");
        }
      }
    }

    if (gameStatus == WON)
    {
      printf("Jogador vence\n");
    }
    else
    {
      printf("Jogador perde\n");
    }
  } while (saldoBanca > 0);

  return 0;
}

int rollDice(void)
{
  int die1;
  int die2;
  int workSum;

  die1 = 1 + (rand() % 6);
  die2 = 1 + (rand() % 6);
  workSum = die1 + die2;

  printf("Jogador rolou %d + %d = %d\n", die1, die2, workSum);
  return workSum;
}