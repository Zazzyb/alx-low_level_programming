#include "main.h"
/**
*_strpbrk - searches a string for a set
*@s: first character
*@accept: second character
*Return: number of bytes in the initial segment of s which consist of bytes
*only from accept.
*/
char *_strpbrk(char *s, char *accept)
{
int x;
while (*s)
{
x = 0;
while (accept[x])
{
if (*s == accept[x])
{
return (s);
}
x++;
}
s++;
}
return ('\0');
}
