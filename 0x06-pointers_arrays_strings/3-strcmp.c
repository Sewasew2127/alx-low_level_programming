#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Description: a function that works like strcmp
 *
 * Return: integer.
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 && *s2; ++s1, ++s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	if (*s1)
		return (1);
	if (*s2)
		return (-1);
	return (0);
}
