#include <stdio.h>

/**
 * main - Program that prints all the arguments, without using ac
 * @ac: number of items in av
 * @av: NULL terminated array of strings
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	(void)ac;

	while (*av)
	{
		printf("%s\n", *av);
		av++;
	}
	return (0);
}
