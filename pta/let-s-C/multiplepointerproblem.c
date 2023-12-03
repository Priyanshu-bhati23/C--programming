#include<stdio.h>
#include<string.h>

int main(){

int x,y;
x=2;
y=3;
printf(" %d %d ",x,y);

printf("using  pointer to change value of x ");

// int* p=&x;
// *p=5;
// printf(" %d \n ",x);

printf("multiple pointer declaration problem \n");

// int* p=&x;q=&y; //this will generate an error
int* p=&x,q=y;//this will not cause error




}