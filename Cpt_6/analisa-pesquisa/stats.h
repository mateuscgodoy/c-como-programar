#include <stdio.h>

#define MAX_RESULT 11

float average(int arr[], int size);
int median(int arr[], int size);
int mode(int arr[], int size);
void imprimeHistograma(int arr[], int size);

void bubbleSort(int arr[], int size);

float average(int arr[], int size)
{
  int output = 0;
  for (int i = 0; i < size; i++)
  {
    output += arr[i];
  }
  return output / size;
}

int median(int arr[], int size)
{
  int output = 0;

  bubbleSort(arr, size);

  if (size % 2 == 0)
  {
    output = (arr[size / 2] + arr[(size / 2) - 1]) / 2;
  }
  else
  {
    output = arr[size / 2];
  }

  return output;
}

void bubbleSort(int arr[], int size)
{
  int temp = 0;

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int mode(int arr[], int size)
{
  int results[MAX_RESULT] = {0};
  int output = 0, i = 0;

  for (i = 0; i < size; i++)
  {
    results[arr[i]]++;
  }

  for (i = 1; i < MAX_RESULT; i++)
  {
    if (results[i] > results[output])
    {
      output = i;
    }
  }
  imprimeHistograma(results, MAX_RESULT);
  return output;
}

void imprimeHistograma(int arr[], int size)
{
  printf("%s%13s%17s\n", "Nota", "Vezes", "Histograma");

  for (int i = 1; i < size; i++)
  {
    printf("%7d%13d\t", i, arr[i]);

    for (int j = 1; j <= arr[i]; j++)
    {
      printf("%c", '*');
    }

    printf("\n");
  }
}