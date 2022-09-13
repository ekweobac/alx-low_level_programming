#include <stdio.h>

/**
 * main - base 16 numbers
 *
 * Description: print numbers in base 16 using putcha
 * printf and puts function are not allowed
 * Return: o
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
