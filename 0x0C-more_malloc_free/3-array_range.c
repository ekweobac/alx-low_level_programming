#include "main.h"
#include <stdlib.h>

/**
 * array_range - creats an array of intergers
 * @min: first interger number
 * @max: last ingeger number
 *
 * Returns: pointet to newly allocated memory or NULL if fails
 */

int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	1 = max - min + 1;
	a = malloc(sizeof(int) * 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}

