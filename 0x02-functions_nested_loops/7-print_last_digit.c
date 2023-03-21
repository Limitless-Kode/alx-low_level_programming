#include "main.h"
/**
  * print_last_digit - Calculates the last digit of a given integer
  *                    and prints it to the console
  *
  * @n: The interger to calculate the last digit of
  *
  * Return: The value of the last digit
  */


int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
if (last_digit < 0)
last_digit *= -1;
_putchar(last_digit + '0');
return (last_digit);
}
