//stair caxe problem
/*You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?*/

#include<stdio.h>


int climbStairs(int n){
     if(n==2 ||n==1|| n==3){
            return n;
        }
        else{
            int a=2,b=3,ans;
            for(int i=4;i<=n;i++){
                ans=a+b;
                a=b;
                b=ans;
                
            }
            return b;
        }

}

int main(){
    int n;
    scanf("%d",&n);
    int sol=climbStairs(n);
    printf("%d",sol);
    return 0 ;
}