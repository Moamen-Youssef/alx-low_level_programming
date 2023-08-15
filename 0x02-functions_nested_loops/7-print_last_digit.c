#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print  if alphabet is lower
 * Return:0
*/
int print_last_digit(int c)
{
printf("%d", c % 10);
return(c % 10);
}

int main (void)
{
print_last_digit(552832);
return(0);
}
