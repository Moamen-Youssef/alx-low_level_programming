
#include "main.h"
/**
 * print_square - print diagonal
 * @size: number of diagonal back's
 * Return:nothing
*/
void print_square(int size)
{
int counter = 1;
while (counter != size + 1)
{
if ( size <= 0)
{
_putchar('\n') ;
return;
}
else
{
int i;
for (i = 0; i < size; i++)
{
_putchar('#');
}
}
_putchar('\n');
counter++;
}
}
