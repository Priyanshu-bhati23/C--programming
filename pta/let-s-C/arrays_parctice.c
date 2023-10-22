#include <stdio.h>
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
printf("the elements of array are%d \n",arr[i]);
    }
    
}
void creatingarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("ente the %d element of array\n",i);
scanf("%d",&arr[i]);
    }
    printarray(arr,n);
}

void maxArray(int arr[],int n){
    int max=arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>max){
            max=arr[i];
           
        }
        
    }
    printf("the max element is %d \n",max);
}
void minArray(int arr[],int n){
    int min=arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
        
    }
    printf("the min element is m %d\n ",min);
}

int main(){
    printf("enter teh size of array \n");
    int n;
    scanf("%d",&n);
    int arr[n];
    creatingarray(arr,n);
    maxArray(arr,n);
    minArray(arr,n);
return 0;
}
