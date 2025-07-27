// Function pass by reference.

#include <stdio.h>

void update(int *num) {
    *num += 10;
}

int main() {
    int number  = 10;

    printf("Original Number : %d\n", number);

    printf("After passing by referencin to function and updating value.\n");

    update(&number);

    printf("Updated value : %d\n", number);
    
    return 0;
}