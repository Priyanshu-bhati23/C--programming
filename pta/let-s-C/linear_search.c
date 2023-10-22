#include<stdio.h>
void linearsearch(int arr[],int n){
    printf("enter the element to be seached");
    int search;
    scanf("%d",&search);
    for (int  i = 0; i < n; i++)
    {
        if(arr[i]==search){
            printf("the index of the elemnt is %d",i);
        }
    }
    
}


int main(){
    int arr[5];
    int size=5;
    for(int  i = 0; i  <5; i++)
    {
        printf("enter the %d element if array",i+1);
        scanf("%d",&arr[i]);
    }
    linearsearch(arr,size);
return 0;
}