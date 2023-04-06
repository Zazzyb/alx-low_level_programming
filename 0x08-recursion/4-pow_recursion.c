#include "main.h"
/**
*_pow_recursion - power of a value
*@x: variable to print
*@y: variable for power
*Return: value of x raised to the power of y
*if y is less than 0, return -1
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
