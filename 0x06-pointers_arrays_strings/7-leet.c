#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * leet - replace some chars
 * @str: the string to convert
 * Return:char
 */
char *leet(char *str)
{
int i;
int j;
int len;
char *p;
char litters[] = {'a','e','o','t','l'};
char nums[5]  = {'4','3','0','7','1'};
len = strlen(str);
p = str;
for (i = 0; i < len; i++)
{
for (j = 0; j < 5; j++)
{
if (str[i] == litters[j] || str[i] == litters[j] - 32)
{
*(p + i) = nums[j];
}
}
}
return (str);
}
