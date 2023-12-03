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

typedef struct legend_pokemon{
       pokemon normal;
       char ability;

}legend_pokemon;

legend_pokemon mewtwo,lugia;

//to access element from nested structure
strcpy(mewtwo.normal.name,"mewto");
mewtwo.normal.attack=100;
mewtwo.normal.hp=50;
mewtwo.normal.tier='A';
mewtwo.normal.speed=200;


printf("%s\n",mewtwo.normal.name);
printf("%d\n",mewtwo.normal.attack);
printf("%d\n",mewtwo.normal.hp);
printf("%d\n",mewtwo.normal.speed);
printf("%c\n",mewtwo.normal.tier);

return 0;
}
