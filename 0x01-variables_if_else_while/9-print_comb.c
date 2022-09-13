#include <stdio.h>
/**
 * main - print all possible combinations of single digit numbers
 *
 * Description: in ascending order and separated with a ',', ptint
 * all combinations of single digit numbers useing putcha function
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
