#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints all natural numbers from n to 98, and a new line
  * @n: starting number
  *
  * Return: void
  */


void print_to_98(int n)
{
int i;
for (i = n; i != 98; i < 98 ? i++ : i--)
{
printf("%d, ", i);
}
printf("%d\n", 98);
}
