#include<stdio.h>
int linearsearch(int arr[2][3],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
            printf("the target was found at %d %d \n",i,j);
            }
        }
    }

}

int main(){
    int arr[2][3]={{1,2,3},{3,4,5}};
    int row=2;
    int col=3;
    int target=4;

    int index=linearsearch(arr,2,3,target);

}