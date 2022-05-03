#include "main.h"
/**
 * main - the entry point to print the programs name
 * @argc: the numer of the argument passed to the program from
 * the command line
 * @argv: an array of the arguments that are passed to the program
 * from the command line.
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s \n", argv[0]);
	return (0);
}
