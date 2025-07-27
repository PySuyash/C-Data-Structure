// Functio pass by value.

#include <stdio.h>

void update(int x) {
    x += 10;
    printf("Value of a inside function : %d\n", x);
};

int main() {

    int a = 10;

    update(a);

    printf("Value of a outside function : %d\n", a);

    return 0;
}