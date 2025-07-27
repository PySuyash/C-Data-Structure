// Function returning pointer to structure.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    int ID;
};

struct Student * createStudent(int id) {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    s->ID = id;
    return s;
}

int main() {
    struct Student * s1 = createStudent(103);
    printf("Returned ID : %d\n", s1->ID);
    free(s1);
    return 0;
}