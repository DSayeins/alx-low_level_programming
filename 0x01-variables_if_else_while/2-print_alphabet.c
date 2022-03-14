#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*
	 * Description: Complete the source code in order to print
	 * the last digit of the number stored in the variable n.
	 */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	for (i = 97; i <= 122; i++)
	{
		putchar("%c", i);
	}
	return (0);
}
