
#include "main.h"
/**
 * times_table - print 10 times table
 * Return:0
*/
void times_table(void)
{
int table = 0;
int i;
int counter;
while (table <= 9)
{
printf("0, ");
counter = table;
for (i = 0; i < 9; i++)
{
if (counter < 10)
{
printf(" %d", counter);
}
else
printf("%d", counter);
counter = counter + table;
if (i < 8)
{
printf(", ");
}
}

printf("\n");
table++;
}
}
