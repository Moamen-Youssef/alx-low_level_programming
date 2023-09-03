#include <stdio.h>

/**
 * main - function types its arguments number
 * @argc: the command line arguments number
 * @argv: the array of command line strings
 * Return: 0.
*/

int main (int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
