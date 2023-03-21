#include <stdio.h>

/**
  * main - Entry point. Prints all single digit numbers of base 10 from 0.
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
int i;
/* Loop through numbers 0 t0 9 and print each one */
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
/* Print a new line character */
putchar('\n');
return (0);
}
