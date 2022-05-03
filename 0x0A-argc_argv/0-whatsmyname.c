#include "main.h"
/**
 * _print_string - prints string followed by new line
 * @str: the string to be printdted
 *
 * Return: Nothing.
 */
void _print_string(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
/**
 * main - entry point to pring the program name
 * @argc: numer of argument
 * @argv: array of argumet
 *
 * Return: Always 0.
 **/
int main(int argc, char *argv[])
{
	(void)argc;
	_print_string(argv[0]);

	return (0);
}
