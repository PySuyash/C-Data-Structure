// Function passing pointer to structure.

#include <stdio.h>

struct Student {
    int ID;
};

void display(struct Student *s) {
    printf("Student's ID : %d\n", s->ID);
}

int main() {

    struct Student s = {4536};
    display(&s);
    
    return 0;
}