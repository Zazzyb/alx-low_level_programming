#include "main.h"
/**
*print_square - prints a square
*@size: variable
*Return: 0.
*/
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i <= size; i++)
{
for (j = i; j < size; j++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
}
_putchar('\n');
}
}
