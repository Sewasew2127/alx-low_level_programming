#include "main.h"
/**
 * print_alphabet- prints the alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	int a;

	for (a = 0; a < 26; a++)
		_putchar('a' + a);
	_putchar('\n');
}
