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
int last = c % 10;
printf("%d\n", last);
return (last);
}
