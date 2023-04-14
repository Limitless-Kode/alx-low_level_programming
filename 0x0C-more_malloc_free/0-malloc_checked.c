#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc
  *
  * @b: represents the number of bytes allocated
  *
  * Return: a pointer to allocated memory
  */

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (!p)
{
exit(98);
}
return (p);
}
