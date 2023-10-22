#include <stdio.h>

void update(int arr[],int n){   //the array is not passed as a variable instead thel location f first address is passed inthe argument 
    arr[0]=5;
    arr[1]=4;
    arr[2]=3;
    for (int i = 0; i < n; i++)
    {
        printf("the %d  elemenst of array are %d \n",i,arr[i]);
           }
    printf("going back to the main");
}


// things that happen in function remian in function 
int main(){
    int arr[5]={11,12,1,3,4};
    int n=5;
    printf("going to the function");
    update(arr,n);
for (int i = 0; i < n; i++)
{
printf("the elememts of array are %d \n",arr[i]);
}

}