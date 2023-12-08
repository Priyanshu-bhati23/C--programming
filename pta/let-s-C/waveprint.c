#include <stdio.h>

void waveprint(int arr[3][3], int row, int col) {
    for (int i = 0; i < col; i++) {
        // Print even columns from top to bottom
        for (int j = 0; j < row; j++) {
            printf("%d ", arr[j][i]);
        }

        // Move to the next column
        i++;

        // Check if there are more columns to print
        if (i < col) {
            // Print odd columns from bottom to top
            for (int j = row - 1; j >= 0; j--) {
                printf("%d ", arr[j][i]);
            }
        }
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    waveprint(arr, 3, 3);

    return 0;
}
