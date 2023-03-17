#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int i;

for (i = 0; str[i] != '\0'; i++)
{
write(2, &str[i], 1);
}
return (1);
}
