#include "main.h"
/**
 * puts2 - prints every othre character of a string
 * @str: the string to be printed
 *
 * Return: nothing.
 **/
void puts2(char *str)
{
	if (str)
	{
		do {
			if (*str)
				_putchar(*str++);
		} while (*str++);
		_putchar('\n');
	}
}
