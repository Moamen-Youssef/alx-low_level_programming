#include <stdio.h>
#include "main.h"
/**
 * main - print alphabet
 * Return:0
*/
void print_alphabet(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
return;
}
int main (void)
{
print_alphabet();
return(0);
}
