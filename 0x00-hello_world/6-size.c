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

	printf("Size of a char: %z byte(s)", sizeof(charType));
	printf("Size of an int: %z byte(s)", sizeof(intType));
	printf("Size of a long int: %z byte(s)", sizeof(longType));
	printf("Size of a long long int: %z byte(s)", sizeof(doubleType));
	printf("Size of a float: %z byte(s)", sizeof(floatType));
	return (0);
}
