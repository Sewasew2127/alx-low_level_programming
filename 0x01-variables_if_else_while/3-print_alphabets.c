#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints the alphabet in
 * lowercases and then in uppercase followed by a new
 * line.
 * Return: 0
 */
int main(void)
{
	for (int c = 0; c < 26; ++c)
		putchar('a' + c);
	for (int d = 0; d < 26; ++d)
		putchar('A' + d);
	putchar('\n');
	return (0);
}
