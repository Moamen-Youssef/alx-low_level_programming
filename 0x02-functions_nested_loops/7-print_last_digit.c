#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_last_digit - print  if alphabet is lower
 * @c: the input digit
 * Return:last digit
*/
int print_last_digit(int c)
{
int last = c % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
_putchar(last);
return (last);
}
