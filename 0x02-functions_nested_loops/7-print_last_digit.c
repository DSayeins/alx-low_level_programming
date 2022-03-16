#include "main.h"

/**
 * * print_last_digit - Entry point
 * * @n: the number to print
 * * Return: n.
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	n = n % 10;

	return (n);
}
