#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * This program will assign a random number to the variable n 
 * Complete the source code in order to print whether the number stored in the 
 * variable n is positive or negative.
 * Return: 0
 */
int main (void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
  /* time to code*/
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negetive\n", n);
}
return (0);
}
