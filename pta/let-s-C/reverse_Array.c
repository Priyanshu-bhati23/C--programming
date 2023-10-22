#include <stdio.h>

void printingrev_array(int brr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("the elements of brr are %d\n", brr[i]);
    }
}

void reverse(int arr[], int n) {
    int brr[n];

    for (int i = 0; i < n; i++) {
        brr[i] = arr[n - 1 - i];
    }

    printingrev_array(brr, n);
}

int main() {
    int size = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, size);
    return 0;
}
