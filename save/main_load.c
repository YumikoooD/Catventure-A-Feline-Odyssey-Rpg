/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-damian.gil
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"
#include "utils.h"
#include "inventory.h"

static void main_2(char_info_t *perso)
{
    dprintf(2, "taille inv:%d\n", perso->inventory_size);
    dprintf(2, "zone:%d\n", perso->id_zone);
    dprintf(2, "pos x:%d\n", perso->pos_x);
    dprintf(2, "pos y:%d\n", perso->pos_y);
    dprintf(2, "stats:\n");
    dprintf(2, "\tdef:%d\n", perso->stats->defense);
    dprintf(2, "\tstr:%d\n", perso->stats->strenth);
    dprintf(2, "\thp:%d/", perso->stats->hp);
    dprintf(2, "%d\n", perso->stats->hp_max);
    dprintf(2, "\tlvl:%d\n", perso->stats->lvl);
    dprintf(2, "\txp:%d", perso->stats->xp);
    dprintf(2, "/%d\n", perso->stats->xp_to_next_level);
    dprintf(2, "inv :");
}

int main(int ac, char **av, char **env)
{
    char_info_t *perso = load(env);

    if (perso == NULL)
        return 0;
    for (unsigned int i = 0; i < perso->inventory_size; i++) {
        dprintf(2, "\tname : %d, can_equi : %d, is_equi : %d\n",
            perso->inventory[i].name, perso->inventory[i].can_be_equiped,
            perso->inventory[i].is_equiped);
    }
    for (unsigned int i = 0; i < QUEST_NB; i++) {
        dprintf(2, "Quest %u: state %u\n", i + 1, perso->quest[i]);
    }
    free(perso->quest);
    free(perso->stats);
    free(perso->inventory);
    free(perso);
}
