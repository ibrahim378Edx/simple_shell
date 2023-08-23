#include "main.h"

/**
  * free_env - free enviroment variables
  *
  * @env_path: The variable to frees
  *
  * Return: Nothing
  */
void free_env(char *env_path)
{
int i;

for (i = 4; i >= 0; i--)
{
env_path--;
}
free(env_path);
}

/**
  * free_t - free tokens
  *
  * @tokns: tokens to free
  *
  * Return: Nothing to returns
  */
void free_t(char **tokns)
{
char **temp = tokns;

if (tokns)
{
while (*tokns)
{
free(*tokns++);
}
free(temp);
}
}
