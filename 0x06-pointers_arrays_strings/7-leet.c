#include "main.h"
/**
*leet - encodes a string into 1337
*@c: first variable
*Return: c
*/
char *leet(char *c)
{
int x, y;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (x = 0; c[x] != '\0'; x++)
{
for (y = 0; y < 10; y++)
{
if (c[x] == s1[y])
{
c[x] = s2[y];
}
}
}
return (c);
}
