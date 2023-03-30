#include <stdio.h>
int factorial(int num)
{
    int fact = 1;

    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    return fact;
}
int isStrong(int num)
{
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if (sum == originalNum) {
        return 1;
    } else {
        return 0;
    }
}
void printStrongNumbers(int start, int end)
{
    printf("Strong numbers between %d and %d are: ", start, end);

    for (int i = start; i <= end; i++) {
        if (isStrong(i)) {
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
    printStrongNumbers(start, end);

    return 0;
}

