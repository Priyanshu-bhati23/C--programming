// #include<stdio.h>
// void printarray(int arr[],int n ){

//     printf("array  is");
//     for(int i=0;i<n;i++){
//         printf(" %d",arr[i]);
//     }
//     printf("\n");
// }


// void creatingarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printarray(arr,n);

// }


//     void reversean(int arr[],int n){
// for(int i=0,j=n-1;i<j;i++,j--){
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
// }
// printarray(arr,n);
//     }



// int main(){
//     int n;
//     printf("ënte rtte siz eof an array");
//     scanf("%d",&n);
//     int arr[n];
   
//     creatingarray(arr,n);
//      reversean(arr,n);
    
    
// }


// #

// #include<stdio.h>
//  int unique_element(int arr[],int n){
//      int unique=0;
//      for (int i = 0; i < n; i++)
//      {
//          unique=unique^arr[i];
        
//              }
//              return unique;
//  }
            
    
// }



// int main(){
//     int arr[]={2,3,1,6,3,6,2};
//     int size_of=sizeof(arr)/sizeof(arr[0]) ;
//     unique_element(arr,size_of);

// }

// 
// #include<stdio.h>
// int main(){
//     int arr[]={1,2,3,4,5,6};
// //     printf("enetr teh element top be searched");
// //     int n;
// //     scanf("%d",&n);
// //     for(int i=0;i<6;i++){
// // if(n==arr[i]){
// //     printf("the number is is %dth index",i);
// // }
// //     }

//     // for(int i=0;i<6;i++){
//     //     printf(" no of stars:%d",arr[i]);
//     //     printf("stars:");
//     //     for(int j=0;j<arr[i];j++){
            
//     //         printf("*");
            
//     //     }
//     //     printf("\n");
//     }

// #include<stdio.h>

// int main(){
// int arr[3]={1,2,3};
// int sum=0;
// int n=3;
// for(int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             sum=sum+arr[i]+arr[j];
//         }
//     }
// printf("%d",sum);
//     }

// #include<stdio.h>
// int main(){
//     int arr[]={1,2,2,3,4,5,6,7,3,4};
//     int size_p= sizeof(arr)/sizeof(arr[0]);
//     if(arr[0]>arr[1]){
//             printf("%d",arr[0]);
//     }
//     if(arr[size_p-1]>arr[size_p-2]){
//             printf("%d",arr[size_p-1]);
//     for(int i=1;i<=size_p-2;i++){
//         if(arr[i]>arr[i+1]&&arr[i]>arr[i-1]){
//             printf("%d",arr[i]);
//         }
        
//         }
//     }
// }

// #include <stdio.h>

// int countNonAdjacentSubsets(int arr[], int n) {
//     int include = 0; // Count of subsets that include the current element
//     int exclude = 0; // Count of subsets that exclude the current element

//     for (int i = 0; i < n; i++) {
//         int temp = include;
//         include = exclude + arr[i];
//         exclude = (exclude > temp) ? exclude : temp;
//     }

//     return (include > exclude) ? include : exclude;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int count = countNonAdjacentSubsets(arr, n);

//     printf("Count of subsets with non-adjacent elements: %d\n", count);

//     return 0;
// }
