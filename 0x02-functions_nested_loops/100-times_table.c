#include "main.h"
/**
 * print_times_table - prints the n times table starting with 0
 * @n: integer parameter
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n ; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				k = i * j;
				_putchar((k < 100) ? ' ' : ('0' + k / 100));
				_putchar((k < 10) ? ' ' : ('0' + k / 10 % 10));
				_putchar('0' + k % 10);
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
