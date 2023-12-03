#include<stdio.h>
#include<string.h>
int main()
{

struct pokemon
 {
    char name[100];
    int attack;
    int hp;
    int speed;
    char tier;
}pikachu,charizard;

// struct pokemon pikachu;
pikachu.attack=100;
pikachu.hp=60;
strcpy(pikachu.name,"pikachu");
pikachu.tier='A';
pikachu.speed=200;


// struct pokemon charizard;
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