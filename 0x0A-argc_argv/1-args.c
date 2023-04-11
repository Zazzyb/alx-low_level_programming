#include "main.h"
/**
*main - Project Entry point
*@argc: variable
*@argv: Array
*Return: Always 0.
*working with variable argumens so we ignore argv using (void)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
(void) argv;
printf("%d", argc - 1);
printf("\n");
return (0);
}
