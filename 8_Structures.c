// Structures.

#include <stdio.h>

// Creating a structure of name Student and two variables id and marks.
struct Student {
    int id;
    float marks;
};

int main() {

    // Creating an object of type student and assining values to its variables.
    struct Student s1 = {2453, 96.8};
    struct Student *ptr = &s1; // Storing the address of student ot pointer.

    printf("ID of Student : %d\n", ptr -> id); // Accessing id using the dangling(->) pointer.
    printf("Marks of Student : %.1f\n", ptr -> marks);

    return 0;
}