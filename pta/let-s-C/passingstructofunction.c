#include<stdio.h>
#include<string.h>

typedef struct pokemon {
    char name[100];
    int attack;
    int hp;
    int speed;
    char tier;
} pokemon;

void change(pokemon* p) {
    p->attack = 20;
    p->hp = 2;
    p->speed = 10;
    strcpy(p->name, "jigglypuff");
    p->tier = 'c';

    printf("the memory assigned to p and jiggly are different\n");
    printf("%s\n", p->name);
    printf("%d\n", p->attack);
    printf("%d\n", p->hp);
    printf("%d\n", p->speed);

    return;
}

int main() {
    pokemon jiggly;

    jiggly.attack = 1200;
    jiggly.hp = 20;
    jiggly.speed = 100;
    strcpy(jiggly.name, "jigglypuff");
    jiggly.tier = 'B';

    change(&jiggly);

    printf("the values will now change");

    printf("%s\n", jiggly.name);
    printf("%d\n", jiggly.attack);
    printf("%d\n", jiggly.hp);
    printf("%d\n", jiggly.speed);

    return 0;
}
