#include "main.h"
/**
*print_diagsums - the sum of two diagonals of a square matrix of integers
*@a: a first declared variable
*@size: a second declared variable
*Return: Pointer to memory (s)
*/
void print_diagsums(int *a, int size)
{
int x, y, z;
x = 0;
y = 0;
z = 0;
while (z < size)
{
x = y + a[z + size + z];
}
z++;
for (z = size - 1; z >= 0; z--)
{
y += a[z + size + (size - z - 1)];
}
printf("%d, %d\n", x, y);
}
