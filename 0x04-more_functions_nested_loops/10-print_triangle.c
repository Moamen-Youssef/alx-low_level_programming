#include "main.h"
/**
 * print_triangle - print_triangle
 * @size: number of windows
 * Return:nothing
*/
void print_triangle(int size)
{
int counter = size;
while (counter != 0)
{
if (size <= 0)
{
_putchar(' ');
return;
}
else
{
int i;
int j;
for (j = 0; j < counter - 1; j++)
{
_putchar(' ');
}
for (i = 0; i < (size - (counter - 1)); i++)
{
_putchar('#');
}
_putchar('\n');
counter--;
}
}
}
