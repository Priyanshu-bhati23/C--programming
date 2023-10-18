#include<stdio.h>
int product(int a,int b){
    if(b==0){
        return 0;
    }
else{
    int pro = a+product(a,b-1);
   return pro;
} 

}

int main(){
    printf("enter the number");
int  a;
scanf("%d",&a);

   printf("number of time it needs to add");
int  b;
scanf("%d",&b);
int pro=product(a,b);
printf("product is %d",pro);


}