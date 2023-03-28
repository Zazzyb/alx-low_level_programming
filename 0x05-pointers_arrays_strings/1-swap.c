#include<stdio.h>
/**
*swap_int - swaps the value of two integers
*@a: parameter to swap
*@b: parameter ro swap
*Return: Always 0
*/
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
