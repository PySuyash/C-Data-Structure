// Modifying the array elements in function.

#include <stdio.h>

void incrementArray(int *ptr, int size) {
    for (int i=0; i<size; i++) {
        ptr[i] += 1;    // Increments each avlue by 1.
    }
}

int main() {

    int nums[] = {10, 20, 30, 40};

    incrementArray(nums, 4);    // Passing the arrays to the function.

    for (int i=0; i<4; i++) {
        printf("%d\n", nums[i]);
    }

    return 0;
}