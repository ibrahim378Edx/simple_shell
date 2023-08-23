#include "main.h"

/**
 * commands - pushs commands
 *
 * @u_tokns: userinput
 *
 * @line: line to check from
 *
 * Return: 1 if exists 0 if not
 */
int commands(char **u_tokns, char *line)
{
int i = 0;
char *Func[] = { "exit", "cd", "help", "env", NULL };

while (Func[i])
{
if (_strcmp(u_tokns[0], Func[i]) == 0)
{
switch (i)
{
case 0:
exiter(u_tokns, line);
break;
case 1:
chdir(u_tokns[1]);
return (1);
case 2:
helper();
return (1);
case 3:
printer();
return (1);
default:
break;
}
}
i++;
}
return (0);
}
