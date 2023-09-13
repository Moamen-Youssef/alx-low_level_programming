#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - function.
 * @argc: argc
 * @argv: argv
 * Return: nnmmm,..
*/
int main(int argc, char* argv[])
{
int result;
int (*ptr)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
ptr = get_op_func(argv[2]);
if (!ptr)
{
printf("Error\n");
exit(99);
}
result = ptr(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", result);
return (0);
}
