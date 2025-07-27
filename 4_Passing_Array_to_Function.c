// Passing array to function using pointers.

#include <stdio.h>

void printArray(int *arr, int size) {
    for (int i=0; i<size; i++) {
        printf("%d\t", *(arr + 1));
    }
}

int main() {

    int nums[] = {10, 20, 30, 40};
    printArray(nums, 4);    // Passing array address of first element to functiuons.

    return 0;
}