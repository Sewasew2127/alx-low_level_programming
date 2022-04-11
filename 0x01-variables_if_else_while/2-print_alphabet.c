#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints out the lowcase alphabet
 * without printf
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 26; ++c)
		putchar('a' + c);
	putchar('\n');
	return (0);
}
