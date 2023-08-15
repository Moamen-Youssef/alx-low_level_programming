#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * print_last_digit - print  if alphabet is lower
 * @c: the input digit
 * Return:last digit
*/
int print_last_digit(int c)
{
printf("%d", c % 10);
return (c % 10);
}
