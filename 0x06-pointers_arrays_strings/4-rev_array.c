#include "main.h"
#include <string.h>
/**
 * reverse_array - reverse the array
 * @a: the arr pointer
 * @n: th array length
 * Return:nothing
 */
void reverse_array(int *a, int n)
{
int reversed_arr[n];
int *arrp;
arrp = a;
int i;
for (i = n -1; i >= 0; i--)
{
reversed_arr[n - i - 1] = a[i];
}
for (i = 0; i < n; i++)
{
arrp[i] = reversed_arr[i];
}
}
