#include "main.h"
/**
*positive_or_negative - test for negative or positve numbers
*@i: character the value points to
*Return: Always 0
*/
void positive_or_negative(int i)
{
i = 0;
if (i > 0)
printf("%d is positive", i);
else if (i == 0)
printf("%d is zero", i);
else
printf("%d is negative", i);
}
