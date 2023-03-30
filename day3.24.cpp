#include <stdio.h>

int searchElement(int *arr, int size, int element) {
    int i;
    for (i = 0; i < size; i++) {
        if (*(arr + i) == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[100], size, i, element, index;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &element);

    index = searchElement(arr, size, element);

    if (index == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at index %d.\n", index);
    }

    return 0;
}

