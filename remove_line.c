#include "main.h"

/**
  * remove_line - Removes newline
  *
  * @str: The string
  *
  * Return: The string
  */
char *remove_line(char *str)
{
int i = 0;
while (str[i])
{
if (str[i] == '\n')
{
str[i] = '\0';
}
i++;
}
return (str);
}
