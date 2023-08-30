#include <string.h>
/**
 * _strpbrk - find the first occurance of any char of str2 in str1
 * @s: the pointer of the dest
 * @accept: the pointer of src
 * Return:pointer to string s.
 */
char *_strpbrk(char *s, char *accept)
{
char *str = strpbrk(s, accept);
return (str);
}
