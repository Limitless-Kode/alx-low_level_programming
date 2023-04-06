#ifndef MAIN_H
#define MAIN_H

/* prints a string followed by a new line */
void _puts_recursion(char *s);

 /* prints a character to the stdout */
int _putchar(char c);

/* prints a string in reverse */
void _print_rev_recursion(char *s);

/* returns the length of a string */
int _strlen_recursion(char *s);

/* returns the factorial of a given number */
int factorial(int n);

/* returns the value of x raised to y */
int _pow_recursion(int x, int y);

/* returns the natural square root of a number */
int _sqrt_recursion(int n);
int _sqrt_recursion_helper(int n, int low, int high);

/* returns 1 if input is a prime number else 0 */
int is_prime_number(int n);
int is_prime_helper(int n, int div);

/* checks if a string is a palindrome */
int is_palindrome(char *s);
int _strlen_recursion(char *s);
int is_palindrome_helper(char *s, int start, int end);

/* checks if two strings are identical */
int wildcmp(char *s1, char *s2);

#endif /* MAIN_H */
