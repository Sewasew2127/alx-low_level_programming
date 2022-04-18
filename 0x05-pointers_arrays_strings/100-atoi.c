#include "main.h"
/**
 * _atoi - a function to convert string to integer
 * @s: the string to be convetted
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	short b;
	int i, sign, res;

	i = b = res = 0;
	sign = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res *= 10;
			res -= (s[i] - '0');
			b = 1;
		}
		else if (b == 1)
			break;
		i++;
	}
	res *= sign;
	return (res);
}

