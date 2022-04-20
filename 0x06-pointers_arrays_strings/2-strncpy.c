#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: copied string
 * @src: string to be copied
 * @n: n bytes of the string are copied
 *
 * Description: copies the string pointed to by src, including
 * the terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *destin = dest;
	int len_src = 0;

	while (len_src < n && src[len_src])
		++len_src;
	if (src + len_src < dest || dest + n < src)
	{
		for (; len_src; --len_src, --n)
			*destin++ = *src++;
		for (; n; --n)
			*destin++ = '\0';
	}
	return (dest);
}
