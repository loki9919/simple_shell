#include "main.h"


char *capture_text(void)
{
	char *text = NULL;
	size_t count = 0;
	ssize_t read;
	if (isatty(0))
		write(1, "$ ", 2);
	read = getline(&text, &count, stdin);
	if (read == EOF)
	{
		free (text);
		return (NULL);
	}
	return (text);
}
