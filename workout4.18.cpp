#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

struct circle {
    float radius;
    struct point center;
};

float area_of_circle(struct circle c) {
    return M_PI * c.radius * c.radius;
}

int main() {
    struct circle my_circle = {2.5, {0, 0}};
    printf("Area of circle: %.2f\n", area_of_circle(my_circle));

    return 0;
}

