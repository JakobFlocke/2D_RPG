#include "raylib.h"

#include <cstdio>
#include <vector>
#include <memory>
#include "GameObject.h"
#include "Player.h"

GAME_STATE gameState = GAME_STATE::LOADING;

std::vector<std::unique_ptr<GameObject>> objs;


void load();
void menu();
void play();
void pause();
void options();

int main(void)
{

    InitWindow(FRAME_WIDTH, FRAME_HEIGHT, "2D RPG");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        
        switch (gameState) {
        case GAME_STATE::LOADING:
            load();
            break;
        case GAME_STATE::MENU:
            break;
        case GAME_STATE::PLAYING:
            break;
        case GAME_STATE::PAUSE:
            break;
        case GAME_STATE::OPTIONS:
            break;
        default: printf("Error");
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}

void load() {

    // load
    Class playerClass = {ARCHER, 1, 1};

    Stats stats;
    stats[HEALTH] = 10;
    stats[STRENGTH] = 100;

    objs.push_back(std::make_unique<Player>({0, 0}, stats, status, collider));

    // draw

    // process (/)

    // input
}

void menu() {

    // draw

    // process (/)

    // input

}

void play() {

    // draw

    // process


    // input
}

void pause() {


    // draw

    // process (/)

    // input

}

void options() {

    // draw

    // process (/)

    // input
}
