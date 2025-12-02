//area of circle
#include <stdio.h>
#define PI 3.14
struct Circle {
    float radius,calculatearea,area;
};
int main() {
    struct Circle c1={20.5};
    printf("radius:%.2f\n", c1.radius);
    float calculateArea(struct Circle c) {
    return PI * c.radius * c.radius;
    area = calculateArea(c1);
    printf("Area of circle = %.2f\n", area);
    return 0;
}
