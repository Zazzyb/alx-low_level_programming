#include "main.h"
/**
*_strcpy - copies string pointed to by src
*@dest: parameter to print
*@src: parameter to print
*Return: Always 0
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
int j = 0;
while (*(src + i) != '\0')
{
i++;
}
for (; j < i; j++)
{
dest[j] = src[j];
}
dest[i] = '\0';
return (dest);
}
