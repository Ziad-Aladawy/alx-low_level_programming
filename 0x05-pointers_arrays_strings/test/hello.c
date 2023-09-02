#include<stdio.h>
#include<stdlib.h>

/**
 * main - description
 *
 * Return: returns 0 (success)
 */

int *bar() {
    int nb = 3;
    return &nb;
}
int *foo() {
    int *n = malloc(sizeof(int));
	*n = 42;
    return n;
}
int main() {
    int *ptr = foo();
    printf("value foo: %d", *ptr);
    return 0;
}

