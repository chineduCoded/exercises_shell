#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - splits a string and returns an array of each word of the string
 *
 * Return: Always 0.
 */

int main(void)
{
	char *buffer;
	size_t n = 1024;
	char *token;

	buffer = malloc(n * sizeof(char));
	while (1)
	{
		printf("$ ");
		getline(&buffer, &n, stdin);
		printf("%s", buffer);
		
		token = strtok(buffer, " ");
		while (token)
		{
			printf("%s", token);
			token = strtok(NULL, " ");
		}
	}
	free(buffer);
	return (0);
}

