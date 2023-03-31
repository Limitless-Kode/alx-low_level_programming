#include "main.h"

/**
 * infinite_add - Adds two numbers.
 *
 * @n1: First number.
 * @n2: Second number.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer.
 *
 * Return: Pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1, len2, len, carry, i, j, k;

    /* Get length of n1 */
    for (len1 = 0; n1[len1] != '\0'; len1++)
        ;
    /* Get length of n2 */
    for (len2 = 0; n2[len2] != '\0'; len2++)
        ;

    /* Determine length of result */
    len = len1 > len2 ? len1 + 1 : len2 + 1;

    /* Check if result fits in buffer */
    if (len > size_r)
        return (0);

    /* Add numbers digit by digit */
    for (i = len1 - 1, j = len2 - 1, k = len - 1, carry = 0; k >= 0; i--, j--, k--)
    {
        int digit1 = i >= 0 ? n1[i] - '0' : 0;
        int digit2 = j >= 0 ? n2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;

        r[k] = sum % 10 + '0';
        carry = sum / 10;
    }

    /* Remove leading zeros */
    for (i = 0; r[i] == '0' && i < len - 1; i++)
        ;

    /* Shift result left if necessary */
    if (i > 0)
    {
        len -= i;
        for (j = 0; j < len; j++)
            r[j] = r[j + i];
    }

    /* Add null terminator */
    r[len] = '\0';

    return (r);
}
