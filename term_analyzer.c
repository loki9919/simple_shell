#include "main.h"

char **term_analyzer(char *text)
{
	char *term = NULL;
	char *temp = NULL;
	char **order = NULL;
	int c, c1;

	if (text == NULL)
	{
		return (NULL);
	}
	temp = _strdup(text);
	term = strtok(temp, " \n\t");
	if (term == NULL)
	{
		free(temp);
		free(text);
		return (NULL);
	}
	for (c = 0; term != NULL; c++)
	{
		term = strtok(NULL, " \n\t");
	}
	free(temp);
	order = malloc(sizeof(char *) * (c +1));
	term = strtok(text, " \n\t");
	for (c1 = 0; term != NULL; c1++)
	{
		order[c1] = _strdup(term);
		term = strtok(NULL, " \n\t");
	}
	order[c1] = NULL;
	free(text);
	return (order);
}
