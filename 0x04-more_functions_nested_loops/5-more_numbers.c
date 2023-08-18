#include "main.h"
/**
 * more_numbers - print numbers from 0-14 14 times
 * Return:nothing
*/
void more_numbers(void)
{
int line = 1;
while (line != 15)
{
int i;
for (i = 0; i < 15; i++)
{
_putchar(i);
}
_putchar('\n');
line++;
}
}
