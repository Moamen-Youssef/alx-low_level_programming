#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - print square root.
 *@n: number to get the Sroot.
 * to_check - check the root.
 *@sqr: num to get its square.
 * Return:-1 or square root of num.
 */
int to_check(int n, int sqr)
{
if ( n * n == sqr)
{
return (n);
}
if (n * n > sqr)
{
return (-1);
}
return (to_check(n + 1, sqr));
}
int _sqrt_recursion(int n)
{
return (to_check(1, n));
}
