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
	char str[] = "I love Jesus and I love Debbie";
	char *delim = " ";
	char *token;

	token = strtok(str, delim);
	
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}


