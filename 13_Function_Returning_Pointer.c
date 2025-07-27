// function returning pointers.

#include <stdio.h>

int* getpointer(int *p) {
    return p;
}

int main() {

    int a = 10;
    int *p = getpointer(&a);
    printf("Value from pointer: %d\n", *p);

    return 0;
}