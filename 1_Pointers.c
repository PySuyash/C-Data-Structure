// Includeing the header file <stdio.h> for basic functionality.
#include <stdio.h>

// initilizing the main function.
int main() {
    // Creating an integer variable a and assigining value 10 to it.
    int a = 10;

    // Creating a pointer ptr and assigining the address of variable a using the Addressof (&) Operator.
    int *ptr = &a;

    // Printing the value of variable a using the pointer.
    printf("Value: %d\n", *ptr);

    // Prining the address of variable a using pointer.
    printf("Address: %p\n", ptr);

    // return 0 for successfull program execution.
    return 0;
}