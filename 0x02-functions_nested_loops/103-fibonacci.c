#include "main.h"

/**
  * sum_even_fibonacci - Calculates the sum of
  *           even-valued terms in the Fib to limit.
  *
  * @limit: The maximum value for Fibonacci to consider.
  * Return: The sum of even-valued terms in the Fibonacci up to the limit.
  */

int sum_even_fibonacci(int limit)
{
int sum = 0;
int prev_fib = 1;
int curr_fib = 2;
int next_fib;
while (curr_fib <= limit)
{
if (curr_fib % 2 == 0)
{
sum += curr_fib;
}
next_fib = prev_fib + curr_fib;
prev_fib = curr_fib;
curr_fib = next_fib;
}
return (sum);
}
