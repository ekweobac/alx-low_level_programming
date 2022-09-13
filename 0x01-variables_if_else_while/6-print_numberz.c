#include <stdio.h>

/**
 * main - print single numbers
 *
 * Description: using putchar, print single numbers in the
 * base of 10 starting from 0.
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
