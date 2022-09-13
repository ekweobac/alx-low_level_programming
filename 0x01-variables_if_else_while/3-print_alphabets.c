#include <stdio.h>

/**
 * main - print lower and uppercase with putchar
 *
 * Description: printf and puts function are not allowed
 * only the putchar function.
 * Return: 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(althabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
