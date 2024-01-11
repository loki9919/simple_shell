#include "main.h"

int exec(char **order, char **con, char **argv) 
{
	int state;
	pid_t subprocess;

	subprocess = fork();
	if (subprocess == 0)
	{
		if (execve(order[0], order, con) == -1)
		{
			perror(argv[0]);
			free_string(order);
			exit(EXIT_FAILURE);
		}
	}
	else if (subprocess > 0)
	{
		wait(&state);
		free_string(order);
	}
	else
	{
		perror(argv[0]);
	}
	return (WEXITSTATUS(state));
}
