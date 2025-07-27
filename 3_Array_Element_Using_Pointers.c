// Accessing array elements using pointers.

#include <stdio.h>

int main() {

    int arr[3] = {1,2,3};
    int *ptr = arr;

    for (int i=0; i<3; i++) {
        printf("\nValue of arr[%d] : %d", i, *(arr+i));
        printf("\nAddress of arr[%d] : %p", i, (ptr + i));
    }

    return 0;
}