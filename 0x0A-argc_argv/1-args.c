#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments int the program
 * @agrc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int number = 0;
	(void) argv; /*Ignore argv*/
	
	while ( number < argc)
	{
		number++;
	}
	printf("%i\n", number - 1);
	return (0);
}
