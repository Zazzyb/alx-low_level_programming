#include<stdio.h>
#include "main.h"
/**
*print_to_98 - prints numbers from n to 98
*@n: numbers to be printed from
*Return: Always 0.
*/
void print_to_98(int n)
{
int i;
if (i < 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
}
else
{
for (i = n; i >= 98; i--)
{
  printf("%d, ", i);
}
}
printf("\n");
}
