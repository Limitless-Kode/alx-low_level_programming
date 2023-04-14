#include <stdlib.h>
#include <string.h>

/**
  * _realloc - reallocates memory block using malloc and free
  * @ptr: a pointer to the memory previously allocated
  * @old_size: size in bytes of the allocated space
  * @new_size: the new size in bytes of the new memory block
  *
  * Return: the new size of the memory block
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

/* If new size is equal to old size, do nothing and return ptr */
if (new_size == old_size)
return (ptr);

/* If ptr is NULL, then the call is equivalent to malloc(new_size) */
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
else
return (new_ptr);
}

/* If new_size is equal to zero, and ptr is not NULL, free ptr */
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

/* Allocate new block of memory */
new_ptr = malloc(new_size);

/* If malloc fails, return NULL */
if (new_ptr == NULL)
return (NULL);

/* Copy contents from old block to new block */
memcpy(new_ptr, ptr, (old_size < new_size ? old_size : new_size));

/* Free the old block of memory */
free(ptr);

/* Return the new block of memory */
return (new_ptr);
}

