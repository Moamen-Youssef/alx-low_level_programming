#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - check the code
 *@b: ....>
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
size_t i;  
int  num = 0, bit, strbit = strlen(b) -1;
for (i = 0; i < strlen(b); i++) 
{
if (isalpha(b[i]) != 0 || b == NULL)
{
return (0);
}
if (b[i] == 49)
{
bit = 1;
}
else
{
bit = 0;
}
num += (bit * pow(2, strbit));
strbit--;
}
return (num);
}
