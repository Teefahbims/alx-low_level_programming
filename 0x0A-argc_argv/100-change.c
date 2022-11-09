#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum amount of coin to make chagge
 * change for an amount of money
 * @argc: size of argv
 * @argv: array of terminal given argument
 * Return: return int
 */

int main(int argc, char *argv[])
{
	int i, coin, num = 0;
	int cent[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (1);
	}

	coin = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if (coin >= cent[i] && coin != 0)
		{
			num += coin / cent[i];
			coin %= cent[i];
		}
	}
	printf("%d\n", num);
	return (0);
}

