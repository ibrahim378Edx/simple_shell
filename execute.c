#include "main.h"

/**
  * pathcheck - Concatenate a path name and a program name
  *
  * @pathname: The path name to concatenate with the program name
  *
  * @progname: The program name to place in the path name
  *
  * Return: The path name concatenated with the program name
  */
char *pathcheck(char *pathname, char *progname)
{
int progl = 0, pathl = 0, newSize = 0;

progl = _strlen(progname);
pathl = _strlen(pathname);
newSize = sizeof(char) * (pathl + progl + 2);
pathname = _realloc(pathname, (pathl + 1), newSize);
if (!pathname)
{
return (NULL);
}
_strcat(pathname, "/");
_strcat(pathname, progname);

return (pathname);
}

/**
  * find - looks for the command
  *
  * @cname: The command to check for
  *
  * Return: path to command or null on fail
  */
char *find(char *cname)
{
char *env_path = NULL, **p_tokns = NULL;
int i = 0, num_del = 0;
struct stat sb;

if (cname)
{
if (stat(cname, &sb) != 0 && cname[0] != '/')
{
env_path = getenv("PATH");
num_del = checker(env_path, ":") + 1;
p_tokns = tk(env_path, ":", num_del);

while (p_tokns[i])
{
p_tokns[i] = pathcheck(p_tokns[i], cname);

if (stat(p_tokns[i], &sb) == 0)
{
free(cname);
cname = _strdup(p_tokns[i]);
free_env(env_path);
free_t(p_tokns);
return (cname);
}

i++;
}

free_env(env_path);
free_t(p_tokns);
}

if (stat(cname, &sb) == 0)
{
return (cname);
}	
}

free(cname);
return (NULL);
}

/**
  * exec - Executes a command
  *
  * @cname: The command to execute
  *
  * @opts: The options or flags to the command
  *
  * Return: A integer status value
  */
int executer(char *cname, char **opts)
{
pid_t child;
int status;

switch (child = fork())
{
case -1:
perror("fork failed");
return (-1);
case 0:
execve(cname, opts, environ);
break;
default:
do {
waitpid(child, &status, WUNTRACED);
} while (WIFEXITED(status) == 0 && WIFSIGNALED(status) == 0);
}

return (0);
}