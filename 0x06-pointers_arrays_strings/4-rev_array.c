#include "main.h"
/**
 * reverse_array - reverses the content of an arrays of integers
 * @a: the array to be reversed
 * @n: the number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	for ( ; --n > 0; ++a, --n)
	{
		*a ^= a[n];
		a[n] ^= *a;
		*a ^= a[n];
	}
}
