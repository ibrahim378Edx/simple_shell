#include "main.h"

/**
  * main - main caller function
  *
  * Return: 0
  */
int main(void)
{
char *line = NULL, **u_tokns = NULL;
int w_len = 0, execFlag = 0;
size_t line_size = 0;
ssize_t line_len = 0;
while (line_len >= 0)
{
signal(SIGINT, signal_handler);
if (isatty(STDIN_FILENO))
{
write(STDOUT_FILENO, "($) ", 4);
}
line_len = getline(&line, &line_size, stdin);
if (line_len == -1)
{
if (isatty(STDIN_FILENO))
{
write(STDOUT_FILENO, "\n", 1);
}
break;
}
w_len = counter(line);
if (line[0] != '\n' && w_len > 0)
{
u_tokns = tk(line, " \t", w_len);
execFlag = commands(u_tokns, line);
if (!execFlag)
{
u_tokns[0] = find(u_tokns[0]);
if (u_tokns[0] && access(u_tokns[0], X_OK) == 0)
{
executer(u_tokns[0], u_tokns);
}
else
{
perror("./hsh");
}
}
free_t(u_tokns);
}
}
free(line);
return (0);
}