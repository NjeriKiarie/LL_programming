#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	int ch;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar ('\n');
	return (0);
}
