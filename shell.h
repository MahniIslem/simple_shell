#ifndef SHELL_H
#define SHELL_H

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdarg.h>
#include <sys/wait.h>
#include <limits.h>
#define _INT_MIN (1 << (sizeof(int) * 8 - 1))

char *pathfinder(void);
int btin_func(void);
int arraycpy(char *dest[], char *src[]);
int com_ex(void);
int arr_print(char *array[]);
char *get_environment(char *);
void arr_free(char **arr);
int _ehandchar(int file_desc, char c);
int _ehandint(int file_desc, int nm);
int _ehandstr(int file_desc, char *str);
int _eprintf(int file_desc, const char *fmt, char *s1, int n1, char *s2);
char **stoa(char *str, char dl);
int pmpt_print(char *prompt);
ssize_t get_line(char **line);
ssize_t _getchar(char c);
int Exit_st(char *st_exit);
int _atoi(const char *str);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(const char *str1, const char *str2, size_t n);
void *_calloc(unsigned int nmemb, unsigned int size);

extern char **environ;
int status;
char *line;
char **command;
int shell_index;
char *shell;

#endif /* SHELL_H */
