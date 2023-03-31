#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int sign = 1;
int total = 0;

while (*s)
{
if (*s == '-')
{
sign *= -1;
}
else if (*s >= '0' && *s <= '9')
{
int digit = *s - '0';
if (total > (INT_MAX - digit) / 10)
{
/* Overflow detected */
if (sign == 1)
{
return (INT_MAX);
}
else
{
return (INT_MIN);
}
}
total = total * 10 + digit;
}
else if (total > 0)
{
/* We've already read some digits, so we stop here */
break;
}

s++;
}

return (total *sign);
}

