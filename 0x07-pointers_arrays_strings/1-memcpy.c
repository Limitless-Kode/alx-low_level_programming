#include "main.h"

/**
  * _memcpy - copies n bytes from memory area src to memory area dest
  * @dest: pointer to destination
  * @src: pointer to source
  * @n: number of bytes from memory area src
  *
  * Return: a pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr_dest = dest;
char *ptr_src = src;
while (n--)
{
*ptr_dest++ = *ptr_src++;
}
return (dest);
}
