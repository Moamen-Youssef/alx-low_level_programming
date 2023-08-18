#include "main.h"
/**
 * print_numbers - print numbers from 0-9 except 2 and 4
 * Return:the multiplication
*/
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 4 && i != 2)
_putchar(i);
}
printf("\n");
}
