#include <stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[20];
        int price;
        int page;
   
    }a,b;
   strcpy(a.name,"secret seven");
   a.price=20;
   a.page=150;
   printf("name of book   %s \n;",a.name);
   printf("price of book  %d\n;",a.price);
   printf("page of book  %d\n;",a.page);


   
strcpy(b.name,"is you");
   b.price=20;
   b.page=150;


    printf("name of book  %s \n",b.name);
   printf("price of book;  %d\n",b.price);
   printf("pages of book;  %d\n",b.page);

   

     
}
