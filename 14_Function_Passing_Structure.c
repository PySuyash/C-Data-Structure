// Function passing structure.

#include <stdio.h>

struct Student {
    int ID;
};

void display(struct Student s) {
    printf("Student Id: %d\n", s.ID);
}

int main() {
    struct Student s = {1874};
    display(s);
    return 0;
}