#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * string_toupper - reverse the array
 * @str: the string to convert its lowercase literals
 * Return:char
 */
char *string_toupper(char *str)
{
int i;
int len;
char *p;
len = strlen(str);
p = str;
for (i = 0; i < len; i++)
{
if (islower(str[i]))
{
*(p + i) = toupper(str[i]);
}
}
return (str);
}
