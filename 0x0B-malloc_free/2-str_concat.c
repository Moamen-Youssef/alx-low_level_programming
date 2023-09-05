#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - check the code.
 * @s1: str1.
 * @s2: str2.
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
int tot_len = strlen(s1) + strlen(s2);
char *new_str = malloc(sizeof(char) * tot_len + 1);
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

if (new_str == NULL)
{
return (NULL);
}
strcpy(new_str, s1);
strcat(new_str, s2);
return (new_str);
}
