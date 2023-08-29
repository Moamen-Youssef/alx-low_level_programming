#include "main.h"
/**
 * print_chessboard - print the chess board
 * @a: the array
 * Return:pointer to string s.
 */
void print_chessboard(char (*a)[8])
{
int i;
int j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%c", a[i][j]);
}
printf("\n");
}
}
