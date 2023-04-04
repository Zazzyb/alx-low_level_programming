#include "main.h"
/**
*print_chessboard - prints the chessboard
*@a: first character
*Return: void
*/
void print_chessboard(char (*a)[8])
{
int x, y;
x = 0;
while (x < 8)
{
for (y = 0; y < 8; y++)
{
_putchar(a[x][y]);
}
x++;
_putchar('\n');
}
}
