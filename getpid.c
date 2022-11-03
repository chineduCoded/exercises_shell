#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t pid;

	pid = getpid();
	printf("%u\n", pid);
	return (0);
}
