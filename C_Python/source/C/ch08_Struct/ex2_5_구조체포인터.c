#include <stdio.h>

struct GameInfo{
    char* name;
    int year;
    int price;
};

int main(void) {
    struct GameInfo gameInfo1;
    gameInfo1.name = "lol";
    gameInfo1.year = 2024;
    gameInfo1.price = 33000;
    struct GameInfo* gamePtr = &gameInfo1;
    printf("GAMEINFO\n");
    printf("Name : %s\n",gameInfo1.name);
    printf("Year : %d\n",gameInfo1.year);
    printf("Price : %d\n",gameInfo1.price);

    printf("GAMEINFO using gamePtr\n");
    printf("Name : %s\n",(*gamePtr).name);
    printf("Year : %d\n",(*gamePtr).year);
    printf("Price : %d\n",(*gamePtr).price);

    printf("GAMEINFO using gamePtr\n");
    printf("Name : %s\n",gamePtr->name);
    printf("Year : %d\n",gamePtr->year);
    printf("Price : %d\n",gamePtr->price);
}