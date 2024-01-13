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

	while (1)
	{
		text = capture_text();
		if (text == NULL)
		{
			if (isatty(0))
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
