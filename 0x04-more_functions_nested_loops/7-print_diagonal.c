#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of tims the \ printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int lnum;
	int llen;

	for (lnum = 0; lnum < n; lnum++)
	{
		for (llen = 0; llen < lnum; llen++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
