#include "main.h"
/**
 * swap_int - swap numbers
 * @a: the pointer1
 * @b: the pointer2
 * Return:nothing.
 */

void swap_int(int *a, int *b)
{
int np;
int np2;
np = *b;
np2 = *a;
*a = np;
*b = np2;
}
