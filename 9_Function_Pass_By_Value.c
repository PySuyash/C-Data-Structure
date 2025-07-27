// Function pass by value.

#include <stdio.h>

void update(int x) {
    x += 10;
    printf("Inside function : %d\n", x);
}

int main() {

    int a = 10;

    update(a);

    printf("Outside function : %d\n", a);
    return 0;
}