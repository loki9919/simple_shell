#include "main.h"

/**
 * exec - create a child process and execute a command.
 * @order: an array of strings representing the command and its arguments.
 * @con: an array of strings to be passed as environment variables.
 * @argv: an array of strings containing program information
 * Return: the exit status of the child process.
 */

int exec(char **order, char **con, char **argv)
{
	int state = 0;
	pid_t subprocess;

	subprocess = fork();
	if (subprocess == 0)
	{
		if (execve(order[0], order, con) == -1)
		{
			perror(argv[0]);
			free_data(order);
			exit(EXIT_FAILURE);
		}
	}
	else if (subprocess > 0)
	{
		wait(&state);
		free_data(order);
	}
	else
	{
		perror(argv[0]);
	}
	return (WEXITSTATUS(state));
}
