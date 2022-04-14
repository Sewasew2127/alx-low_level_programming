#include "main.h"
/**
 * print_square - prints a square
 * @size: the size of the square
 *
 * Return: void.
 */
void print_square(int size)
{
	int row;
	int col;

	for (col = 0; col < size; col++)
	{
		for (row = 0; row < size; row++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
