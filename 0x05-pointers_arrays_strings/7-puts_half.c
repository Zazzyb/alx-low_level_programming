#include "main.h"
/**
*rev_string - function that reverse a string
*@s: parameter to print
*Return: Always 0
*/
void rev_string(char *s)
{
char r = s[0];
int c = 0;
int i;
while (s[c] != '\0')
{
c++;
for (i = 0; i < c; i++)
{
c--;
r = s[i];
s[i] = s[c];
s[c] = r;
}
}
