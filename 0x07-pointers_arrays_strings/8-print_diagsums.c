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
int j;
int sum1 = 0;
int sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
}
for (j = size; j >= 0; j--)
{
sum2 += a[j * size - j];
}
printf("%i, %i", sum1, sum2);
}
