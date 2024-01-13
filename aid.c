#include "main.h"

/**
 * free_data - frees the memory allocated for an array of strings.
 * @str: an array of strings to be freed.
 */
void free_data(char **str)
{
	int n = 0;

	if (!str)
	{
		return;
	}
	while (str[n] != NULL)
	{
		free(str[n]);
		str[n] = NULL;
		n++;
	}
	free(str);
}
