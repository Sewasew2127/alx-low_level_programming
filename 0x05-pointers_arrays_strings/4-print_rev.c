#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string that will be printed in reverse
 *
 * Retrun: nothing.
 */
void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i; j >= 0; --j)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
