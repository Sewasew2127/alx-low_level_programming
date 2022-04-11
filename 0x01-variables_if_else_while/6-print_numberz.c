#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all single digit without printf
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar('0' + x);
	putchar('\n');
	return (0);
}
