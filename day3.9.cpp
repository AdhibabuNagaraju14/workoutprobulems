#include <stdio.h>

// Function to check whether a number is a perfect number or not
int isPerfect(int num)
{
    int sum = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}
void printPerfectNumbers(int start, int end)
{
    printf("Perfect numbers between %d and %d are: ", start, end);

    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main()
{
    int start, end;

    
    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);
    printPerfectNumbers(start, end);

    return 0;
}

