#include "main.h"

/**
 * capture_text - captures a line of text from the standard input.
 * Return: A pointer to the captured text or NULL allocation failure.
 */
char *capture_text(void)
{
	char *text = NULL;
	size_t count = 0;
	ssize_t read;

	read = getline(&text, &count, stdin);
	if (read == EOF)
	{
		free(text);
		return (NULL);
	}
	return (text);
}
