#include <stdio.h>

/**
 * main - function types its arguments
 * @argc: the command line arguments number
 * @argv: the array of command line strings
 * Return: 0.
*/

int main (int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
