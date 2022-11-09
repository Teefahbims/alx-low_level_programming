#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: param first string to concat
 * @s2: param second string to concat
 * Return: return the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, tmp, size, s1_size, s2_size;
	char *new_str;

	s1_size = 0;
	s2_size = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1_size) != '\0')
		s1_size++;
	while (*(s2 + s2_size) != '\0')
		s2_size++;

	size = s1_size + s2_size + 1;
	new_str = malloc(sizeof(char) * size);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < s1_size; i++)
		*(new_str + i) = *(s1 + i);
	for (j = 0; j < s2_size; j++)
	{
		tmp = s1_size + j;
		*(new_str + tmp) = *(s2 + j);
	}
	*(new_str + size) = '\0';
	return (new_str);
}
