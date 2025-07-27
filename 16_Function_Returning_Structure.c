// function returning structure.

#include <stdio.h>

struct Student {
    int ID;
};

struct Student createID(int ID) {
    struct Student s;
    s.ID = ID;
    return s;
}

int main() {

    struct Student s1 = createID(1276);

    printf("Returned ID : %d\n", s1.ID);
    
    return 0;
}