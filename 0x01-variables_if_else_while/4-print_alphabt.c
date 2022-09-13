#include <stdio.h>

/**
 * main - print alphabet excluding e and q
 *
 * Description: print all alphabet using putchar function
 * excluding e and q.
 * Return: 0
 */

int main(void)
{
	char albet;

	for (albet = 'a'; albet <= 'z'; albet++)
	{
	if (albet != 'e' && albet != 'q')
	{
		putchar(albet);
	}
	}
	putchar('\n');
	return (0);
}
