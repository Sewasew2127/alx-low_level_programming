#include <stdio.h>
/**
 * main - a program that prints all arguments it receives
 * @argc: the numer of argument passed to the program
 * @argv: array of strings passed to the program
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}

	return (0);
}
