/*
** EPITECH PROJECT, 2021
** myhunter
** File description:
** music
*/

#include "../../include/graph.h"

void sound(initialisation *s)
{
    s->music = sfMusic_createFromFile("sound/mediaval.ogg");
    s->dragon_sound = sfMusic_createFromFile("sound/dragon_sound.ogg");
    s->sound_menu = sfMusic_createFromFile("sound/menu_sound.ogg");
    s->sound_feu = sfMusic_createFromFile("sound/feu.ogg");
    sfMusic_setVolume(s->music, 0);
    sfMusic_setVolume(s->dragon_sound, 0);
    sfMusic_setVolume(s->sound_feu, 0);
    sfMusic_setVolume(s->sound_menu, 25);
    sfMusic_play(s->music);
}

void loopmusic(initialisation *s)
{
    sfMusic_setLoop(s->music, 10000);
    sfMusic_setLoop(s->dragon_sound, 10000);
}
