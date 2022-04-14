#include "main.h"
/**
 * print_triangle - prints triangl
 * @size: the size of the triangle
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
			_putchar(' ');
		for ( ; j > 0; j--)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
