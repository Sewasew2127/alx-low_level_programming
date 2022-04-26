#include "main.h"
/**
 * print_diagsums - a function that prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: pointer to an integer
 * @size: integer
 */
void print_diagsums(int *a, int size)
{
	int r, *p;
	int s1 = 0;
	int s2 = 0;

	for (p = a, r = 0; r < size; r++, p += size + 1)
		s1 += *p;
	for (p = a + size - 1, r = 0; r < size; ++r, p += size - 1)
		s2 += *p;
	printf("%d, %d\n", s1, s2);
}
