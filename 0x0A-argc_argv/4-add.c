#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function to sum positive args.
 * @argc: the command line arguments number
 * @argv: the array of command line strings
 * Return: 0 on success, 1 on error.
 */


int main(int argc, char *argv[])
{
int i, sum;
sum = 0;
for (i = 1; i < argc; i++)
{
if (isdigit(*argv[i]) != 0)
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
