#include<stdio.h>
int main(){
int x=5;
x++;// x=x+1
printf("%d \n",x);
printf("%d \n",x++);
printf("%d \n",++x);
x--;// x=x-1
printf("%d \n",x);
printf("%d\n",x--);
printf("%d\n",--x);
return 0;
}