#include "main.h"
/**
 * print_line - draws a striagnt line in the terminal
 * @n: the number of times the _ should be printed
 *
 * Return: void.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
