#include <stdio.h>

struct Subject {
    char title[100];
    char author[100];
    int subjectID;
};

void printSubjectDetails(struct Subject subject) {
    printf("Title: %s\n", subject.title);
    printf("Author: %s\n", subject.author);
    printf("Subject ID: %d\n", subject.subjectID);
}

int main() {

    struct Subject subject;

    printf("Enter Title: ");
    gets(subject.title);

    printf("Enter Author: ");
    gets(subject.author);

    printf("Enter Subject ID: ");
    scanf("%d", &subject.subjectID);

    printSubjectDetails(subject);

    return 0;
}
