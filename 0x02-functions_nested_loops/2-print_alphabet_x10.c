#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return:0
*/
void print_alphabet_x10(void)
{
char alpha;
int counter = 1;
while (counter <= 10)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
printf("%c", alpha);
}
printf("\n");
counter++;
}
return;
}
