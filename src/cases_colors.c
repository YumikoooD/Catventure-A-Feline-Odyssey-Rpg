/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-damian.gil
** File description:
** cases_colors
*/

#include <stdlib.h>
#include <unistd.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include "utils.h"
#include "my.h"
#include "goto.h"
#include "defines.h"
#include "loadings.h"
#include "positions.h"

void case_green(rpg_t *rpg, sfVector2f pixel_pos, sfIntRect rect)
{
    if (check_green(rpg, (sfVector2f)
        {pixel_pos.x - (rect.width / 2 / MAP_SCALE),
        pixel_pos.y - (rect.height / 2 / MAP_SCALE)}) ||
        check_green(rpg, (sfVector2f)
        {pixel_pos.x + (rect.width / 2 / MAP_SCALE),
        pixel_pos.y - (rect.height / 2 / MAP_SCALE)}) ||
        check_green(rpg, (sfVector2f)
        {pixel_pos.x + (rect.width / 2 / MAP_SCALE),
        pixel_pos.y + (rect.height / 2 / MAP_SCALE)}) ||
        check_green(rpg, (sfVector2f)
        {pixel_pos.x - (rect.width / 2 / MAP_SCALE),
        pixel_pos.y + (rect.height / 2 / MAP_SCALE)})) {
        green_switch(rpg);
    }
}

void case_red(rpg_t *rpg, sfVector2f pixel_pos, sfIntRect rect)
{
    if (check_red(rpg, (sfVector2f)
        {pixel_pos.x - (rect.width / 2 / MAP_SCALE),
        pixel_pos.y - (rect.height / 2 / MAP_SCALE)}) ||
        check_red(rpg, (sfVector2f)
        {pixel_pos.x + (rect.width / 2 / MAP_SCALE),
        pixel_pos.y - (rect.height / 2 / MAP_SCALE)}) ||
        check_red(rpg, (sfVector2f)
        {pixel_pos.x + (rect.width / 2 / MAP_SCALE),
        pixel_pos.y + (rect.height / 2 / MAP_SCALE)}) ||
        check_red(rpg, (sfVector2f)
        {pixel_pos.x - (rect.width / 2 / MAP_SCALE),
        pixel_pos.y + (rect.height / 2 / MAP_SCALE)})) {
        id_switch(rpg);
    }
}

void case_yellow(rpg_t *rpg, sfVector2f pixel_pos, sfIntRect rect)
{
    if (check_yellow(rpg, (sfVector2f)
        {pixel_pos.x - (rect.width / 2 / MAP_SCALE),
        pixel_pos.y - (rect.height / 2 / MAP_SCALE)}) ||
        check_yellow(rpg, (sfVector2f)
        {pixel_pos.x + (rect.width / 2 / MAP_SCALE),
        pixel_pos.y - (rect.height / 2 / MAP_SCALE)}) ||
        check_yellow(rpg, (sfVector2f)
        {pixel_pos.x + (rect.width / 2 / MAP_SCALE),
        pixel_pos.y + (rect.height / 2 / MAP_SCALE)}) ||
        check_yellow(rpg, (sfVector2f)
        {pixel_pos.x - (rect.width / 2 / MAP_SCALE),
        pixel_pos.y + (rect.height / 2 / MAP_SCALE)})) {
        yellow_switch(rpg);
    }
}

void case_pink(rpg_t *rpg, sfVector2f pixel_pos, sfIntRect rect)
{
    if (check_pink(rpg, (sfVector2f)
        {pixel_pos.x - (rect.width / 2 / MAP_SCALE),
        pixel_pos.y - (rect.height / 2 / MAP_SCALE)}) ||
        check_pink(rpg, (sfVector2f)
        {pixel_pos.x + (rect.width / 2 / MAP_SCALE),
        pixel_pos.y - (rect.height / 2 / MAP_SCALE)}) ||
        check_pink(rpg, (sfVector2f)
        {pixel_pos.x + (rect.width / 2 / MAP_SCALE),
        pixel_pos.y + (rect.height / 2 / MAP_SCALE)}) ||
        check_pink(rpg, (sfVector2f)
        {pixel_pos.x - (rect.width / 2 / MAP_SCALE),
        pixel_pos.y + (rect.height / 2 / MAP_SCALE)})) {
        cases_pink_coll(rpg);
    }
}

void case_blue(rpg_t *rpg, sfVector2f pixel_pos, sfIntRect rect)
{
    if (check_blue(rpg, (sfVector2f)
        {pixel_pos.x - (rect.width / 2 / MAP_SCALE),
        pixel_pos.y - (rect.height / 2 / MAP_SCALE)}) ||
        check_blue(rpg, (sfVector2f)
        {pixel_pos.x + (rect.width / 2 / MAP_SCALE),
        pixel_pos.y - (rect.height / 2 / MAP_SCALE)}) ||
        check_blue(rpg, (sfVector2f)
        {pixel_pos.x + (rect.width / 2 / MAP_SCALE),
        pixel_pos.y + (rect.height / 2 / MAP_SCALE)}) ||
        check_blue(rpg, (sfVector2f)
        {pixel_pos.x - (rect.width / 2 / MAP_SCALE),
        pixel_pos.y + (rect.height / 2 / MAP_SCALE)})) {
        cases_blue_coll(rpg);
    }
}
