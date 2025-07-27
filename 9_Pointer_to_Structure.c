// Pointer to Structure.

#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student s1 = {3454, 87.98};
    struct Student *ptr = &s1;  // Assining address of structure student to pointer.

    printf("Student ID : %d\n", ptr->id);   // Using dangling pointer to accessing elements.
    printf("Student marks : %.2f\n", ptr->marks);

    return 0;
}