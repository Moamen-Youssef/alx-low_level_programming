#include <stdio.h>
#include <ctype.h>
/**
 * main - print  if alphabet is lower
 * Return:0
*/
int print_sign(int n)
{
if ( n > 0)
{
printf("+");
return (1);
}
else if ( n < 0)
{
printf("-");
return (-1);
}
else
{
printf("0");
return (0);
}
}

int main (void)
{
print_sign('y');
return(0);
}
