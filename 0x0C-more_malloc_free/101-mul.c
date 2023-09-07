#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - >.....
 *@argc: .......
 *@argv: .......
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int mul;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
return (0);
}
