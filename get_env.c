#include "main.h"

/**
  * getenver - Gets an environment variable
  *
  * @name: variable to look for
  *
  * Return: returns value of variable
  */
char *getenver(const char *name)
{
int i = 0;
char *variable = NULL;

while (environ[i])
{
if (_strncmp(name, environ[i], _strlen(name)) == 0)
{
variable = _strdup(environ[i]);
while (*variable != '=')
variable++;

++variable;
return (variable);
}
i++;
}

return (NULL);
}
