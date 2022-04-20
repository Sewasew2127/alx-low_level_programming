#include "main.h"
/**
 * _strncat - a function like strncat
 * @dest: the string to append on
 * @src: the string to be append
 * @n: number of bytes from src
 *
 * Description: function similar to strcat but uses at most
 * n bytes from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i;
	
	/*store the length of dest */
	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] < n; ++j, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
