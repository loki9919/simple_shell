#include "main.h"

void free_data(char **data)
{
	int n = 0;
	if (!data)
	{
		return;
	}
	while (data[n] != NULL)
	{
		free(data[n]);
		data[n] = NULL;
		n++;
	}
	free(data);
}
