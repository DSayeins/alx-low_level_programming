#include "main.h"

/**
 * * _isupper - Entry point
 * * @c: the character to print
 * * Return: 0 or 1.
 */
int _isupper(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
