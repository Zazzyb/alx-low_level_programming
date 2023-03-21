#include "main.h"
/**
*_abs - computes the absolute value of an integer
*@int: initialise int
*Return: Always 0.
*/
int _abs(int i)
{
int r;
if (i >= 0)
{
r = i * 1;
_putchar(r);
}
else
{
r = i * (-1);
_putchar(r);
}
_putchar('\n');
return (0);
}
