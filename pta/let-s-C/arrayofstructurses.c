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

pokemon pokedex[4];
for(int i=0;i<4;i++){
   for (int i = 0; i < 4; i++) {
    printf("enter the name of %d pokemon:\n", i + 1);
    scanf(" %[^\n]s", pokedex[i].name);
    printf("enter the attack of %d pokemon:\n", i + 1);
    scanf("%d", &pokedex[i].attack);
    printf("enter the speed of %d pokemon:\n", i + 1);
    scanf("%d", &pokedex[i].speed);
    printf("enter the hp of %d pokemon:\n", i + 1);
    scanf("%d", &pokedex[i].hp);
    printf("enter the tier of %d pokemon:\n", i + 1);
    scanf(" %c", &pokedex[i].tier);
}

}
for(int i=0;i<4;i++){

     printf(" the name of %d pokemon:\n", i + 1);
    printf("%s \n",pokedex[i].name);
        printf("the attack of %d pokemon:\n", i + 1);
    printf("%d \n",pokedex[i].attack);

     printf(" speed of %d pokemon:\n", i + 1);

    printf("%d \n",pokedex[i].speed);

     printf(" the hp of %d pokemon:\n", i + 1);

    printf("%d \n",pokedex[i].hp);

 printf("the tier of %d pokemon:\n", i + 1);    
    printf("%c \n",pokedex[i].tier);
}

return 0;
}
