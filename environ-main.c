#include <stdio.h>
#include <unistd.h>

extern char **environ;

int main(void)
{
	unsigned int i;

	i = 0;
	while (environ[i])
	{
		printf("%s\n", environ[i++]);
	}
	return (0);
}
