#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: the resulting string
 * @src: the src string
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 * Return: a pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	/* store the length of dest in i */
	for (i = 0; dest[i] != '\0'; ++i)
		;
	/* concatenate src to dest */
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
