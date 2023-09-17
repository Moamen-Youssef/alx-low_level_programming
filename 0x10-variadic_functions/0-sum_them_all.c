#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - check the code
 *@n: .....
 * Return:0.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, total = 0;
int arg;
va_list args;
va_start(args, n);
for (i = n; i; i--)
{
if (n == 0)
{
return (0);
}
arg  = va_arg(args, int);
total += arg;
}
va_end(args);
return (total);
}
