#include <stdio.h>

// Function to find cube of a given number
int cube(int num)
{
    return num * num * num;
}

int main()
{
    int num;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function to find cube of the number
    int cube_num = cube(num);

    // Print the result
    printf("Cube of %d is %d\n", num, cube_num);

    return 0;
}

