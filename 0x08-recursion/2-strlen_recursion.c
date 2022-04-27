#include "main.h"
/**
 * _strlen_recursion - return the length of a sting
 * @s: the string whose lenght is to be returned
 *
 * Return: the length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
		return (0);
}
