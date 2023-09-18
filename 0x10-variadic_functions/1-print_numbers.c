#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - check the code
 *@separator:.. ....>
 *@n:.. ....>
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
unsigned int arg;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
arg = va_arg(args, int);
if (separator == NULL)
{
printf("%d", arg);
}
else
{
printf("%d", arg);
if (i != n - 1)
{
printf("%s", separator);
}
}
}
va_end(args);
printf("\n");
}
