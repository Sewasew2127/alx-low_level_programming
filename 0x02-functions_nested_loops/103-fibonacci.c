#include <stdio.h>
/**
 * main - fibonachi series
 *
 * Return: 0.
 **/
int main(void)
{
	long a1;
	long a2;
	long n;
	long sum;
	int c;

	a1 = 1;
	a2 = 2;
	c = 1;
	n = a1 + a2;
	sum = a2;
	while (c > 0)
	{
		a1 = a2;
		a2 = n;
		n = a1 + a2;
		if (n % 2 == 0)
		{
			sum = sum + n;
		}
		if (n > 4000000)
			break;
		c++;
	}
	printf("%ld\n", sum);
	return (0);
}
