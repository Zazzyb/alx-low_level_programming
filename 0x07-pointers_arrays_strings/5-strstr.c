#include "main.h"
/**
*_strstr - locate a substring
*@haystack: first character
*@needle: second character
*Return: pointer to the beginning of the located substring or
*NULL if no substring found.
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
  char *c = haystack;
  char *d = needle;
while (*c == *d && *d != '\0')
{
c++;
d++;
}
if (*d == '\0')
{
return (haystack);
}
haystack++;
}
return (0);
}
