#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the results of the multiplication followed by a new line
 * @argc: Number of arguments
 * @argv: array of the arguments
 *
 * Return: 1 if not enough argumnet passed, o otherwise
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = i;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);
		printf("%d\n", j);
	}

	return (0);
}
