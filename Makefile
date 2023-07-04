##
## EPITECH PROJECT, 2023
## B-MUL-200-PAR-2-1-myrpg-damian.gil
## File description:
## Makefile
##

SRC_PATH	=	src/

LIB_PATH	=	lib/my/

SAVE_PATH	=	save/

LOAD_PATH	=	loads/

TXT_PATH	=	text/

MENU_PATH	=	menu/

CC ?= gcc

SRC = 	$(SRC_PATH)main.c					\
		$(SRC_PATH)health.c					\
		$(SRC_PATH)collision_next_switch.c	\
		$(SRC_PATH)cases_colors_next.c		\
		$(SRC_PATH)collisions_next.c		\
		$(SRC_PATH)main_events.c			\
		$(SRC_PATH)switch_final.c			\
		$(SRC_PATH)goto_final.c				\
		$(SRC_PATH)ennemy.c					\
		$(SRC_PATH)check_colors_next.c		\
		$(SRC_PATH)main_loop.c				\
		$(SRC_PATH)claw.c					\
		$(SRC_PATH)cases_colors.c			\
		$(SRC_PATH)check_colors.c			\
		$(SRC_PATH)collisions.c				\
		$(SRC_PATH)monaco.c					\
		$(SRC_PATH)goto_next.c				\
		$(SRC_PATH)sprites.c				\
		$(SRC_PATH)collision_switch.c		\
		$(SRC_PATH)character.c				\
		$(SRC_PATH)moves.c					\
		$(SRC_PATH)create.c					\
		$(SRC_PATH)destroy.c				\
		$(SRC_PATH)maps.c					\
		$(SRC_PATH)goto.c					\
		$(SRC_PATH)map_update.c				\
		$(SRC_PATH)meow_sound.c				\
		$(SRC_PATH)quest.c					\
		$(SRC_PATH)create_2.c 				\
		$(SRC_PATH)main_loop2.c 			\
		$(SRC_PATH)inventory.c				\
		$(SRC_PATH)sounds.c 				\
		$(SRC_PATH)xp.c						\
		$(SRC_PATH)ennemy2.c				\
		$(SRC_PATH)ennemy3.c				\
		$(SRC_PATH)inventory2.c				\
		$(TXT_PATH)text.c					\
		$(TXT_PATH)text_loop.c				\
		$(TXT_PATH)text_calls.c				\
		$(LIB_PATH)malloc.c					\
		$(LIB_PATH)my_array_len.c			\
		$(LIB_PATH)my_strcpy.c				\
		$(LIB_PATH)my_strdup.c				\
		$(LIB_PATH)my_strlen.c				\
		$(LIB_PATH)my_strncmp.c				\
		$(LIB_PATH)my_strcat.c				\
		$(LIB_PATH)my_strnbr_base.c			\
		$(LIB_PATH)random.c					\
		$(SAVE_PATH)corrupt.c				\
		$(SAVE_PATH)get_save.c				\
		$(SAVE_PATH)save.c					\
		$(SAVE_PATH)load.c					\
		$(LOAD_PATH)loads.c					\
		$(LOAD_PATH)loadings.c				\
		$(LOAD_PATH)focus.c					\
		$(MENU_PATH)menu.c					\
		$(MENU_PATH)resize.c				\
		$(MENU_PATH)create.c				\
		$(MENU_PATH)create_inter_part.c		\
		$(MENU_PATH)is_escaped.c			\
		$(MENU_PATH)menu_loop.c				\
		$(MENU_PATH)bounds.c				\
		$(MENU_PATH)event_loop.c

OBJ =	$(SRC:.c=.o)

INCLUDES =	includes\
			save\
			assets/maps\
			default\
			menu

CPPFLAGS += $(foreach inc, $(INCLUDES), -iquote$(inc))

CFLAGS += -g3 -Wall -Wextra

CSFML_FLAGS = -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window -lm

NAME = my_rpg

ASSET_FILE = assets.tar

ASSET_FOLDER = assets

all: 	assets $(NAME)

assets:
	@mkdir -p $(ASSET_FOLDER)
	@tar xf $(ASSET_FILE) -C $(ASSET_FOLDER) --strip-components 1

$(NAME):	$(OBJ)
	$(CC) $(OBJ) $(CSFML_FLAGS) -o $(NAME) $(CFLAGS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(ASSET_FOLDER)

re:	fclean all

.PHONY: fclean all clean re
