#include <stdio.h>

/**
  * main - Entry point. Prints all multiples of 3 and 5 below 1024.
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
int i;
int sum = 0;
for (i = 1; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
