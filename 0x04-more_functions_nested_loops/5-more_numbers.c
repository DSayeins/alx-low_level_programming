#include "main.h"

/**
 * * more_numbers - Entry point
 */

void more_numbers(void)
{
	int i;
	int j;
	int un;
	int ten;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			un = i % 10;
			ten = i / 10;

			if (j > 9)
			{
				_putchar(ten + '0');
			}
			_putchar(un + '0');
		}
		_putchar('\n');
	}
}
