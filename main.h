#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

char **term_analyzer(char *text);
void free_data(char **data);
int exec(char **order, char **con, char **argv);
char *capture_text(void);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int _strlen_recursion(char *s);
char *_strcpy(char *dest, char *src);

#endif
