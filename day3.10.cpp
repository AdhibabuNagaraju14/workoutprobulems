#include <stdio.h>


int power(int base, int exponent)
{
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

int main()
{
    int base, exponent;

    
    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter exponent number: ");
    scanf("%d", &exponent);

    
    int result = power(base, exponent);

   
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}

