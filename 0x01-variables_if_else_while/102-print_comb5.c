#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all combination of 2 digt numbers
 * Return: 0
 */
int main(void)
{
	int i1;
	int j1;
	int i2;
	int j2;

	for (i1 = 0; i1 < 10; i1++)
	{
		for (j1 = 0; j1 < 10; j1++)
		{
			for (i2 = i1; i1 < 10; i2++)
			{
				for (j2= ((i1 == i2) ? (j1 + 1) : 0); j2 < 10; ++j2)
				{
					putchar('0' + i1);
					putchar('0' + j1);
					putchar(' ');
					putchar('0' + i2);
					putchar('0' + j2);
					if (i1 != 9 || j1 != 8 || i2 != 9 || j2 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
