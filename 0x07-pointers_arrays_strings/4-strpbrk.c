#include "main.h"

/**
  * _strpbrk - searches a string for any set of bytes.
  * @s: pointer to the string
  * @accept: pointer to a string
  *
  * Return: a pointer to the byte in s that matches one of the bytes
  * one of the bytes in accept, or NULL if no such byte is found
  */

char *_strpbrk(char *s, char *accept)
{
char *p;
while (*s)
{
for (p = accept; *p; p++)
{
if (*p == *s)
return (s);
}
s++;
}
return ((char *)0);
}

