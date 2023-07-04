/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-damian.gil
** File description:
** switch_final
*/

#include "my.h"
#include "goto.h"
#include "loadings.h"
#include "positions.h"

void yellow_switch(rpg_t *rpg)
{
    switch (rpg->character->perso->id_zone) {
        case BAR:
            cases_yellow_coll(rpg);
            break;
        case ARMOR:
            cases_yellow_coll(rpg);
            break;
        case MAP_1:
            small_loading(rpg->window);
            goto_bar(rpg);
            break;
        case MAP_2:
            small_loading(rpg->window);
            goto_armor(rpg);
            break;
    }
}
