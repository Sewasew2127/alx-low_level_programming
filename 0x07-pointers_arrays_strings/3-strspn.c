#include "main.h"
/**
 * _strspn - a function that gets the lenght of a prefix substring
 * @s: char
 * @accept: b characters
 *
 * Description: similar to the standard library gunction strspn
 *
 * Return: the number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	char *ap;

	for (x = 0; s[x]; x++)
	{
		for (ap = accept; *ap; ++ap)
		{
			if (s[x] == *ap)
				break;
		}
		if (!*ap)
			break;
	}
	return (x);
}
