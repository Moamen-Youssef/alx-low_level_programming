#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - check the code
 *@n: .....
 * Return:0.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int arg;
int total = 0;
va_list args;
va_start(args, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
arg = va_arg(args, int);
total += arg;
}
va_end(args);
return (total);
}
