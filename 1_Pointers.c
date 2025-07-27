// Pointers in c.

#include <stdio.h>

int main() {
    
    int a = 10;    
    int *ptr = &a;

    printf("Value: %d\n", *ptr);  // *ptr is used to access the value at address stored in pointer.  
    printf("Address: %p\n", ptr);

    return 0;
}