#include "main.h"
#include<string.h>
#include <stdlib.h>

/**
 * _strdup - check the code
 *@str: string.
 * Return: Always 0 or NULL.
 */
char *_strdup(char *str)
{
char* str2;
if (str == NULL)
{
return (NULL);
}

str2 = strdup(str);
return (str2);
}
