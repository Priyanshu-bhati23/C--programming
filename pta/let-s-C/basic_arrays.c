#include <stdio.h>

void printArray(int arr[]) {   //printing arrays
    for (int i = 0; i < 5; i++) {
        printf("the elements of the array are %d\n", arr[i]);
    }

    printf("%d %d %d %d ",arr[0],arr[1],arr[2],arr[3],arr[4]); //indexing 
}

int maxarray(int arr[]){
 int max = arr[0]; // Initialize max with the first element

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
            
        }
        

    }
    return max;
}

        int minarray(int arr[]){
 int min = arr[0]; // Initialize max with the first element

    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update max if a larger element is found
        }
        return min;

}
        }

int main() {
    int arr[5];
    printf("enter the elements of array");
    for (int i = 0; i < 5; i++) {  // taking input in arrays
    
        scanf("%d", &arr[i]);
    }
    printArray(arr);
    printf("max elemnet in array is %d",maxarray(arr));
    printf("min elemnet in array is %d",minarray(arr));
    return 0;
}
