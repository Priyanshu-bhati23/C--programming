#include<stdio.h>
#include<string.h>


void printing_arr(int arr[][100],int row,int col){
 for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){

       
            printf(" %d ",arr[i][j]);

}
printf("\n");
 }
}

void creating_array(int arr[][100],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){

            printf("enter the (%d,%d) element::",i,j);
            scanf("%d",&arr[i][j]);

        }
    }

    printing_arr(arr,row,col);
    
}

int main(){
int row,col;

printf("enter the row\n");
scanf("%d",&row);
printf("enter the col\n");
scanf("%d",&col);
int arr[row][100];//assume any number of colums
creating_array(arr,row,col);


}