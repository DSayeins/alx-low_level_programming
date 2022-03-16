#include <stdio.h>
#include "main.h"

/**
 * * main - Entry point
 *
 * * Return: Always 0.
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 97;i <= 122; i++)
	{
		_putchar(i);
	}
}

int main(void)
{
	print_alphabet();

	return (0);
}
