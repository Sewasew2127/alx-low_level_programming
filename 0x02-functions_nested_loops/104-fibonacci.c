#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0.
 **/
int main(void)
{
	unsigned long a1;
	unsigned long a2;
	unsigned long n;
	int c;

	a1 = 1;
	a2 = 2;
	n = a1 + a2;
	printf("%lu, %lu, ", a1, a2);
	for (c = 0; c < 96; c++)
	{
		printf("%lu", n);
		a1 = a2;
		a2 = n;
		n = a1 + a2;
		if (c < 96)
			printf(", ");
	}
	printf("\n");
	return (0);
}
