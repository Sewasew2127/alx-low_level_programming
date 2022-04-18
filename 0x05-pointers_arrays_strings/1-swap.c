#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: a pointer to the first integer we want to swap
 * @b: a pointer to the second integer we want to swap
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
