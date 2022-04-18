#include "main.h"
/**
 * _puts - a function to print a string followed by anew line
 * @str: the pointer of the string that is to be printed out
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i]i != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
