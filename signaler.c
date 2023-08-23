#include "main.h"

/**
  * handler - signal handler
  *
  * @sig_id: The signal
  *
  * Return: Nothing
  */
void signal_handler(int sig_id)
{
if (sig_id == SIGINT)
{
write(STDOUT_FILENO, "\n($) ", 5);
}
}