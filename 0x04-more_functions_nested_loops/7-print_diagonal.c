#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: number of diagonal \'s 
 * Return:nothing
*/
void print_diagonal(int n)
{
int counter = 1;
while (counter != n + 1)
{
if ( n <= 0)
{
_putchar('\n');
return;
}
else
{
int i;
for (i = 0; i < counter; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
counter++;
}
}
}
