#include <stdio.h>
#include <stdlib.h>

/**
 * checker - function to print the result of checker.
 * @num: the command line arguments number.
 * @result: the array of command line strings
 * Return: 0 on success, 1 on error.
 */
int checker(int num, int result)
{
int i;
int cid = 0;
int arr_of_money[6] = {25, 10, 5, 2, 1};
if (num == 0)
{
printf("%d\n", result);
return (result);
}
for (i = 0; i < 5; i++)
{
if (num - arr_of_money[i] >= 0)
{
result++;
cid = num - arr_of_money[i];
checker(cid, result);
return (result);
}
}
return 0;
}

/**
 * main - function to print the result of checker.
 * @argc: the command line arguments number.
 * @argv: the array of command line strings
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) < 0)
{
printf("0\n");
return (0);
}
checker(atoi(argv[1]), 0);
return (0);
}
