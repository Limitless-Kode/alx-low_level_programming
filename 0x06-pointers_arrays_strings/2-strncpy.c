#include "main.h"

/**
 * _strncpy - copies up to n characters from the string pointed to by src,
 * including the terminating null byte, to the buffer pointed to by dest.
 * If the length of src is less than n, the remaining characters are
 * filled with null bytes until a total of n characters have been written.
 *
 * @dest: destination buffer
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';

return (dest);
}

