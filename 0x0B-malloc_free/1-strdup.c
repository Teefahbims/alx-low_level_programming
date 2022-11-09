#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a paramter
 * @str: string to copy
 * Return: returns a pointer to a newly allocated space in the memory
 */

char *_strdup(char *str)
{
	int str_size, i;
	char *new_str;

	str_size = 0;
	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + str_size) != '\0')
	{
		str_size++;
	}
	str_size++;
	new_str = malloc(sizeof(char) * str_size);

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < str_size; i++)
	{
		*(new_str + i) = *(str + i);
	}

	*(new_str + str_size) = '\0';
	return (new_str);
}


