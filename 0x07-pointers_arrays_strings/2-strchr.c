#include "main.h"
/**
*_strchr - locates a character in a string
*@s: first character
*@c: second character
*Return: Pointer to first occurrence of character (c) in string s or
*null if character not found
*/
char *_strchr(char *s, char c)
{
int x;
x = 0;
while (s[x] >= '\0')
{
if (s[x] == c)
return (&s[x]);
x++;
}
return (0);
}
