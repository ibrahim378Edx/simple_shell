#include "main.h"

/**
  * exiter - handles exit
  *
  * @toki: input
  *
  * @line: line to check
  *
  * Return: Nothing
  */
void exiter(char **toki, char *line)
{
int status = 0;
if (toki[1] == NULL || (!_strcmp(toki[1], "0")))
{
free_t(toki);
free(line);
exit(0);
}
status = _atoi(toki[1]);
if (status != 0)
{
free_t(toki);
free(line);
exit(status);
}
else
{
_puts("exit: Illegal number: ");
_puts(toki[1]);
_puts("\n");
exit(2);
}

free_t(toki);
free(line);
exit(EXIT_SUCCESS);
}
