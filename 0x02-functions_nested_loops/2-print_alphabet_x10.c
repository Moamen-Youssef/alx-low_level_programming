#include <stdio.h>
/**
 * main - print alphabet
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

int main (void)
{
print_alphabet_x10();
return(0);
}
