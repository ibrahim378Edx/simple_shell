#include "main.h"

/**
  * printer - Prints the environment
  *
  * Return: Nothing
  */
void printer(void)
{
int i = 0, j = 0;
while (environ[i])
{
j = 0;
while (environ[i][j])
{
_putchar(environ[i][j]);
j++;
}

if (j != 0)
{
_putchar('\n');
}
i++;
}
}
