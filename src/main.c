/* 
 * This is the main program, i.e. the structure of the game.  
 * Filename: main.c  
 */

/*
 * Header files.  
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include "../include/player_actions.h"
#include "../include/structs.h"
#include "../include/scenes.h"


int main()
{    
    struct player_actions s_player_selection;
    struct character s_player;

    /*
     * Sets the enemy names.  
     */
    struct character s_enemy_1;
    strcpy(s_enemy1.char_name, "Michael \"Wild Hog\" William");

    struct character s_enemy_2;
    strcpy(s_enemy2.char_name, "Leslie \"Sureshot\" Higgins");
    
    struct character s_enemy_3;
    strcpy(s_enemy3.char_name, "Texas Red");

    s_player_selection.title_screen_selection = 0;
    int temp_int = 0; // Please for the love of G-d find a better way to do this later.  
    char temp_str[16];

    /*
     * This is the title screen. Scans for user selection.  
     */
    for (int i=0; i<2; i++)
    {
        switch (s_player_selection.title_screen_selection)
        {
            /*
             * This is the title screen. It is the default case, so to speak, hence the need for the loop.  
             * It scans for player input, then defines "title_screen_selection" accordingly.  
             * As said above, please find a cleaner way to accomplish this than using a temporary variable.  
             * Function in include/scenes.h  
             */
            case 0:
                title_screen();
                scanf("%d", &temp_int);
                title_screen_selection(&s_player_selection.title_screen_selection, temp_int);
                break;
            /*
             * This begins the actual game.  
             */
            case 1:
                combat_screen();
                break;
            /*
             * This allows the player to set a name for himself/herself.  
             * It uses a similar method as case 0, so please change this too.  
             * Function in include/scenes.h  
             */
            case 2:
                set_name_screen();
                scanf("%s", temp_str);
                set_user_name(&s_player.char_name, temp_str);
                printf("%s\n", s_player.char_name);
                break;
            /*
             * This displays the credits screen.  
             * Function in include/scenes.h  
             */
            case 3:
                credits_screen();
                break;
            /*
             * This says its salutations to the player, then exits the game.  
             */
            case 4:
                printf("Happy trails!\n");
                break;
            default:
                printf("Error!!!\n");
                break;
        }
    }

    return 0;
}