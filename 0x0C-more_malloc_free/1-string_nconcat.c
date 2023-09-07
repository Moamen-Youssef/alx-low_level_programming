#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - check the code.
 * @s1: str1.
 * @s2: str2.
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int len = strlen(s1) + n + 1;
char *new_str = malloc(sizeof(char) * len);
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (new_str == NULL)
{
return (NULL);
}
if (n >= strlen(s2))
{
len = len - n +  strlen(s2);
new_str = malloc(sizeof(char) * len);
strcpy(new_str, s1);
strcat(new_str, s2);
}
strcpy(new_str, s1);
strncat(new_str, s2, n);
return (new_str);
}
