#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @s: string to be capitalized
 *
 * Return: capitalized string.
 */
char *cap_string(char *s)
{
	char *separator = " \t\n,;.!?\"(){}";
	int i;
	int j;

	for (i = 0, j = 0; s[i]; ++i)
	{
		if ('a' <= s[i] && s[i] <= 'z')
		{
			if (i)
			{
				for (j = 0; separator[j] && separator[j] != s[i - 1]; ++j)
					;
			}
			if (separator[j])
				s[i] -= ('a' - 'A');
		}
	}
	return (s);
}

