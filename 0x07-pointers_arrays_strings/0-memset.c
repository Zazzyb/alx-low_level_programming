#include "main.h"
/**
*_memset - fills memory with a constant byte
*@s: first character
*@b: second character
*@n: a variable
*Return: Pointer to memory (s)
*/
char *_memset(char *s, char b, unsigned int n)
{
int x;
while (n > 0)
{
s[x] = b;
n--;
}
x++;
return (s);
}
