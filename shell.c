#include "main.h"

/**
 *
 */
int main(int argc, char **argv, char **con)
{
	char *text =NULL;
	char **order = NULL;
	int status = 0;
	(void)argc;

	while (true)
	{
		if (isatty(STDIN_FILENO))
			write(1, "$ ", 2);
		text = capture_text();
		if (text == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(1, "\n", 1);
			return (status);
		}
		order = term_analyzer(text);
		if (!order)
		{
			continue;
		}

		status = exec(order, argv, con);
	}
}
