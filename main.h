#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>

extern char **environ;

char *_strcat(char *dest, char *src);
int _strlen(const char *s);
int _strcmp(char *s1, char *s2);
int _strncmp(const char *s1, const char *s2, size_t len);
char *_strdup(char *str);
int _atoi(char *s);
int _putchar(char c);
void _puts(char *str);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int counter(char *str);
int checker(char *str, char *del);
char *remove_line(char *str);
void signal_handler(int sig_id);
void helper(void);
void printer(void);
void exiter(char **u_tokns, char *line);
int commands(char **u_tokns, char *line);
void free_env(char *env_path);
void free_t(char **tokns);
int executer(char *cname, char **opts);
char *getenver(const char *name);
char **tk(char *str, char *del, int len);
char *find(char *cname);

#endif