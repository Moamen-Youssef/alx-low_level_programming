#include <stdio.h>
#include <ctype.h>
/**
 * main - print  if alphabet is lower
 * Return:0
*/
int _isalpha(int c)
{
if (isalpha(c) == 1 || isalpha(c) == 2 )
{
return (1); 
}
else 
{
return (0);
}
}
