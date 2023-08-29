#include "main.h"
#include <string.h>

/**
 * _strspn - return the length of substring founded in str1
 * @s: the pointer of the dest
 * @accept: the pointer of src
 * Return: .
 */

unsigned int _strspn(char *s, char *accept)
{
int num = strspn(s, accept);
return (num);
}
