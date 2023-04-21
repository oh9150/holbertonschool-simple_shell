#include "main.h"

/**
 * main - prints argv without using argc
 * @argc: a count of argv
 * @argv: the arguments passed
 * return: 0
 */
int main(int argc, char **argv)
{
	int i = 1;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
