#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates and array of chars, and
 * initializes it with a specific char
 * @size: size of array of to be printed
 * @c: char to fill the array with
 * Return: return a pointer to the array or null if fails
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *name;

	name = malloc(sizeof(char) * size);
	if (name == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < (int)size; i++)
	{
		name[i] = c;
	}
	return (name);
}

