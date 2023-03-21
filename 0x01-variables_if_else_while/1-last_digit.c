#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point. Generates a random number and prints it last digit.
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
int n, last_digit;
/* Generate a random number */
srand(time(0));
n = rand() - RAND_MAX / 2;

/* Get the last digit */
last_digit = n % 10;

/* Print the last digit */
printf("Last digit of %d is %d and is ", n, last_digit);
if (last_digit > 5)
printf("greater than 5\n");
else if (last_digit == 0)
printf("0\n");
else
printf("less than 6 and not 0\n");
return (0);
}
