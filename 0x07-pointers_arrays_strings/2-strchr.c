#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: pointer to the string
  * @c: character to be located
  *
  * Return: A pointer to the first occurence of the character c
  * in the string or NULL if the character is not found
  */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return ((char *)0);
}
