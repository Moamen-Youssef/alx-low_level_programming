#include "main.h"

**
 * print_diagsums - print the chess board
 * @a: the array
 * @size: 
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1;
int sum2;
sum1 = 0;
sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 = a[i * size + i] + sum1;
}
for (i = size; i >= 0; i--)
{
sum2 = a[i * size - i] + sum2;
}
printf("%d, %d", sum1, sum2);
}
