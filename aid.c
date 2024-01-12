#include "main.h"

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
