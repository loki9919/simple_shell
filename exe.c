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
	else
	{
		waitpid(child, &state, 0);
		free_string(order);
	}
	return(WEXITSTATUS(state));
}
