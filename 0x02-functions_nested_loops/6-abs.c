#include "main.h"
/**
*_abs - computes the absolute value of an integer
*@i: character where values point to
*Return: Always 0.
*/
int _abs(int i)
{
int r;
if (i >= 0)
{
r = i * 1;
return (r);
}
else
{
r = i * (-1);
return (r);
}
_putchar('\n');
}
