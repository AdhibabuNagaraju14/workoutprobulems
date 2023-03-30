#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumOfDigits(n/10);
    }
}

int main() {
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = sumOfDigits(n);
    printf("Sum of digits of %d is %d\n", n, sum);
    return 0;
}

