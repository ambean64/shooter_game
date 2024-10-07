/* 
 * This file contains all the "scenes" of the game  
 * i.e. things like the title screen, combat screen, credits, etc.  
 * Filename: scenes.c  
 */

#include "../include/scenes.h"
#include "../include/structs.h"

/*
 * This is the title screen.  
 * It displays a list of options to the player.  
 * Options are analysed in main.c.  
 */
void title_screen()
{
    printf("Howdy stranger! Welcome to...\n");
    sleep(2);
    printf("ambean64's Text-based Western Shooter!\n");
    printf("\n1) Play | 2) Set your name | 3) Credits | 4) Quit: ");
}

/*
 * This is where the player sets their name.  
 */
void set_name_screen()
{
    printf("What's yer name, partner? (Max 32 characters, no spaces): ");
}

/*
 * This displays the game's credits.  
 */
void credits_screen()
{
    printf("Programmer: ambean64\n");
    sleep(2);
    printf("Story: ambean64\n");
    sleep(2);
    printf("Fastest gunslicker this side of the Mississippi: ambean64\n");
    sleep(2);
}

void combat_screen()
{
    
}

