#include <stdio.h>

/**
 * main - prints the number of argument passed into it
 * @argc: size of argv
 * @argv: array of arg passed in terminal
 * Return: return int
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

