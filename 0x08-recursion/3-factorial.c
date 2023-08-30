#include "main.h"

/**
 * factorial - get the factorial of number.
 *@n: number of factorial.
 * Return: -1 or 0.
 */

int factorial(int n)
{
if (n == 0)
{
return (1);
}
if (n < 0) 
{
return (-1);
}
return (n * factorial(n - 1));
}
