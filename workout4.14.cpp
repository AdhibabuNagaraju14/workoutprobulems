#include <stdio.h>
#include <stdlib.h>

struct rectangle {
    int length;
    int width;
};

int calculateArea(struct rectangle rect) {
    return rect.length * rect.width;
}

int main() {
    struct rectangle myRect = {5, 10};
    int area = calculateArea(myRect);
    printf("The area of the rectangle is: %d\n", area);
    return 0;
}

