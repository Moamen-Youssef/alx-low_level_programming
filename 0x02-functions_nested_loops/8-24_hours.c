#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - print timer
 * Return:0
*/
void jack_bauer(void)
{
int hrs =0;
int mins;
while (hrs <24)
{
for (mins = 0; mins <=59; mins++)
{
if ( hrs < 10 )
{
printf("0%d", hrs);
}
else
{
printf("%d", hrs);
}
if (mins < 10)
printf(":0%d\n", mins);
else
{
printf(":%d\n", mins);
}
}
hrs++;
}
}
