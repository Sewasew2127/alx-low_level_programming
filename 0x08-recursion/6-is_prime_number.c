#include "main.h"
/**
 * _help_prime - helper for the net function
 * @x: the integer to be checkde
 * @y: the divisor
 *
 * Return: 1 if x is prime, otherwise 0.
 */
int _help_prime(int x, int y)
{
	if (x % y == 0)
		return (0);
	if (x < y * 2)
		return (1);
	return (_help_prime(x, y + 1));
}
/**
 * is_prime_number - a function returns 1 if n is prime number
 * @n: the integer to be checkd
 *
 * Return: 1 if true otherwise 0.
 */
int is_prime_number(int n)
{
	if (n < 4)
		return (n > 1);
	return (_help_prime(n, 2));
}
