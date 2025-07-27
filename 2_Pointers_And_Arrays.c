// Correlation of pointers and arrays.

// Including the header file <stdio.h>
#include <stdio.h>

// Initilizing the main function.
int main() {
    // Creating an integer array of size 5.
    int arr[5] = {10, 20, 30, 40, 50};

    // Printing the first element of array.
    printf("arr[0] = %d\n", *arr);      // *arr is same as arr[0].

    // Printing the second element of array.
    printf("arr[1] = %d\n", *(arr + 1));        // Same as arr[1].

    // returning 0 for successful program execution.
    return 0;
}