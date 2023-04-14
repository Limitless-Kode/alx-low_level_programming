#ifndef MAIN_H
#define MAIN_H

/* allocates memory using malloc */
void *malloc_checked(unsigned int b);

/* concats two strings */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* allocates memory for an array using malloc  */
void *_calloc(unsigned int nmemb, unsigned int size);

/* creates an array of integers */
int *array_range(int min, int max);

/* reallocates memory block using malloc and free */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);


/* multiplies two positive numbers */
int _isdigit(char c);
int _atoi(char *s);
void print_number(int n);
void mul(char *num1, char *num2);
int _putchar(char c);
int main(int argc, char *argv[]);


#endif /* MAIN_H */
