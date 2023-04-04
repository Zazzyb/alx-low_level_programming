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
unsigned int y;
y = 0;
while (*s)
{
x = 0;
while (accept[x])
{
if (*s == accept[x])
{
y++;
break;
}
else if (accept[x + 1] == '\0')
{
return (y);
}
x++;
}
s++;
}
return (y);
}
