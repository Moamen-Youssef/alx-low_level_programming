#include "main.h"

/**
 * _pow_recursion - return power of x.
 *@x: first num.
 *@y: second num.
 * Return: x or -1.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
