#include "main.h"


char *capture_text(void)
{
	char *text = NULL;
	size_t count = 0;
	ssize_t read;

	read = getline(&text, &count, stdin);
	if (read == EOF)
	{
		free (text);
		return (NULL);
	}
	return (text);
}
