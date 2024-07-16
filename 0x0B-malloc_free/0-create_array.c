#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - creates array of chars, initializing with specific char
 *
 * @size: size variable for array
 * @c: char
 * Return: pointer to array or NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);
	if (size == 0 || n == 0)
		return(0);

	while(size--)
		n[size] = c;
	return (n);
}

