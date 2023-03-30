#include <stdio.h>

int findSum(int start, int end, int type) {
    if (start > end) {
        return 0;
    } else {
        int currentNum = start;
        start += 2;
        if (type == 0 && currentNum % 2 == 0) {
            return currentNum + findSum(start, end, type);
        } else if (type == 1 && currentNum % 2 != 0) {
            return currentNum + findSum(start, end, type);
        } else {
            return findSum(start, end, type);
        }
    }
}

int main() {
    int n, sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    sum = findSum(1, n, 0); //sum of even numbers
    printf("Sum of all even numbers between 1 to %d is %d\n", n, sum);
    sum = findSum(1, n, 1); //sum of odd numbers
    printf("Sum of all odd numbers between 1 to %d is %d\n", n, sum);
    return 0;
}

