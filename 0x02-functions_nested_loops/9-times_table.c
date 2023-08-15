#include "main.h"
/**
 * times_table - print 10 times table
 * Return:0
*/
void times_table(void)
{
int table =0;
int i;
int counter;
char comma;
while (table <= 9)
{
printf(" 0, ");
counter = table;
for (i = 0; i < 9; i++)
{
if (i < 8)
{
comma = ',';
}
else 
{
comma = ' ';
}
if (counter < 10)
{
printf(" %d%c ", counter, comma);
}
else
printf("%d%c ", counter, comma);
counter = counter + table;
}
printf("\n");
table++;
}
}
