#include "variadic_functions.h"
#include <stdarg.h>
#include <ctype.h>

/**
 * print_strings - check the code
 *@separator:.. ....>
 *@n:.. ....>
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char  *arg;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
arg = va_arg(args, char*);
if (separator == NULL)
{
printf("%s", arg);
}
else
{
if (arg == NULL)
{
printf("(nil)");
}
printf("%s", arg);
if (i != n - 1)
{
printf("%s", separator);
}
}
}
va_end(args);
printf("\n");
}
