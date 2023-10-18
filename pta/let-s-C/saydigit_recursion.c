#include <stdio.h>
#include <conio.h>

void saydigit(int n, const char *arr[]) {
    // base case
    if (n == 0) {
        return;
    }

    // taking out digits
    int a = n % 10;
    n = n / 10;

// recursive call
    saydigit(n, arr);

    // processing
    printf("%s \n \n", arr[a]);

    
}

int main() {
    int n;
    printf("enter  a number");
    scanf("%d",n);
    const char *arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    // Example call to saydigit
    saydigit(n, arr);

    return 0;
}
