#include "main.h"
/**
*reverse_array - reverse content of an array
*@a: first variable
*@n: second variable
*Return: void
*/
void reverse_array(int *a, int n)
{
int x, y;
for (x = 0; x < n--; x++)
{
y = a[x];
a[x] = a[n];
a[n] = y;
}
}
