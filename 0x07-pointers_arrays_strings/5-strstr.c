#include "main.h"
#include <string.h>
/**
 * _strstr - find the matched substring in str1
 * @haystack: the pointer of the str1
 * @needle: the string to search for
 * Return:pointer to string haystack.
 */
char *_strstr(char *haystack, char *needle)
{
char *p = strstr(haystack, needle);
return (p);
}
