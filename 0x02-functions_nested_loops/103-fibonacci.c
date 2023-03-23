#include<stdio.h>
/**
*main - Entry point
*
*Return: Always 0.
*/
int main(void)
{
int i;
unsigned long int j, k, new, total;
j = 1;
k = 2;
total = 0;
for (i = 1; i <= 33; i++)
{
if (j < 4000000 && (j % 2) == 0)
{
total = total + j;
}
new = j + k;
j = k;
k = new;
}
printf("%lu\n", total);
return (0);
}
