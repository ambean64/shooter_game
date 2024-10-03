/* 
 * This file handles all the possible actions the player can take, from menu selection to shooting.  
 * Filename: player_actions.c  
 */

#include "../include/player_actions.h"
#include "../include/structs.h"

void set_user_name(struct character *p, char name[32])
{
    strcpy(p->char_name, name);
}