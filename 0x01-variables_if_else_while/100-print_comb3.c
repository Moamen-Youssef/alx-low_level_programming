#include <stdio.h>
/**
 * main - print alphabet in reverse
 * Return:0
*/
int main()
{
int num1;
int num2;
for (num1 = '0'; num1 <= '8'; num1++)
{
for (num2 = '1'; num2 <= '9'; num2++)
{
if (num1 != num2 && num2 > num1)
{
putchar(num1);
putchar(num2);
if(num1 != '8')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
