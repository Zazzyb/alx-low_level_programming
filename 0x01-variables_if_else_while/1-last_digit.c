#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
*main - Entry point
*
*betty style doc for function main goes there
*Return: Always 0 (Success)
 */
int main(void)
{
int n;
int k;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
k = n % 10;
if (k > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, k);
}
else if (k == 0)
{
printf("Last digit of %d is %d and is 0\n", n, k);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
}
return (0);
}