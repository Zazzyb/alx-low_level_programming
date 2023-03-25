#include<stdio.h>
#include<math.h>

/**
*main - print largest prime factor
*
*Return: Always 0.
*/
int main(void)
{
long int max;
long int j;
long int i;
i = 612852475143;
max = -1;
while (i % 2 == 0)
{
max = 2;
i /= 2;
}
for (j = 3; j <= sqrt(i); j = j + 2)
{
while (i % j == 0)
{
max = i;
i = i/j;
}
}
if (i > 2)
{
max = i;
printf("%ld\n", max);
}
return (0);
}
