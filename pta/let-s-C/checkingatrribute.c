#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    bool flag = true;

    typedef struct pokemon {
        char name[100];
        int attack;
        int hp;
        int speed;
        char tier;
    } pokemon;

    pokemon pikachu, charizard;

    pikachu.attack = 100;
    pikachu.hp = 60;
    strcpy(pikachu.name, "pikachu");
    pikachu.tier = 'A';
    pikachu.speed = 200;

    charizard = pikachu;

    // strcpy(charizard.name, "charizard");

    printf("checking the similarity \n");

    if (strcmp(pikachu.name, charizard.name) != 0) flag = false;
    if (pikachu.attack != charizard.attack) flag = false;
    if (pikachu.hp != charizard.hp) flag = false;
    if (pikachu.speed != charizard.speed) flag = false;

    if (flag == true)
        printf("the contents are the same\n");
    else
        printf("contents are different\n");

    return 0;
}





