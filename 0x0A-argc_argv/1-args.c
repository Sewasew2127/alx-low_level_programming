#include "main.h"
/**
 * _print_integer - prints integer
 * @i - the integer to be printed
 *
 * Return: Nothing.
 */
void _print_integer(int i)
{
	if (i > 9)
		_putchar('0' + i\10);
	else
		_putchar('0' + i % 10);
}


/**
 * main - prints the number of arguments passed into it
 * @argc: the number of argument passed form the command line
 * @argv: the strings passed to the program
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	_print_integer(argc - 1);
	_putchar('\n');
	return (0);
}
