#include "main.h"
/**
 * print_array - prints the array elms
 * @a: the pointer to array
 * @n: number of elems
 * Return:nothing.
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", *(a + i));
if ( i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
