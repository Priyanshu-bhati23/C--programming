
#include<stdio.h>
#include<string.h>
//using typedef;
int main(){

    //assigning the value of one structure variable to another
    typedef struct pokemon
 {
    char name[100];
    int attack;
    int hp;
    int speed;
    char tier;
}pokemon;

pokemon pikachu,charizard;

pikachu.attack=100;
pikachu.hp=60;
strcpy(pikachu.name,"pikachu");
pikachu.tier='A';
pikachu.speed=200;

charizard=pikachu;

printf("copied contents \n ");

printf("%s\n",charizard.name);
printf("%d\n",charizard.attack);
printf("%d\n",charizard.hp);
printf("%d\n",charizard.speed);
printf("%c\n",charizard.tier);


if(pikachu.name==charizard.name){
    printf("name is same");
}


printf("conditional checking \n");
// if(pikachu==charizard){                        this will generate an error to compar
//     printf("the name is same");                 you need to compare each atribute specifically 
// }


return 0;

}


