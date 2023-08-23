#include "main.h"

/**
  * tk - checks for the token
  *
  * @str: The string
  *
  * @del: The delimiter
  *
  * @len: Tokens number
  *
  * Return: An array of tokens of the string
  */
char **tk(char *str, char *del, int len)
{
char **tks = NULL, *t1 = NULL, *temp = NULL;
int i = 0;

tks = malloc(sizeof(char *) * (len + 1));
if (!tks)
{
return (NULL);
}
str = remove_line(str);
temp = _strdup(str);
t1 = strtok(temp, del);

while (t1)
{
tks[i] = _strdup(t1);
t1 = strtok(NULL, del);
i++;
}

tks[i] = NULL;
free(temp);
return (tks);
}
