#include <stdio.h>

/**
 * main - entry point. print its name
 * @argc: size of argv
 * @argv: arg passed in the terminal
 * Return: return int
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

