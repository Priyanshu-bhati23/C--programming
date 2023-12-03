#include<stdio.h>
#include<string.h>
//using typedef;
int main(){

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


charizard.attack=1200;
charizard.hp=20;
charizard.speed=100;
strcpy(charizard.name,"charizard");
charizard.tier='B';


printf("%s\n",pikachu.name);
printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.speed);
printf("%c\n",pikachu.tier);

printf("%s\n",charizard.name);
printf("%d\n",charizard.attack);
printf("%d\n",charizard.hp);
printf("%d\n",charizard.speed);
printf("%c\n",charizard.tier);



}