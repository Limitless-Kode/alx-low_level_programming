#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: the string to print
  *
  * Return: void
  */

void puts_half(char *str)
{
int length = 0;
int i, start;

/* find the length of the string */
while (str[length] != '\0')
length++;

/* calculate the starting index based on the string length */
if (length % 2 == 0)
start = length / 2;

else
start = (length - 1) / 2 + 1;

/* print the second half of the string */
for (i = start; i < length; i++)
_putchar(str[i]);

/* print a new line character */
_putchar('\n');
}
