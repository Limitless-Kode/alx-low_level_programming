#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the 101-crackme program.
 *
 * Return: Always 0.
 */
int main(void)
{
char password[84];
int i, sum = 0, diff_half1, diff_half2;
srand(time(NULL));
char command[100];

/* Generate random characters for password */
for (i = 0; i < (int)sizeof(password) - 1; i++)
{
password[i] = rand() % 94 + 33;
}
password[i] = '\0';

/* Calculate sum of all characters in password */
for (i = 0; password[i] != '\0'; i++)
{
sum += password[i];
}

/* Calculate differences between adjacent characters */
diff_half1 = sum / 2;
diff_half2 = diff_half1 - password[0];
for (i = 0; password[i] != '\0'; i++)
{
password[i] = (diff_half2 + password[i] <= 126) ? diff_half2 + password[i] : diff_half2 + password[i] - 94;
diff_half2 = sum - diff_half2 - password[i];
}

/* Print password */
printf("%s\n", password);

/* Test the password with the 101-crackme program */
do {
printf("Testing password: %s\n", password);
char command[100];
sprintf(command, "./101-crackme \"%s\"", password);
} while (system(command) == 0);

return (0);
}

