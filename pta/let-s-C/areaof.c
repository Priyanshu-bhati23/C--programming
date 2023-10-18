#include <stdio.h>
#include <math.h>
#include "constants.h"  // using a header file named constants.h to use the constants

int main() {
    double radius;

    // Input the radius from the userg
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);  // Use %lf for double

    double area = M_PI * radius * radius;

    // Display the result
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}
