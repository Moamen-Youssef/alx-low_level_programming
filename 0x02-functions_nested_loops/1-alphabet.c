#include <stdio.h>
/**
 * main - print alphabet
 * Return:0
*/
void print_alphabet(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
printf("%c", alpha);
}
printf("\n");
return;
}

int main (void)
{
print_alphabet();
return(0);
}
