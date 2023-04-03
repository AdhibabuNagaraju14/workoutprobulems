#include <stdio.h>
#include <stdlib.h>
#include <string.h>
union my_data {
    int integer;
    float floating_point;
    char string[50];
};
int main() {
    union my_data data;
    char input[50];

    printf("Enter a value: ");
    fgets(input, sizeof(input), stdin);
    char *endptr;
    long int_val = strtol(input, &endptr, 10);
    if (*endptr == '\n' || *endptr == '\0') {
        data.integer = int_val;
        printf("Input is an integer: %d\n", data.integer);
    }
    else {
        char *endptr2;
        float fp_val = strtof(input, &endptr2);
        if (*endptr2 == '\n' || *endptr2 == '\0') {
            data.floating_point = fp_val;
            printf("Input is a floating-point number: %.2f\n", data.floating_point);
        }
        else {
            strncpy(data.string, input, sizeof(data.string));
            printf("Input is a string: %s\n", data.string);
        }
    }

    return 0;
}


