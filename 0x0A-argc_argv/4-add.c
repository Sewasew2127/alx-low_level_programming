#include "main.h"
#include <limits.h>
/**
 * _print_integer - print integer
 * @i: integer to be printed
 *
 * Return: void.
 */
void _print_integer(int i)
{
	if (i > -1)
	{
		if (i > 9)
			print_integer(i / 10);
		_putchar('0' + i % 10);
	}
	else
	{
		_putchar('-');
		if (n < -9)
			_print_integer(i / -10);
		_putchar('0' - i % 10);
	}
}
/**
 * _prints - prints string
 * @s: stirng to be printed
 *
 * Return: Void.
 */
void _prints(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}
/**
 * main - a program multiplies two numbers form its argument
 * @argc: number of argument
 * @argv: arguments passed to it.
 *
 * Rturn: nothing.
 */
int main(int argc, char *argv[])
{
	int sum;

	for (sum = 0; --argc; sum += atoi(*argv))
	{
		if (!isdigits(*(++argv)))
		{
			_prints("Error");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
