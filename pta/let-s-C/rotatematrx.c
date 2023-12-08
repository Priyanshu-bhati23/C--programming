

#include<stdio.h>
void roatatematrix(int arr[3][3], int row, int col) {

int ans[3][3];
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){

        ans[j][row-i-1]=arr[i][j];

    }
}
for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){

       
            printf(" %d ",ans[i][j]);

}
printf("\n");
 }
}




int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    roatatematrix(arr, 3, 3);

    return 0;
}
