#include <stdio.h>

/**
  * main - Entry point. Prints all lowercase alphabets except q qnd e.
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
