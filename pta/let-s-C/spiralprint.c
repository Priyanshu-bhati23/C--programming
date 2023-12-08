#include <stdio.h>

void spiralprint(int arr[3][3], int row, int col) 
{


int count=0;
int startingcol=0;
int endingrow=row-1;
int startingrow=0;
int endingcol=col-1;
int total=row*col;

while(count<total){

//printing first row
for(int i=0;count<total && i<col;i++){
    printf(" %d ",arr[startingcol][i]);
    count++;
}
startingrow++;

//printing ending col
for(int i=0;count<total && i<row;i++){

printf(" %d ",arr[i][endingcol]);
count++;
}

endingcol--;

//printing ending row
for(int i=endingcol;count<total && i>=0;i--){

printf(" %d ",arr[endingrow][i]);
count++;

}
endingrow--;


//printing starting col{
    for(int index=endingrow;index>=startingrow;index--){
printf("%d",arr[index][startingcol]);
count++;
    }
}


}



int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    spiralprint(arr, 3, 3);

    return 0;
}
