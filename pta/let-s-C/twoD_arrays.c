#include <stdio.h>

// Declare printmatrix function properly
void printmatrix(int arr[][100], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("2%d", arr[i][j]);
        }
        printf("\n");
    }
}

// Pass the array as a parameter to the matrix function
void matrix(int r, int c) {
    int arr[100][100]; // Define an array with a maximum size
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printmatrix(arr, r, c); // Pass the array to the printmatrix function
}

int main() {

//initilaisation of a  2d array

// int arr[4][2]={{1234,56},{1256,4},{1434,32},{1312.96}}
// int arr[4][2]={{1234,56},{1256,4},{1434,32},{1312.96}}

// int arr[][2]={{1234,56},{1256,4},{1434,32},{1312.96}} the row will gwt automatically updated to 4;

    int r, c;
    printf("enter the no of rows: ");
    scanf("%d", &r); // Correct the scanf statement by adding the address operator (&)
    printf("enter the no of columns: ");
    scanf("%d", &c); // Correct the scanf statement by adding the address operator (&)

    matrix(r, c);
    return 0;
}
