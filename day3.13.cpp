#include <stdio.h>

int findSum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + findSum(n-1);
    }
}

int main() {
    int n, sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    sum = findSum(n);
    printf("Sum of all natural numbers between 1 to %d is %d\n", n, sum);
    return 0;
}

