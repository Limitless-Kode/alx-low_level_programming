#include "main.h"

/**
  * wildcmp - compares two strings and returns 1 if they can be
  *           considered identical,and 0 otherwise
  *
  * @s1: first string to compare
  * @s2: second string to compare
  *
  * Return: 1 if string can be considered identical, 0 otherwise
  */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (!*s1)
return (wildcmp(s1, s2 + 1));
else if (*s1 && *(s2 + 1))
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
else
return (wildcmp(s1 + 1, s2));
}
else if (*s1 == *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
