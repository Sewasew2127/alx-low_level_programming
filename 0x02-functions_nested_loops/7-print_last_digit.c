#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: the numer whose last digit is to be printed
 *
 * Return: last digit of i.
 */
int print_last_digit(int i)
{
	i = i % 10;

	if (i < 0)
		i = -1 * i;
	_putchar('0' + i);
	return (i);
}
