#include <stdio.h>
#include <ctype.h>
/**
 * print_sign - print  sign
 * @n: the number
 * Return:0or1
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
return 0;
}
