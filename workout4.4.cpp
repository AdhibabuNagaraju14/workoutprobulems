#include <stdio.h>
union my_data 
{
    int integer;
    float floating_point;
};
int main() 
{
    union my_data data;
    char input[50];

    printf("Enter a number: ");
    fgets(input, 50, stdin);
    if (sscanf(input, "%d", &data.integer) == 1)
	{
     printf("You entered an integer: %d\n", data.integer);
    }
    else if (sscanf(input, "%f", &data.floating_point) == 1) 
	{
     printf("You entered a floating-point number: %f\n", data.floating_point);
    }
    else 
	{
        printf("Invalid input\n");
    }
    return 0;
}

