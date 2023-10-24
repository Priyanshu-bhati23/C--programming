#include<stdio.h>
int main(){
    char str[40];
    puts("enter the string");
    gets(str);
    puts("the size of str is");
   
   int i=0;
   int size=0;
   int j;
    while(str[i]!=0){
        i++;
        size++;
    }
    printf("%d \n",size);

    //ALGO FOR REVERSING A STRING
    
    for(int i=0, j=size-1;i<=j;i++,j--){
       char temp=str[i];
       str[i]=str[j];
       str[j]=temp;
    }

    puts(str);

}