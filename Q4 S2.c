#include <stdio.h>

struct student {
    char name[50];
    int rollno;
    float marks[5];
};

int main() {
    struct student s;
    float total = 0, percentage;
    int i;

    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", s.name);
    printf("Roll no: ");
    scanf("%d", &s.rollno);
    printf("Enter marks in 5 subjects: ");
    for (i = 0; i < 5; i++) {
        scanf("%f", &s.marks[i]);
        total += s.marks[i];
    }

    percentage = (total / 500) * 100;

    printf("\nTotal marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
