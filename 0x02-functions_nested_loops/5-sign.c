#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_sign - print  sign
 * @n: the number
 * Return:0or1
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
