#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenan of s2
 * @s1: First string
 * @s2: String to add to end of s1
 * @n: Amount of s2 to add to s1
 * Return: pointer to new area in
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int len = strlen(s1) + n + 1;
char *new_str = malloc(sizeof(char) * len);
char *empt;
empt = "";
if (s1 == NULL)
s1 = empt;
if (s2 == NULL)
s2 = empt;
if (new_str == NULL)
{
return (NULL);
}
if (n >= strlen(s2))
{
strcpy(new_str, s1);
strcat(new_str, s2);
}
strcpy(new_str, s1);
strncat(new_str, s2, n);
return (new_str);
}
