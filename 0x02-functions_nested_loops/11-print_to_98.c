#include "main.h"
/**
 * print_to_98 - print from n to 98
 * @n: starting point
 * Return:none
*/
void print_to_98(int n)
{
while ( n != 97)
{
printf("%d" , n);
if (n != 98)
{
printf(", ");
}
if (n > 97)
{
n--;
}
else
{
n++;
}
}
}

