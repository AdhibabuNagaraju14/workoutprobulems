#include <stdio.h>
#include <math.h>
int countDigits(int num)
{
    int count = 0;

    while (num > 0) {
        count++;
        num /= 10;
    }

    return count;
}
int isArmstrong(int num)
{
    int originalNum = num;
    int sum = 0;
    int power = countDigits(num);

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, power);
        num /= 10;
    }

    if (sum == originalNum) {
        return 1;
    } else {
        return 0;
    }
}
void printArmstrongNumbers(int start, int end)
{
    printf("Armstrong numbers between %d and %d are: ", start, end);

    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
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
    printArmstrongNumbers(start, end);

    return 0;
}

