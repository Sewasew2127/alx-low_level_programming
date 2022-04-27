#include "main.h"
/**
 * _help_sqrt - a function that returns the
 * natural square root of a number.
 * @x: the integer to be in squar root.
 * @y: the power
 * Return: the square root of n.
 */
int _help_sqrt(int x, int y)
{
	if (y * y < x)
		return (_help_sqrt(x, y + 1));
	return (y * y == x ? y : -1);
}
/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 *
 * @n: the integer to be in squar root.
 *
 * Return: the square root of n.
 */
int _sqrt_recursion(int n)
{
	return (_help_sqrt(n, 0));
}
