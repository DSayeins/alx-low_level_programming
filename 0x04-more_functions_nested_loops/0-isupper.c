#include "main.h"

/**
 * * _isupper - Entry point
 * * @c: the character to print
 * * Return: 0 or 1.
 */
int _isupper(int c)
{
	if (c >= 41 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}