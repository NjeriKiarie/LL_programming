#include "main.h"
#include <stdio.h>


/**
 * _strcat - function appends the src sting to the dest
 *		overwriting the terminating null byte
 * @dest: the destination string
 * @src: the source string
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
