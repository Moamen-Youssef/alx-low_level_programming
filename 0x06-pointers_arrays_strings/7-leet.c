#include "main.h"
#include <string.h>
/**
 * leet - replace some chars
 * @str: the string to convert
 * Return:char
 */
char *leet(char *str)
{
int i;
int len;
char *p;
len = strlen(str);
p = str;
for (i = 0; i < len; i++)
{
if (str[i] == 'a' || str[i] == 'A')
{
*(p + i) = '4';
}
if (str[i] == 'e' || str[i] == 'E')
{
*(p + i) = '3';
}
if (str[i] == 'o' || str[i] == 'O')
{
*(p + i) = '0';
}
if (str[i] == 't' || str[i] == 'T')
{
*(p + i) = '7';
}
if (str[i] == 'l' || str[i] == 'L')
{
*(p + i) = '7';
}
}
return (str);
}
