#include <stdio.h>
#include "main.h"
/**
 * main - print  if alphabet is lower
 * Return:0
*/
int _islower(int c)
{
if (islower(c) == 2)
{
return (1); 
}
else 
{
printf("0");
return (0);
}
}
