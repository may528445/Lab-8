#include <stdio.h>
#define PI 3.14

float circumference(float r) {
    return 2 * PI * r;
}

float area(float r) {
    return PI * r * r;
}

int main() {
    float radius;

    printf("Enter the radius in cm: ");
    scanf("%f", &radius);

    printf("Circumference: %.2f\n", circumference(radius));
    printf("Area: %.2f\n", area(radius));

    return 0;
}
