#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: the memory area to be copied to
 * @src: the mrmory area to copied from
 * @n: bytes to be copied
 *
 * Description: a function that is similar to the standard library memcpy.
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	for (x = 0; x < n; x++, src++)
		dest[x] = *src;
	return (dest);
}
