#include "main.h"
/**
*puts2 - prints every other character of a string
*@str: parameter to print
*Return: Always 0
*/
void puts2(char *str)
{
int j;
char *r = str;
int c = 0;
int i = o;
while (*r != '\0')
{
r++;
i++;
}
c = i - 1;
for (j = 0; j <= c; j++)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
