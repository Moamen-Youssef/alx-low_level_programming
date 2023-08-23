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
int i;
int reversed_arr[408];
int *arrp;
arrp = a;
for (i = n -1; i >= 0; i--)
{
reversed_arr[n - i - 1] = a[i];
}
for (i = 0; i < n; i++)
{
arrp[i] = reversed_arr[i];
}
}
