#include <stdio.h>
/* // printing factorail through recursion
int fact(int n){
int facto(int n){
   //base case 
  if(n==0){
    return 1;
  }
  else{
    return n*facto(n-1);
  }
}*/


/*int power(int b,int a){
  if(a==0){
    return 1;
}
  else{
    return b*power(b,a-1);
  }
}
*/

/*int counting(int a){
  if(a==0){
    return 0;
  }
  else{
    
    printf("%d \n ",counting(a-1));
    printf("%d \n",a);//for forward counting ,, it is call head recursion 

    printf("%d \n",a);
    printf("%d \n ",counting(a-1));//for backward counting it is called tail recursion.
    
  }
}*/





int main(void) {
  // factorial through  recursion

  
/*  int n;
  printf("enter the number to be printed factorail");
  scanf ("%d",&n);
  int factorial=facto(n);
  printf("factorial of %d is %d",n,factorial);*/

  
//printing the power of a numbet through recursion 


  /*int n,a;
  printf("enter the number to be powered");
  
  scanf ("%d",&n);
  
  printf("enter the number");
  scanf ("%d",&a);
  int powerof=power(a,n);
  
  
  printf("the powet of %d raised to %d is %d",n,a,powerof);*/

  

//printing counting through recursion
  /*int n ;
  printf("enter the starting number from which numbers are to be printed ");
  scanf("%d",&n);
  counting(n);*/


  //

  return 0;
}