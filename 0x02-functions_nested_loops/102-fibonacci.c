#include <stdio.h>
/**
 * main - prints the first 50 fibonacchi numbers
 *
 * Return: 0.
 */
int main(void)
{
	long a1;
	long a2;
	long n;
	int c;

	a1 = 1;
	a2 = 2;
	n = a1 + a2;
	printf("%ld, %ld, ", a1, a2);
	for( c = 0; c < 50; c++)
	{
		printf("%ld", n);
		a1 = a2;
		a2 = n;
		n = a1 + a2;
		if (c < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
