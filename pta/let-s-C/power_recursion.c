#include <stdio.h>

double myPow(double x, int n) {
    if (n == 0 || x == 1) {
        return 1;
    } else if (n < 0) {
        x = 1 / x;
        n = -n;
        return  (x * myPow(x, n - 1));  // Fix: Add 1 / to calculate the reciprocal
    } else {
        return x * myPow(x, n - 1);
    }
}

int main() {
    double x, y;
    scanf("%lf", &x);  // Fix: Use %lf for double
    scanf("%lf", &y);  // Fix: Use %lf for double
    double sol = myPow(x, (int)y);  // Fix: Convert y to int if it's a double
    printf("%f", sol);
    return 0;
}
