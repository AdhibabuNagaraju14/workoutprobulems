#include <stdio.h>

int isPalindrome(int num, int reversedNum) {
    if (num == 0) {
        return reversedNum;
    } else {
        int lastDigit = num % 10;
        reversedNum = (reversedNum * 10) + lastDigit;
        return isPalindrome(num/10, reversedNum);
    }
}

int main() {
    int num, reversedNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    reversedNum = isPalindrome(num, 0);
    if (num == reversedNum) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }
    return 0;
}

