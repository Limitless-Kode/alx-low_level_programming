#include "main.h"

/**
  * _strlen_recursion - returns the length of a string
  * @s: pointer to the string to measure
  *
  * Return: the length of the string
  */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
  * is_palindrome_helper - helps check is a word is a palindrome recursively
  *
  * @s: string to check
  * @start: start index
  * @end: end index
  * Return: 1 if the string is a palindrome, 0 otherwise
  */

int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] != s[end])
return (0);

return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
  * is_palindrome - checks if a string is a palindrome
  *
  * @s: string to check
  * Return: 1 if the string is a palindrome, 0 otherwise
  */
int is_palindrome(char *s)
{
int len;
len = _strlen_recursion(s);
if (len <= 1)
return (1);
return (is_palindrome_helper(s, 0, len - 1));
}
