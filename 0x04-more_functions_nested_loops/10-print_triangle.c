#include "main.h"
/**
*print_triangle - prints a square
*@size: variable
*Return: 0.
*/
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if ((i + j) <= size)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
}
