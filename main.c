#include "main.h"
#include <stdio.h>

/**
 * main - Checks the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char *getEnv;

	getEnv = _getenv("PATH");
	printf("The path is %s\n", getEnv);
	return (0);
}
