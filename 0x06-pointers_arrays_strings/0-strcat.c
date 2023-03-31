#include "main.h"

/**
  * *_strcat - concatenates two strings
  *
  * @dest: pointer to string 1
  * @src: pointer to string 2
  *
  * Return: pointer to the resulting string
  */

char *_strcat(char *dest, char *src)
{
char *result = dest;

while (*dest != '\0')
dest++;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (result);
}


