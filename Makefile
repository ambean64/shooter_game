files := src/main.c src/player_actions.c src/scenes.c
gcc_arguments := -Wall -Werror -Wpedantic

main: $(files)
	gcc $(gcc_arguments) $(files) -o bin/game