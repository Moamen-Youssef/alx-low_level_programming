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
printf("+");
return 1;
}
else if (n < 0)
{
printf("-");
return -1;
}
else
{
printf("0");
return 0;
}
printf("\n");
return 0;
}
