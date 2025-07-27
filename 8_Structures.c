// structures.

#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student s1 = {2453, 65.87};

    printf("Id of student : %d\n", s1.id);
    printf("Marks of student : %.2f\n", s1.marks);
    
    return 0;
}