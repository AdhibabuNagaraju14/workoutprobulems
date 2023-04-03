#include <stdio.h>
struct person {
    char name[50];
    int age;
    char address[100];
};
int main() {
    struct person people[3];
    int i;
    for (i = 0; i < 3; i++) {
        printf("Enter name for person %d: ", i + 1);
        fgets(people[i].name, 50, stdin);
        printf("Enter age for person %d: ", i + 1);
        scanf("%d", &people[i].age);
        getchar(); // consume newline character
        printf("Enter address for person %d: ", i + 1);
        fgets(people[i].address, 100, stdin);
    }

    printf("\nInformation for all three people:\n");
    for (i = 0; i < 3; i++) {
        printf("Person %d\n", i + 1);
        printf("Name: %s", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Address: %s", people[i].address);
    }

    return 0;
}

