#include <stdio.h>
#include "main.h"

/**
*main - check the code
*
*Return: Always 0.
*/
int main(void)
{
  int i;
  for (i = 1; i <= 100; i++)
    {
      printf("number = %d %s%s\n", i, i % 3?"":"fizz", i % 5?"":"Buzz");
	}
  return (0);
}
