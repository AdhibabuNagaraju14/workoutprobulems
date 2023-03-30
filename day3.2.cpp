#include <stdio.h>

#define PI 3.14159 // Define a constant value for PI

// Function to find diameter of the circle
float diameter(float radius)
{
    return 2 * radius;
}

// Function to find circumference of the circle
float circumference(float radius)
{
    return 2 * PI * radius;
}

// Function to find area of the circle
float area(float radius)
{
    return PI * radius * radius;
}

int main()
{
    float radius;

    // Take input from user
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    // Call the functions to find diameter, circumference, and area of the circle
    float d = diameter(radius);
    float c = circumference(radius);
    float a = area(radius);

    // Print the results
    printf("Diameter of the circle = %f\n", d);
    printf("Circumference of the circle = %f\n", c);
    printf("Area of the circle = %f\n", a);

    return 0;
}

