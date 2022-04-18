#include "main.h"
/**
 * rev_string - a function that reveses a string
 * @s: the string to be reversed
 *
 * Retrun: nothing.
 */
void rev_string(char *s)
{
	char *r = s;

	if (s)
	{
		while (*r)
			++r;
		while (s < --r)
		{
			*s ^= *r;
			*r ^= *s;
			*s ^= *r;
			++s;
		}
	}
}
