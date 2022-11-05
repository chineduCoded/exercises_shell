#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - executes the command ls -l /tmp in 5 different child processes
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;
	int status;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	pid_t pid = 1;

	while (i <= 4 && (pid != 0))
	{
		pid = fork();
		if (pid < 0)
		{
			perror("Error");
		}
		else if (pid == 0)
		{
			printf("Child process ID is %u\n", getpid());
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error");
			exit(EXIT_FAILURE);
		}
		else
		{
			wait(&status);
		}
		printf("Parent Process ID is %u\n\n", getppid());
		i++;
	}
	return (0);
}
