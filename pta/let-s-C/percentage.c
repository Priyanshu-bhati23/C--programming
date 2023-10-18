#include<stdio.h>
int main(){

//a little bit introduction to for loop and array ,// higher level 

//time complexity -O(n)
printf("enter the number of subjects you have");

int no_sub;
scanf("%d",&no_sub);
int total_marks=no_sub*100;
int marks[no_sub];

for(int i=0;i<no_sub;i++){
    printf("enter the marks of each subject");
    int mark;
    scanf("%d",&mark);
     marks[i] = mark;
}
for(int i=0;i<no_sub;i++){  
    printf("enter the marks are %d \n",marks[i]);
}
int sumof=0;
for(int i=0;i<no_sub;i++){
   
     sumof=marks[i]+sumof;
}
printf("the sum is %d",sumof);
float percentage = ((float)sumof / total_marks) * 100.0;
printf("percentage is %.2f%%\n", percentage);
    
return 0;
}