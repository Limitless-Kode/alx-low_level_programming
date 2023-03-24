#include <stdio.h>

/**
* main - An infinite loop fixed by commenting it out.
* Description: This program shows how to comment out an infinit loop
*              to avoid infinte loop error. It aslo uses escape sequences
*              to print a message with a ne w line character
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 0;
/**
* infinite loop - commented out
* while (i < 10)
* {
* putchar(i);
* }
*/
printf("Infinite loop avoided! \\o// \n");
return (0);
}
