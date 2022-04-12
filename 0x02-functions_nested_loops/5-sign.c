#include "main.h"
/**
 * print_sign - prints the sign of the number.
 * @c- the int to check
 *
 * Return: 1 if positive
 * 0 if zero
 * Otherwise: -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
