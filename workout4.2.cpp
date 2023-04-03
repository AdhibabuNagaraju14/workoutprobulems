#include <stdio.h>
union my_union 
{
    int Nagaraju;
    float floating_point;
};
int main() 
{
    union my_union u;
    u.Nagaraju = 42;
    printf("Integer value: %d\n", u.Nagaraju);
    u.floating_point = 3.14;
    printf("Floating point value: %f\n", u.floating_point);
    printf("Union value: %d\n", u.Nagaraju);
    return 0;
}

