#include <stdio.h>

int reverseNumber(int n) {
    static int reverse = 0; 
    if (n == 0) {
        return reverse;
    } else {
        int lastDigit = n % 10;
        reverse = (reverse * 10) + lastDigit;
        return reverseNumber(n/10);
    }
}

int main() {
    int n, reversed;
    printf("Enter a number: ");
    scanf("%d", &n);
    reversed = reverseNumber(n);
    printf("Reverse of %d is %d\n", n, reversed);
    return 0;
}

