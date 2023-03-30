#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], size, i;
    int *ptr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements in the array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements in the array are: ");
    ptr = arr;
    for (i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}

