#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: return a pointer to an array of strings
 */
int get_w_size(char *str);
char **allocmem(char *str, int size, char *new_arr[]);

char **strtow(char *str)
{
	int i, j, tmp, size;
	char **new_arr;

	if (str == NULL)
	{
		return (NULL);
	}

	size = get_w_size(str);

	new_arr = malloc(sizeof(char) * (size + 1));

	if (new_arr == NULL)
	{
		return (NULL);
	}

	new_arr = allocmem(str, size, new_arr);

	j = 0;
	for (i = 0; i < 3; i++)
	{
		tmp = 0;
		while (str[j] != '\0')
		{
			if (str[j] == ' ')
			{
				while (str[j] == ' ' && str[j] != '\0')
				{
					j++;
				}
			}
			else
			{
				while (str[j] != ' ')
				{
				/*	printf("j = %d; tmp = %d\n", j, tmp);*/
					new_arr[i][tmp] = str[j];
					j++;
					tmp++;
				}
				new_arr[i][tmp] = '\0';
				break;
			}
		}
/*		printf("The value of split is: %s\n", new_arr[i]);*/
	}
	new_arr[size] = NULL;
	return (new_arr);
}

/**
 * allocmem - allocated to split string i.e 2d array
 * @size: size of the outer array
 * @str: str to split
 * @new_arr: new array to use with dynamic mem allocation
 * Return: returns a pointer to an array of string
 */

char **allocmem(char *str, int size, char *new_arr[])
{
	int i, j, w_size;

	j = 0;
	for (i = 0; i < size; i++)
	{
		w_size = 0;

		while (str[j] != '\0')
		{
			if (str[j] == ' ')
			{
				while (str[j] == ' ')
				{
					j++;
				}
			}
			else
			{
				while (str[j] != ' ')
				{
					j++;
					w_size++;
				}
				new_arr[i] = malloc(sizeof(char) * w_size + 1);
			/*	printf("j = %d; w_size = %d\n", j, w_size);*/
				break;
			}
		}
	}
	return (new_arr);
}

/**
 * get_w_size - get the size of str
 * @str: size to calculate
 * Return: return the size of str
 */

int get_w_size(char *str)
{
	int i, size;

	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		if (isalnum(str[i]))
		{
			size++;
			while (isalnum(str[i]))
			{
				i++;
			}
		}
		else
		{
			i++;
		}
	}
	return (size);
}
