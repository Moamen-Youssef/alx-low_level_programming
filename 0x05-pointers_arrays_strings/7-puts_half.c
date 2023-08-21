#include "main.h"
#include <string.h>
/**
 * puts_half - prints the half of string
 * @str: the string
 * Return:nothing.
 */

void puts_half(char *str)
{
int strlength = strlen(str);
int half_length = strlength / 2;
int i;
if (strlength % 2 == 0)
{
i = half_length;
}
else
{
i = ((strlength - 1) / 2) + 1;
}
for (; i < strlength; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
