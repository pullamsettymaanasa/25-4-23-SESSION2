#include <stdio.h>

#define MAX_STUDENTS 50 

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int i, n;
    struct Student s[MAX_STUDENTS];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    
    printf("\nStudent Information:\n");
    for (i = 0; i < n; i++) {
        printf("Roll No: %d\n", s[i].rollNo);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
        printf("\n");
    }

    return 0;
}
