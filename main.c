#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int SumRequiredSymbols(char *str)
{
  int signs = 0, digits = 0, sum;
  char plus, minus, multiply;
  plus = 43;
  minus = 45;
  multiply = 42;
  
  for (int s = 0; str[s] != '\0'; s++)
  {
    if (str[s] == plus || str[s] == minus || str[s] == multiply)
      signs++;

    if ('0' <= str[s] && str[s] <= '9')
      digits++;
  }
  sum = signs + digits;
  return sum;
}

int main(void)
{
  char str[64];
  char out;
  printf("Введите строку: ");
  fgets(str, 64, stdin);
  out = SumRequiredSymbols(str);
  printf("Количество: %d\n", out);
}