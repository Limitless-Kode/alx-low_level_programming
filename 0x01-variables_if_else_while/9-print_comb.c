#include <stdio.h>

/**
  * main - Entry point. Prints all combinations of single-digit numbers.
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0'); /* print the current number */
if (i != 9) /* if it's not the last number*/
{
putchar(','); /* print a comma*/
putchar(' '); /* print a space */
}
}
putchar('\n'); /* print a newline*/
return (0);
}
