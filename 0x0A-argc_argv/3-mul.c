#include <stdio.h>
/**
 * main - a program multiplies two numbers form its argument
 * @argc: number of argument
 * @argv: arguments passed to it.
 *
 * Rturn: nothing.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{

		printf("%d \n", argv[1] * argv[2]);
		return (0);
	}
	else
	{
		printf("Error \n");
		return (1);
	
	}
}
