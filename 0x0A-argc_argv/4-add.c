#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function sum positive args.
 * @argc: the command line arguments number
 * @argv: the array of command line strings
 * Return: 0.
*/

int main (int argc, char *argv[])
{
int i, sum = 0, check;

for (i = 1; i < argc; i++)
{
check = isdigit(atoi(argv[i]));
if (check)
{
sum = sum + atoi(argv[i]);
}
else 
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
