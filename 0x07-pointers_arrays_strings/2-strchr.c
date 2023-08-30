#include "main.h"
#include <string.h>
/**
 * _strchr - find the first occurance of char then print starting from it
 * @s: the pointer of the string
 * @c: the char
 * Return: pointer.
 */
char *_strchr(char *s, char c)
{
char *xi = strchr(s, c);
return (xi);
}
