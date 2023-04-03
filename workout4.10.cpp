#include <stdio.h>
union my_union {
    int integer;
    float floating_point;
};

int main() {
    union my_union unions[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter a value for union %d:\n", i+1);
        printf("  Integer value: ");
        scanf("%d", &unions[i].integer);
        printf("  Floating point value: ");
        scanf("%f", &unions[i].floating_point);
    }
    float total = 0.0;
    for (int i = 0; i < 5; i++) {
        total += (float) unions[i].integer + unions[i].floating_point;
    }
    printf("The total of all the values is: %.2f\n", total);

    return 0;
}

