#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: the string
 * @needle: substring
 *
 * Description: a functin similar to the standard library 
 * function strstr.
 *
 * Return: a pointer to the begininng of the located sbstring
 */
char *_strstr(char *haystack, char *needle)
{
	char *hp;
	char *np;

	do {
		hp = haystack;
		np = needle;
		do {
			if (!*np)
				return (haystack);
			if (!*hp)
				return (NULL);
		} while (*hp++ == *np++);
	} while(*(++haystack));
	return (NULL);
}
