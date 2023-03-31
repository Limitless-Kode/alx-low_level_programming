#include "main.h"

/**
 * infinite_add - Adds two numbers.
 *
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int len1 = 0, len2 = 0, i = 0, j = 0, sum = 0, carry = 0;

        /* Find lengths of n1 and n2 */
        while (n1[len1] != '\0')
                len1++;
        while (n2[len2] != '\0')
                len2++;

        /* Check if the result can be stored in r */
        if (len1 + 1 > size_r || len2 + 1 > size_r)
                return (0);

        /* Add digits from right to left */
        for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
        {
                sum = carry;
                if (i >= 0)
                        sum += n1[i] - '0';
                if (j >= 0)
                        sum += n2[j] - '0';
                if (sum > 9)
                {
                        carry = 1;
                        sum -= 10;
                }
                else
                {
                        carry = 0;
                }
                r[len1 + len2 - (i + j + 2)] = sum + '0';
        }

        /* Add null terminator */
        r[len1 + len2 - (i + j + 2)] = '\0';

        /* Reverse result */
        for (i = 0, j = len1 + len2 - 2; i < j; i++, j--)
        {
                char tmp = r[i];
                r[i] = r[j];
                r[j] = tmp;
        }

        return (r);
}
