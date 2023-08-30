#include "main.h"

/**
 * to_check - to check the prime.
 *@num: counter.
 * Return:0 or 1.
 */
/**
 * is_prime_number - find if the num is prime.
 * to_check - to check the prime.
 *@n: number to find if it is prime.
 * Return:0 or 1.
 */
int to_check(int n, int num)
{
if (n < 0 || n == 1)
{
return (0);
}
if (num == n)
{
return (1);
}
if (n % num != 0)
{
return (to_check(n, num + 1));
}
return (0);
}

int is_prime_number(int n)
{
return (to_check(n, 2));
}
