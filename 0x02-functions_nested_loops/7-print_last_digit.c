#include "main.h"
/**
*print_last_digit - prints last digit of a number
*@i: character where the value ppints to
*Return: Always 0.
*/
int print_last_digit(int i)
{
int r;
r = i % 10;
_putchar(r + '0');
return (r);
}
