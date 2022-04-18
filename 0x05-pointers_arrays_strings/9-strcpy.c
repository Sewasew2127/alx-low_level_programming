#include "main.h"
/**
 * _strcpy - copies the string
 * @dest: buffer pointed
 * @src: src of the string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	if (dest && src)
	{
		while (*(src + i))
			++i;
		if (src + i < dest || dest + i < src)
		{
			do {
				*(dest + j++) = *src++;
			} while (i--);
		}
	}
	return (dest);
}
