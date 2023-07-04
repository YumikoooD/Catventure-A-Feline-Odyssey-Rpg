##
## EPITECH PROJECT, 2023
## B-MUL-200-PAR-2-1-myrpg-damian.gil
## File description:
## Makefile
##

CSFML_FLAGS = -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

all:
	gcc ./save.c ./main_save.c ./corrupt.c ./get_save.c -I../includes \
		../lib/my/*.c ../src/destroy.c -o save $(CSFML_FLAGS)
	gcc ./load.c ./main_load.c ./corrupt.c ./get_save.c -I../includes \
		../lib/my/*.c ../src/destroy.c -o load $(CSFML_FLAGS)
