#include <stdio.h>
void printNaturalNumbers(int n)
{
    if (n <= 0) {
        return;
    } else {
        printNaturalNumbers(n - 1);
        printf("%d ", n);
    }
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Natural numbers between 1 to %d are: ", n);
    printNaturalNumbers(n);

    return 0;
}

