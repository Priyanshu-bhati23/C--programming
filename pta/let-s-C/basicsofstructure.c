#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int power;
        int age;
        int agility;
    };

    struct pokemon pikachu;
    pikachu.hp=20;
    pikachu.power=100;
    pikachu.age=80;
    pikachu.agility=120;

struct pokemon sandesh;
    sandesh.hp=20;
    sandesh.power=100;
    sandesh.age=80;
    sandesh.agility=120;

printf("\n");
printf("\n");
printf("\n");
    struct pokemon mewto;
    printf("enter the hp of mewto");
    scanf("%d",&mewto.hp);
    printf("enter the power of mmewto");
    scanf("%d",&mewto.power);
    
    printf("enter the age of mewto");
    scanf("%d",&mewto.age);
    
    printf("enter the agility of mewto");
    scanf("%d",&mewto.agility);
    
    
    
    

    printf("the hp of pikachu is  %d\n:",pikachu.hp);
    printf("the power of pikachu is  %d\n:",pikachu.power);
    printf("the age of pikachu is  %d\n:",pikachu.age);
    printf("the agility of pikachu is  %d\n:",pikachu.agility);

    printf("\n");
    printf("\n");

    printf("the hp of sandesh is  %d\n:",sandesh.hp);
    printf("the power of sandesh is %d \n:",sandesh.power);
    printf("the age of sandesh s  %d\n:",sandesh.age);
    printf("the agility of sandesh is  %d\n:",sandesh.agility);

    printf("\n");
    printf("\n");

    printf("the hp of mewto is  %d\n:",mewto.hp);
    printf("the power of mewto is %d \n:",mewto.power);
    printf("the age of mewto s  %d\n:",mewto.age);
    printf("the agility of mewto is  %d\n:",mewto.agility);
    printf("\n");
    printf("\n");

    return 0;
}