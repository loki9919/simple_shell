#include "main.h"

char **term_analyzer(char *text)
{
    char **order = NULL;
    int c = 0;
    int i, n;
    char *token = strtok(text, " \n\t");

    while (token != NULL)
    {
        c++;
        token = strtok(NULL, " \n\t");
    }


    order = malloc(sizeof(char *) * (c + 1));

    if (order == NULL)
    {
        free(text);
        return NULL;
    }


    token = strtok(text, " \n\t");
    for (i = 0; i < c; i++)
    {
        order[i] = _strdup(token);
        token = strtok(NULL, " \n\t");
    }

    order[c] = NULL;
    free(text);
    printf("Number of tokens: %d\n", c);
    printf("Tokens:\n");
    for (n = 0; n <= c; n++)
    {
        printf("%d: %s\n", n, order[n]);
    }

    return order;
}

