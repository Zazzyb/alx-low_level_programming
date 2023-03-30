#include "main.h"
/**
*_strncpy - concatenates two strings
*@dest:  first variable
*@src:  second variable
*@n: third variable
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
return (dest);
}
