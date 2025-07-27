// Passing double pointers to function.

#include <stdio.h>

void modifyValue(int **ptr) {
    **ptr += 1;
}

int main() {

    int a = 10;
    int *ptr = &a;

    printf("Old value of a : %d\n", a);

    modifyValue(&ptr);      // Passing the address of pointer to the function.

    printf("Modified value of a : %d\n", a);

    return 0;
}