#include <stdio.h>
#include<string.h>
int main(){

    //taking inout inaan array
char trr[40];   //without giving  a size you cannot declare
gets(trr);
printf("\n");
puts(trr);
printf("\n");


    char str[]="hello my name is priyanhsu";
char arr[3];


// method1
for(int i=0;i<3;i++){
scanf("%c",&arr[i]);  //
}
for(int i=0;i<3;i++){
printf("%c",arr[i]);  //& will not be  included
}
printf("\n");

    // method 2

puts(str);
printf("\n");



}