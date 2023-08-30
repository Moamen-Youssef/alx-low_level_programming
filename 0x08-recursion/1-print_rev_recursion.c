#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - print string recursively
 *@s: string
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
printf("%c", s[0]);
printf("%c", s[0]);
}
