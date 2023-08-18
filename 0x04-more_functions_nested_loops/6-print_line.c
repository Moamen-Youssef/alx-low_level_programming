#include "main.h"
/**
 * print_line - print straigt line
 * @n: the number of \'s
 * Return:nothing
*/
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (n > 0) 
_putchar('_');
}
_putchar('\n');
}
