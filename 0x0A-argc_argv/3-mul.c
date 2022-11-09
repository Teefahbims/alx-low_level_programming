#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two number
 * @argc: size of argv
 * @argv: argument passed in the terminal
 * Return: return int
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
