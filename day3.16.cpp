#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *arr, int size, int (*compare)(int, int)) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (compare(*(arr + i), *(arr + j)) > 0) {
                swap((arr + i), (arr + j));
            }
        }
    }
}

int ascending(int a, int b) {
    return a - b;
}

int descending(int a, int b) {
    return b - a;
}

int main() {
    int arr[100], size, i, choice;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter 1 to sort in ascending order or 2 to sort in descending order: ");
    scanf("%d", &choice);

    if (choice == 1) {
        sort(arr, size, ascending);
    } else {
        sort(arr, size, descending);
    }

    printf("The sorted array is:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

