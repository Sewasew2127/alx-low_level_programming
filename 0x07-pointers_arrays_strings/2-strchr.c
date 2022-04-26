#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: a string on which the caracter is to be located
 * @c: the character to be located
 *
 * Description - a function that is similar to the standard library
 * function strchr
 *
 * Return: a pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	for ( ; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	return (*s == c ? s : NULL);
}
