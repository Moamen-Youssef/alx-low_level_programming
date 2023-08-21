#include "main.h"
#include <string.h>
/**
 * rev_string - prints the string in reverse
 * @s: the string
 * Return:nothing.
 */

void rev_string(char *s)
{
int strlength = strlen(s);
int i;
char strarr[strlength];
char *p;
p = &*s;
for ( i = strlength; i > 0; i--)
{
strarr[strlength - i] = s[i-1]; 
}
for (i = 0; i < strlength; i++)
{
*(p + i) = strarr[i];
}
}
