#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * @s: string to encode
 *
 * Description: each cahracter in the string is replaced with
 * the 13th  letter ater it
 *
 * Return: the pointer of the encodded string
 */
char *rot13(char *s)
{
	char *c;
	char rot;

	for (c = s; *c; ++c)
	{
		rot = 'A' + (*c & 32);
		if (('a' <= *c && *c <= 'z') || ('A' <= *c && *c <= 'Z'))
			*c = (*c - rot + 13) % 26 + rot;
	}
	return (s);
}
