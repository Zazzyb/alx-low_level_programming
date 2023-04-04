#include "main.h"
/**
*_memcpy - copies memory area
*@dest: first character
*@src: second character
*@n: a variable
*Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int x, y;
x = 0;
y = n;/* cannot condition int to unsigned int so set int to unsigned int*/
while (x < y)
{
dest[x] = src[x];
n--;
x++;
}
return (dest);
}
