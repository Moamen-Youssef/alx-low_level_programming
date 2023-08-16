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
printf("%+1", n);
}
else if (n < 0)
{
printf("-1", n);
}
else
{
printf("0", n);
}
printf("\n");
return 0;
}
