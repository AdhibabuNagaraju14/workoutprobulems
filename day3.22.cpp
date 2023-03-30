#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int size1, int size2) {
    int i, size;
    if (size1 < size2) {
        size = size1;
    } else {
        size = size2;
    }
    for (i = 0; i < size; i++) {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int i;

    printf("Before swapping:\n");
    printf("Array 1: ");
    for (i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }

    swapArrays(arr1, arr2, size1, size2);

    printf("\n\nAfter swapping:\n");
    printf("Array 1: ");
    for (i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}

