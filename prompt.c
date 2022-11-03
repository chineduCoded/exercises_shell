#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints "$ ", wait for the user to enter a command,
 * prints it on the next line.
 *
 * Return: Always 0.
 */

int main(void)
{
	char *buf;
	size_t n = 1024;

	buf = malloc(sizeof(char) * n);
	if (buf == NULL)
	{
		perror("Failed to allocate\n");
		exit(1);
	}
	printf("$ ");
	getline(&buf, &n, stdin);
	printf("%s", buf);

	free(buf);
	return (0);
}
