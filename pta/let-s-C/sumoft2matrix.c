#include<stdio.h>




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
     int arr1[r][c]; // Define an array with a maximum size
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    int arr2[r][c]; // Define an array with a maximum size
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
int sum[r][c];
 for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j]=arr1[i][j]+arr2[i][j];
            printf(" ");
        }
        printf("\n");
    }

    //printing the sum matrix
    printf("the sum of matrix \n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d",sum[i][j]);
            printf(" ");
        }
        printf("\n");
    }



return 0;
}

  