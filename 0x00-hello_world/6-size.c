#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: using sizsof to print the size of various types.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %d 1 byte(s)\n", sizeof(char));
	printf("Size of an int: %d 1 byte(s)\n", sizeof(int));
	printf("Size of a long int: %d 1 byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d 1 byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d 1 byte(s)\n", sizeof(float));
	return (0);
}
