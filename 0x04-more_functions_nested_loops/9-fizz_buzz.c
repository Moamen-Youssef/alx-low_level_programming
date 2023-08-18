#include <stdio.h>
/**
 * print_square - Fizz Buzz code
 * Return:nothing
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if(i % 5 == 0 && i % 3 == 0)
{
printf("FiZZBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if(i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);   
}
}
printf("\n");
return (0);
}
