#include <stdio.h>

/**
  * main - Entry point. Prints lowercase alphabets in reverse
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
int letter;
/* Start with the letter 'z' and decrement until 'a' */
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
