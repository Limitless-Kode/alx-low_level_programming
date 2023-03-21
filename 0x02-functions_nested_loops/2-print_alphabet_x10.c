#include "main.h"

/**
  * print_alphabet_x10 - prints the alphabet in lowercase 10 times
  * Loops through the lowercase alphabet 10 times and prints it to the console
  * Followed by a new line. It uses _putchar
  */

void print_alphabet_x10(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
