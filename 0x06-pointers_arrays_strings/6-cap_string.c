#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - replace some symbols
 * @str: the string to convert
 * Return:char
 */
char *cap_string(char *str)
{
int i;
int j;
char *p;
int len = strlen(str);
char symb[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};
p = str;
for (i = 0; i <= len; i++)
{
for (j = 0; j < 13; j++)
{
if (str[i] == symb[j])
{
if(str[i + 1] != ' ' )
{
*(p + (i + 1)) = toupper(str[i + 1]);
}
else
{
*(p + (i + 2)) = toupper(str[i + 2]);
}
}
}
}
return (str);
}
