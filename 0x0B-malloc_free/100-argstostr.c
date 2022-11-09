#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your
 * program
 * @ac: for size of av
 * @av: array of command line arguement
 * Return: returns a pointer to the concatenated string
 */
int get_size(int ac, char **av);

char *argstostr(int ac, char **av)
{
	char *new_str;
	int i, j, k, size;

	size = get_size(ac, av);
	new_str = malloc(sizeof(char) * 100);
	if (ac == 0 || av == NULL)
		return (NULL);

	if (new_str == NULL)
		return (NULL);

	j = 0;
	k = 0;
	for (i = 0; i < size; i++)
	{
		if (av[k][j] != '\0')
		{
			new_str[i] = av[k][j];
			j++;
		}
		else
		{
			new_str[i] = '\n';
			j = 0;
			k++;
		}
	}
/*	printf("%s\n", new_str);*/
	return (new_str);
}

/**
 * get_size - get the size of av
 * @ac: the size of av
 * @av: the array from the command line
 * Return: return the size of av
 */

int get_size(int ac, char **av)
{
	int i, j, size;

	size = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			size++;
			j++;
		}
		size++;
	}
	return (size);
}
