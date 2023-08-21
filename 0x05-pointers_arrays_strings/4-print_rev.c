#include <string.h>
/**
 * print_rev - prints the string in reverse
 * @s: the string
 * Return:nothing.
 */

void print_rev(char *s){
int strlength = strlen(s);
for (int i = strlength; i > 0; i--)
{
printf("%c", s[i - 1]);
}
}
