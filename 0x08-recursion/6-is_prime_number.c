#include "main.h"

/**
  * is_prime_number - checks if a number is prime(divisible by 1 and itself)
  * @n: the number to checks
  *
  * Return: 1 if the number is prime, 0 otherwise
  */

int is_prime_number(int n)
{
if (n <= 1)
return (0);

return (is_prime_helper(n, 2));
}

/**
  * is_prime_helper - helper fucntion to check if a number is prime
  * @n: the number to check
  * @div: the current divisor being tested
  *
  * Return: 1 if the number is prime, 0 otherwise
  */
int is_prime_helper(int n, int div)
{
if (n % div == 0)
return (0);

if (div > n / 2)
return (1);
return (is_prime_helper(n, div + 1));
}

