#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all the letters except p and e
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 26; ++c)
	{
		if (c != 4 && c != 17)
			putchar('a' + c);

	}
	putchar('\n');
	return (0);
}
