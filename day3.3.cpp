#include <stdio.h>

// Function to find maximum of two numbers
int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}

// Function to find minimum of two numbers
int min(int num1, int num2)
{
    return (num1 < num2) ? num1 : num2;
}

int main()
{
    int n, num, maximum, minimum;

    // Take input from user
    printf("Enter the number of numbers you want to compare: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    // Take input of numbers and initialize maximum and minimum with the first number
    scanf("%d", &num);
    maximum = num;
    minimum = num;

    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
        maximum = max(maximum, num);
        minimum = min(minimum, num);
    }

    // Print the results
    printf("Maximum of the given numbers = %d\n", maximum);
    printf("Minimum of the given numbers = %d\n", minimum);

    return 0;
}

