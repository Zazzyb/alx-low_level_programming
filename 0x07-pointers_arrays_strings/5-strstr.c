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
while (*haystack == *needle && *needle != '\0')
{
haystack++;
needle++;
if (*needle == '\0')
return (haystack);
}
haystack++;
}
return ('\0');
}
