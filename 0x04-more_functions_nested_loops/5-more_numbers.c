#include "main.h"


/**
 * more_numbers - prints 10 times the numbers from 0 to 14,
 *	followed by a newline
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int x, a;

	for (a = 0; a <= 9; a++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}

			_putchar('\n');
		}
	}
}
