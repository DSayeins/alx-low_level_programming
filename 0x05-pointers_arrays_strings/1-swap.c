#include "main.h"

/**
 * swap_int - Entry point
 * @a: integer
 * @b: integer
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int *c;

	c = 0;
	*c = *a;
	*a = *b;
	*b = *c;
}
