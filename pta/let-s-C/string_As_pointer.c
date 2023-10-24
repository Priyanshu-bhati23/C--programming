#include<stdio.h>

int main(){
char arr[]="hello my name is priyanshu";
char* ptr=arr;
printf("%p \n",ptr);//ptr  contains the add of arr
printf("%p \n",&arr[0]);//the addresss of enture array is teh adree of first eleemet
printf("%p \n",arr);
int i=0;
while(arr[i]!='\0'){
    printf("%c",arr[i]);
    i++;
}
printf("\n");
while(*ptr!='\0'){
    printf("%c",*ptr);  //ptr stands for addreds and *ptr stands for value
    ptr++;
    i++;
}
printf("\n");

// anoteh rway of intializing a string 
char* att="hlloe";
puts(att);

char* priya="hello world ";
// priya="nfqkjw"  this will show erroe as you cannot change a cmplete string
while(*priya!='\0'){
    char i;
    scanf("%c",&i);
    *priya=i;
    priya++;
}

}