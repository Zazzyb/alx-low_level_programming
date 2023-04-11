#include "main.h"
/**
*main - Project Entry point
*@argc: variable
*@argv: Array
*Return: Always 0.
*/
int main(int argc __attribute__((unused)), char *argv[])
{
int i;
i = 0;
while (i < argc)
{
printf("%s", argv[i]);
printf("\n");
i++;
}
return (0);
}
