#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
int i, j;
char leet_map[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'},
{'t', 'T'}, {'l', 'L'}};

char leet_encode[5] = {'4', '3', '0', '7', '1'};

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (str[i] == leet_map[j][0] || str[i] == leet_map[j][1])
{
str[i] = leet_encode[j];
break;
}
}
}

return (str);
}






