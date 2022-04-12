#include "main.h"
/**
 * print_alphabet_x10: prints alphapbet 10 times
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i, j;

	i = 1;
	while (i <= 10)
	{
		for (j = 'a'; j < 'z'; j++)
			_putchar(j);
		i++;
		_putchar(10);
	}
}
