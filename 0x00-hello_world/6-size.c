#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long long int  doubleType;
	long int longType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(doubleType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));
	return (0);
}
