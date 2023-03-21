#include <stdio.h>

/**
  * main - Entry. Prints alphabet in lowercase and uppercase.
  *
  * Return: Always 0 (Success)
  **/
int main(void)
{
char letter = 'a';
/* Print lowercase and uppercase alphabets */
while (letter <= 'z')
{
putchar(letter);
if (letter == 'z') /* if we have printed the last lowercase letters */
{
letter = 'A'; /* start printing uppercase letters */
}
else if (letter == 'Z') /* if we have printed the last uppercase letter*/
{
break; /* exit the loop*/
}
else
{
letter++; /* move to the next lowercase letter */
}
}
putchar('\n');
return (0);
}
