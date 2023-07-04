/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-damian.gil
** File description:
** bounds
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

void exit_bounds_cond(game_menu_t *game, sfEvent *event)
{
    if (sfFloatRect_contains(&game->video->exit_bounds, event->mouseMove.x,
        event->mouseMove.y))
        sfSprite_setColor(game->sprites->exit_button, sfColor_fromRGB(150, 150,
            150));
    else
        sfSprite_setColor(game->sprites->exit_button, sfWhite);
}

void settings_bounds_cond(game_menu_t *game, sfEvent *event)
{
    if (sfFloatRect_contains(&game->video->settings_bounds, event->mouseMove.x,
        event->mouseMove.y))
        sfSprite_setColor(game->sprites->settings_button, sfColor_fromRGB(150,
            150, 150));
    else
        sfSprite_setColor(game->sprites->settings_button, sfWhite);
}

void start_bounds_cond(game_menu_t *game, sfEvent *event)
{
    if (sfFloatRect_contains(&game->video->start_bounds, event->mouseMove.x,
        event->mouseMove.y))
        sfSprite_setColor(game->sprites->start_button, sfColor_fromRGB(150, 150,
            150));
    else
        sfSprite_setColor(game->sprites->start_button, sfWhite);
}
