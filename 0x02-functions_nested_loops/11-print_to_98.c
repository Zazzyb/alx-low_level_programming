#include "main.h"
/**
*print_to_98 - prints numbers from n to 98
*@n: numbers to be printed from
*Return: Always 0.
*/
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (n = i; n < 98; n++)
{
_putchar(n);
}
}
else if (n > 98)
{
for (n = i; n > 98; n--)
{
_putchar(n);
}
}
_putchar('\n');
}
