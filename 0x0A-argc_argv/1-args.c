#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: the number of argument passed form the command line
 * @argv: the strings passed to the program
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d \n", argc);
	return (0);
}
