#include "main.h"
/**
*_atoi - converts string to integer
*@s: parameter to convert
*Return: Always 0
*/
int _atoi(char *s)
{
int i = 0;
int j = 0;
int k = 0;
int x = 0;
int y = 0;
int z = 0;
while (s[x] != '\0')
x++;
while (i < x && y == 0)
{
if (s[i] == '-')
++j;
 if (s[i] >= '0' && s[i] <= '9')
{
z = s[i] - '0';
if (j % 2)
z = -z;
k = k * 10 + z;
y = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
y = 0;
}
i++;
}
if (y == 0)
return (0);
return (k);
}
