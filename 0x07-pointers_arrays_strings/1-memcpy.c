#include "main.h"
#include <string.h>
/**
 * _memcpy - copy n chars from mempry area src to dest
 * @dest: the pointer of the dest
 * @src: the pointer of src
 * @n: the nmber of bytes
 * Return: pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
