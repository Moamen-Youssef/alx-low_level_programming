#include "main.h"
#include <string.h>
/**
 * puts2 - prints the string one by one
 * @str: the string
 * Return:nothing.
 */

void puts2(char *str)
{
int strlength = strlen(str);
int i;
for (i = 0; i < strlength; i++)
{
i++;
printf("%c", str[i - 1]);
}
printf("\n");
}
