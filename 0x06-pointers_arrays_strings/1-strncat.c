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
	char *destin = dest;
	int len_src = 0;

	while (*destin)
		++destin;

	while (len_src < n && src[len_src])
		++len_src;
	if (src + len_src < dest || destin + len_src < src)
	{
		while (len_src--)
			*destin++ = *src++;
		*destin = '\0';
	}
	return (dest);
}
