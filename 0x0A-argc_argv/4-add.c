#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers and print to terminal
 * @argc: size of argv
 * @argv: arrays of value passed from the terminal
 * Return: return int
 */

int main(int argc, char *argv[])
{
	int i, j, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; (*(argv + i))[j] != '\0'; j++)
		{
			if (!(isdigit((*(argv + i))[j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}

