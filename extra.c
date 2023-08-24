#include "main.h"

/**
 * _putchar - writes the characters
 *
 * @c: The character to print
 *
 * Return: On success 1 or -1 on fail
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}


/**
  * _puts - Prints a string
  *
  * @str: The string to print
  *
  * Return: Nothing
  */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
}

/**
  * _strncmp - Compares at most the first n bytes of str1 and str2
  *
  * @s1: The first string
  *
  * @s2: The second string
  *
  * @len: The limit bytes of comparison
  *
  * Return: value depands on comparsion
  */
int _strncmp(const char *s1, const char *s2, size_t len)
{
unsigned int z = 0;
int w = 0;
while (z < len)
{
if (s1[z] == s2[z])
{
z++;
continue;
}
else
{
w = s1[z] - s2[z];
break;
}
z++;
}
return (w);
}

/**
  * _realloc - Resize the ptr that was previously allocated
  *
  * @ptr: The pointer previously allocated
  *
  * @old_size: The old size of the pointer
  *
  * @new_size: The new size of the new pointer
  *
  * Return: A new pointer to the new memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *q;
unsigned int i;

if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
q = malloc(new_size);

if (q == NULL)
{
return (NULL);
}
return (q);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}
q = malloc(new_size);
if (q == NULL)
{
return (NULL);
}
for (i = 0; i < old_size && i < new_size; i++)
{
q[i] = ((char *) ptr)[i];
}
free(ptr);
return (q);
}
