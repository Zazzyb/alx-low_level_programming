#include "main.h"
/**
*puts_half - function that prints half a  string
*@str: parameter to print
*Return: Always 0
*/
void puts_half(char *str)
{
int c;
int j;
int i = 0;
for (c = 0; str[c] != '\0'; c++)
i++;
j = i / 2;
if ((i % 2) == 1)
j = ((i + 1) / 2);
for (c = j; str[c] != '\0'; c++)
_putchar(str[c]);
_putchar('\n');
}
