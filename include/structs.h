#ifndef STRUCTS_H_
#define STRUCTS_H_

#include <stdio.h>
#include <stdbool.h>

struct player_actions { int title_screen_selection; };
struct character { char char_name[32]; int health; bool alive; };

#endif