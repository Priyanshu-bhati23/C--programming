#include<stdio.h>
#include<string.h>
#include<limits.h>


void counting_sum_rows(int arr[2][3] ,int row, int col){
    
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
sum +=arr[i][j];

        }
        printf("the sum of %d row is %d \n",i+1,sum);
    }

}


void largest_row_sum(int arr[2][3] ,int row, int col){
int max=INT_MIN;
int index;

     for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
sum +=arr[i][j];

}
if(sum>max){

    max=sum;
    index=i;

}

     }
     printf("the max row sum of  %d and that is %d",index+1,max);
}


void counting_sum_columns(int arr[2][3] ,int row, int col){
    
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
sum +=arr[j][i];

        }
        printf("the sum of %d column is %d \n",i+1,sum);
    }

}

int main(){
    
int arr[2][3]={{1,2,3},{2,3,4}};
counting_sum_rows(arr,2,3);
counting_sum_columns(arr,2,3);
largest_row_sum( arr , 2,  3);

}