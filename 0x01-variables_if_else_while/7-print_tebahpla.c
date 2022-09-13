#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 *
 * Descrption: using putchar print the alphabet in reverse
 * without using the printf and puts functions.
 * Return: 0
 */

int main(void)
{
	char albet;

	for (albet = 'z'; albet >= 'a'; albet--)
	{
		putchar(albet);
	}
	putchar('\n');
	return (0);
}
