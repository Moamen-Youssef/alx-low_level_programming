#include "main.h"
#include <string.h>
/**
 * _memset - add value to memory location
 * @s: the pointer of the memory to be filled
 * @b: the char
 * @n:the number of rep.
 * Return: pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = memset(s, b, n);
return (p);
}
