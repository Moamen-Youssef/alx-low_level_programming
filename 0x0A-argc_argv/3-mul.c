#include <stdio.h>
#include <stdlib.h>
/**
 * main - function mul two args.
 * @argc: the command line arguments number
 * @argv: the array of command line strings
 * Return: 0.
*/

int main(int argc, char *argv[])
{
int i;
int mul;
mul = 1;
for (i = 1; i < argc; i++)
{
if (argc == 3)
{
mul = mul * atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", mul);
return (0);
}
