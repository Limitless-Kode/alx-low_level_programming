/**
 * main - entry point
 *
 * Description: Prints the numbers from 1 to 100, replacing multiples of three
 *              with Fizz, multiples of five with Buzz, and multiples of both
 *              with FizzBuzz.
 *              Each number or word is separated by a space.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
        int i;

        for (i = 1; i <= 100; i++)
        {
                if (i % 3 == 0 && i % 5 == 0)
                {
                        printf("FizzBuzz ");
                }
                else if (i % 3 == 0)
                {
                        printf("Fizz ");
                }
                else if (i % 5 == 0)
                {
                        printf("Buzz ");
                }
                else
                {
                        printf("%d ", i);
                }
        }
        printf("\n");

        return (0);
}
