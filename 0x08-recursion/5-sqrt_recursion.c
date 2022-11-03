#include "main.h"

/**
 * find_sqrt - function finds the natural square root of an inputted number.
 * @num: the number to find the square root of.
 * @root: the root to be testrd.
 *
 * Return: if the num has a square root - the square root
 *		if it doesnt - -1.
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
