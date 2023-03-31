#include "main.h"

/**
  * puts2 - prints every other charater of string, satrting with the first
  *         charater, followed by a new line.
  * @str: pointer to the string to be printed
  *
  * Return: void
  */

void puts2(char *str)
{
int i;
i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
