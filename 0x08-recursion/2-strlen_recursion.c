#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - print the length recursevely.
 *@s: string
 * Return: length of string.
 */
int _strlen_recursion(char *s)
{
if (s[0] == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
