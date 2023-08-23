#include "main.h"

/**
  * _strcat - Concatenates strings
  *
  * @dest: The destination to copy to
  *
  * @src: The source
  *
  * Return: A pointer to the new string
  */
char *_strcat(char *dest, char *src)
{
int l = 0, i = 0;
while (dest[l])
{
l++;
}
for (i = 0; src[i] != '\0'; i++)
{
dest[l] = src[i];
l++;
}

dest[l] = '\0';
return (dest);
}

/**
  * _strlen - calc string length
  *
  * @s: The string
  *
  * Return: The length
  */
int _strlen(const char *s)
{
int i = 0;
while (s[i])
{
i++;
}
return (i);
}

/**
  * _strcmp - Compares two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
int l1 = 0, l2 = 0, z = 0, diff = 0, l = 0;

l1 = _strlen(s1);
l2 = _strlen(s2);

if (l1 <= l2)
{
l = l1;
}
else
{
l = l2;
}
while (z <= l)
{
if (s1[z] == s2[z])
{
z++;
continue;
}
else
{
diff = s1[z] - s2[z];
break;
}
z++;
}
return (diff);
}

/**
  * _strdup - Dup a string
  *
  * @str: the string
  *
  * Return: new string
  */
char *_strdup(char *str)
{
int i = 0, len = 1;
char *newstr;

if (str == NULL)
{
return (NULL);
}
len = _strlen(str);
newstr = malloc((sizeof(char) * len) +1);
if (newstr == NULL)
{
return (NULL);
}
while (i < len)
{
newstr[i] = str[i];
i++;
}

newstr[i] = '\0';
return (newstr);
}

/**
  * _atoi - string to number.
  *
  * @s: the string
  *
  * Return: int number
  */
int _atoi(char *s)
{
int min = 1, w = 0, z = 0;
unsigned int ni = 0;

while (s[z])
{
if (s[z] == '-')
{
min *= -1;
}
while (s[z] >= '0' && s[z] <= '9')
{
w = 1;
ni = (ni * 10) + (s[z] - '0');
z++;
}

if (w == 1)
{
break;
}
z++;
}

ni *= min;
return (ni);
}
