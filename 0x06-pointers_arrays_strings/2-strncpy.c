#include "main.h"
#include <string.h>
/**
 * _strncpy - copy the string to dest
 * @dest: the pointer to the variable will store the string
 * @src: pointer to the sec. string
 * @n: number of chars to copy
 * Return:the pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest,src,n);
return (dest);
}
