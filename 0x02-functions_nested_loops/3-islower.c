#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower() - print  if alphabet is lower
 * @c: the alphaet 
 * Return:0
*/
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
