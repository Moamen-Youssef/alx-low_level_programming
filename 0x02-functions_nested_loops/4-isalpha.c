#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - print  if alphabet is lower
 * @c: alphabet
 * Return:0
*/
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
