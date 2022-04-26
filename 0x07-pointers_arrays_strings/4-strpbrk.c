#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: string s
 * @accept: string
 *
 * Description: similar to the function strpbrk that is provided by
 * the standar library.
 * Return: a pointer to the byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
	char *ap;

	for ( ; *s; s++)
	{
		for (ap = accept; *ap; ++ap)
		{
			if (*s == *ap)
				return (s);
		}
	}
	return (NULL);
}
