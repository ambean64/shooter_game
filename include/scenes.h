#ifndef SCENES_H_
#define SCENES_H_

#include <stdio.h>
#include <unistd.h>
#include "structs.h"

/*
 * Utility screens, i.e. not part of the game.  
 */
void title_screen();
void set_name_screen();
void credits_screen();
void combat_screen();

#endif