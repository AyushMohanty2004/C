#include<stdio.h>
#include<string.h>
int main(){
struct pokemon{
    char name[50];
    int HP;
    float health;
}pikachu,Raichu;
    
    strcpy(pikachu.name,"Ash's Pikachu\n");
    pikachu.HP=60;
    pikachu.health=69;

    strcpy(Raichu.name,"Ash's Pikachu evolved");
    Raichu.HP=160;
    Raichu.health=99;

    printf("%s",pikachu.name);
    printf("%s",Raichu.name);
}