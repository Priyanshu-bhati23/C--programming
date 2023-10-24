#include<stdio.h>
#include<string.h>
int main(){
   char* ptr="hello wordl";
   printf("%d \n",strlen(ptr));//length of string
   char str1[]="hello";
   char str2[]="great";
   strcpy(str2,str1);
   puts(str1);
   puts(str2);
}