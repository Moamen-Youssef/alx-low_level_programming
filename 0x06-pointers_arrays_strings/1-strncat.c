#include "main.h"
#include <string.h>
/**
 * _strncat - concat two strings
 * @dest: the pointer to the variable will store the string
 * @src: pointer to the sec. string
 * @n: number of chars
 * Return:the pointer to dest.
 */

char *_strncat(char *dest, char *src , int n)
{
strncat(dest, src, n);
return (dest);
}
