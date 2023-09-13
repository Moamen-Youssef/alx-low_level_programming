#include "3-calc.h"
/**
 * op_add - function to add two nums
 * @a: num1
 * @b: num2
 * Return: the sum.
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - function to sub two nums
 * @a: num1
 * @b: num2
 * Return: the sub.
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - function to mul two nums
 * @a: num1
 * @b: num2
 * Return: the mul.
*/

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - function to div two nums
 * @a: num1
 * @b: num2
 * Return: the div.
*/

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - function to mod two nums
 * @a: num1
 * @b: num2
 * Return: the mod.
*/

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
