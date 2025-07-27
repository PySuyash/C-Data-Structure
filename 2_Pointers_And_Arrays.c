// Correlation of pointers and arrays.

#include <stdio.h>

int main() {
    
    int arr[5] = {10, 20, 30, 40, 50};

    printf("arr[0] = %d\n", *arr);      // *arr is same as arr[0].
    printf("arr[1] = %d\n", *(arr + 1));        

    return 0;
}