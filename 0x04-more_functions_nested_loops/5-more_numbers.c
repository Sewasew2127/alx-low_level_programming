#include "main.h"
/**
 * more_numbers - prints 10 times the number form 0 to 14
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('0' +  j / 10);
			_putchar('0' + j % 10);
		}
		_putchar('\n');
		i++;
	}
}
