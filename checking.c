#include "main.h"

/**
  * count_input - Counts the user input
  *
  * @str: the string
  *
  * Return: number of words
  */
int counter(char *str)
{
int i = 0, z = 0, state = 0;

while (str[i])
{
if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
{
state = 0;
}
else if (state == 0)
{
state = 1;
z++;
}
i++;
}
return (z);
}

/**
  * checker - counts delimiters
  *
  * @str: The string
  *
  * @del: The delimiters to check for
  *
  * Return: amount of delimiters
  */
int checker(char *str, char *del)
{
int i = 0, j = 0, z = 0;

while (del[i])
{
j = 0;
while (str[j])
{
if (str[j] == del[i])
{
z++;
}
j++;
}
i++;
}

return (z);
}
