#ifndef _GAME_H_
#define _GAME_H_

#include <string>
#include <iostream>
#include <ncurses.h>
#include <cstdint>
#include <string>
#include <vector> 

typedef struct vec2ui{
    int x;
    int y;

} vec2ui;

typedef struct vec2i{
    int x;
    int y;
} vec2i;

int init();
void run();
void close();

#endif // !_GAME_H_