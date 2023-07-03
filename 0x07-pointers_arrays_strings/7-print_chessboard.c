#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to the chessboard array.
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 7; i >= 0; i--)
{
for (j = 0; j < 8; j++)
{
printf("%c", a[i][j]);
}
printf("\n");
}
}
