#include "main.h"
#include <stdlib.h>

/**
 * _print - move a string one place to the left and print the string
 * @str: string to move
 * @1: size of string
 *
 * Return: void
 */

void _print(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++
	}

	_putchar('\n');
	free (str);
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index to num
 * @dest: destination to multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, ot NULL to failure
 */


