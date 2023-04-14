#include "main.h"
#include <stdlib.h>
/**
 * _isdigit - Checks if a character is a digit (0-9)
 *
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(char c)
{
return (c >= '0' && c <= '9');
}

/**
 * _atoi - Converts a string to an integer
 *
 * @s: The string to be converted
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
int sign = 1, value = 0;
if (*s == '-')
sign = -1, s++;
while (*s)
{
if (!_isdigit(*s))
return (-1);
value = value * 10 + (*s - '0');
s++;
}
return (value *sign);
}

/**
 * print_number - Prints an integer
 *
 * @n: The integer to be printed
 */
void print_number(int n)
{
char c;
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
print_number(n / 10);
c = (n % 10) + '0';
_putchar(c);
}

/**
 * mul - Multiplies two positive numbers
 *
 * @num1: The first number
 * @num2: The second number
 */
void mul(char *num1, char *num2)
{
int len1 = 0, len2 = 0, i, j, carry = 0;
int *result;
while (num1[len1])
len1++;
while (num2[len2])
len2++;
result = malloc((len1 + len2) *sizeof(int));
if (!result)
exit(98);
for (i = 0; i < len1 + len2; i++)
result[i] = 0;
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0') + carry;
carry = result[i + j + 1] / 10;
result[i + j + 1] %= 10;
}
result[i + j + 1] += carry;
}
i = 0;
while (i < len1 + len2 && result[i] == 0)
i++;
if (i == len1 + len2)
_putchar('0');
else
{
for (; i < len1 + len2; i++)
print_number(result[i]);
}
_putchar('\n');
free(result);
}

/**
 * main - Entry point
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
if (argc != 3 || _atoi(argv[1]) == -1 || _atoi(argv[2]) == -1)
{
mul(argv[1], argv[2]);
return (98);
}

mul(argv[1], argv[2]);

return (0);
}

