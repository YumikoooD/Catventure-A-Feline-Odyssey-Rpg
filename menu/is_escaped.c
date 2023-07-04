/*
** EPITECH PROJECT, 2023
** is escaped
** File description:
** is escaped
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "menu.h"
#include "typedef.h"
#include "utils.h"
#include "create.h"

void is_escaped(sfEvent *event, game_menu_t *game)
{
    if (event->type == sfEvtKeyPressed) {
        if (event->key.code == sfKeyEscape) {
            game->start_button_pressed = false;
        }
    }
}
