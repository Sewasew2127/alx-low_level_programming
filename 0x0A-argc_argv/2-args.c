#include <stdio.h>
/**
 * _prints - print string
 * @s: stirng to be printed
 *
 * Return: void.
 */
_prints(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}
/**
 * main - a program that prints all arguments it receives
 * @argc: the numer of argument passed to the program
 * @argv: array of strings passed to the program
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	do {
		_prints(*argv++);
	} while (--argc > 0);
	
	return (0);
}
