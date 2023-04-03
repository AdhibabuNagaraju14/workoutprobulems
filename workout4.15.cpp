#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee {
    char name[50];
    int age;
    float salary;
    char department[50];
};
void displaySalesEmployees(struct employee *employees, int numEmployees) {
    printf("Sales employees with salary greater than $50,000 per year:\n");
    for (int i = 0; i < numEmployees; i++) {
        if (strcmp(employees[i].department, "Sales") == 0 && employees[i].salary > 50000) {
            printf("Name: %s\n", employees[i].name);
            printf("Age: %d\n", employees[i].age);
            printf("Salary: $%.2f\n", employees[i].salary);
            printf("Department: %s\n\n", employees[i].department);
        }
    }
}
int main() {
    struct employee employees[5] = {
        {"John Smith", 30, 55000, "Sales"},
        {"Jane Doe", 35, 45000, "Marketing"},
        {"Bob Johnson", 45, 60000, "Sales"},
        {"Sarah Lee", 28, 40000, "Sales"},
        {"David Kim", 50, 70000, "IT"}
    };
    displaySalesEmployees(employees, 5);
    return 0;
}

