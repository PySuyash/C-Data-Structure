// Returning the value from a function.

#include <stdio.h>

int square(int number) {
    return number * number;
}

int main() {
    int num = 2;

    printf("The square of 2 is : %d\n", square(num));

    return 0;
}