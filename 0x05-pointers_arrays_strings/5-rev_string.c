#include "main.h"
/**
 * rev_string - a function that reveses a string
 * @s: the string to be reversed
 *
 * Retrun: nothing.
 */
void rev_string(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
}
