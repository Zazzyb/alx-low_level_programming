#include "main.h"
/**
*_islower(int c) - checks for lowercase
*@c: is the char to be checked
*Return: 1 if char is lowcaase , otherwise 0.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
