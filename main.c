#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int SumRequiredSymbols(char *str)
{
  int signs = 0, digits = 0, sum;
  char plus = 43, minus = 45, multiply = 42;

  for (int s = 0; str[s] != '\0'; s++)
  {
    if (str[s] == plus || str[s] == minus || str[s] == multiply)
      signs++;

    if (48 <= str[s] && str[s] <= 57)
      digits++;
  }
  sum = signs + digits;
  return sum;
}

int main(void)
{
  char str[32];
  char quantity;
  printf("Enter a string: ");
  fgets(str, 32, stdin);
  quantity = SumRequiredSymbols(str);
  printf("Quantity digits and signs '+', '-', '*': %d\n", quantity);
}