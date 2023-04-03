#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
    char name[50];
    int id;
    float gpa;
};
int main() {
    struct student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter information for student #%d\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("GPA: ");
        scanf("%f", &students[i].gpa);
        printf("\n");
    }

    printf("Information for all three students:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student #%d\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("GPA: %.2f\n\n", students[i].gpa);
    }

    return 0;
}

