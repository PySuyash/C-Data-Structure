// Double Pointers (Pointer to Pointer).

#include <stdio.h>

int main() {

    int x = 5;
    int *p = &x;    // Storing the address of x to pointer p.
    int **pp = &p;  // Storing the address of pointer p to another pointer pp.

    printf("Value of x : %d\n", x);
    printf("Value of x using *p : %d\n", *p);
    printf("Value of x using **pp : %d\n", **pp);

    printf("Address of x using *p : %p\n", p);
    printf("Address of pointer p : %p\n", pp);

    return 0;
}