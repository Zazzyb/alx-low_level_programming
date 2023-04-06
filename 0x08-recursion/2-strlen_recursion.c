#include "main.h"
/**
*_strlen_recursion - the length of a string
*@s: character to print
*Return: length of string
*/
int _strlen_recursion(char *s)
{
int i;
i = 0;
if (*s)
{
i++;
i += _strlen_recursion(s + 1);
}
else
{
_putchar('\n');
}
return (i);
}
