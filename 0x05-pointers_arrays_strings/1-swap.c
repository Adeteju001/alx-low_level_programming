#include "main.h"

/**
 * swap_int - function
 * @a: parameter
 * @b: parameter
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*b = *a;

	*a = c;
}
