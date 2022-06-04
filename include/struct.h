/*
** EPITECH PROJECT, 2021
** myhunter
** File description:
** struct
*/

#ifndef STRUCT_H
    #define STRUCT_H

    #include <SFML/Graphics.h>
    #include <SFML/Graphics/RenderTexture.h>
    #include <SFML/System.h>
    #include <SFML/Window.h>
    #include <SFML/Graphics/Export.h>
    #include <SFML/Graphics/Color.h>
    #include <SFML/Audio.h>
    #include <SFML/Audio/Music.h>
    #include <SFML/Audio/SoundBuffer.h>
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/System/Export.h>
    #include <SFML/System/Time.h>
    #include <stdlib.h>
    #include <stdio.h>

typedef struct initialisation {
    sfRenderWindow *window;
    sfVideoMode video_mode;
    sfEvent event;
    sfMusic *music;
    sfMusic *dragon_sound;
    sfMusic *sound_menu;
    sfMusic *sound_feu;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f curspos;
    sfVector2f position;
    sfVector2f gravity;
    sfVector2f gravity_ailes;
    sfVector2i mousepos;
    sfText *text_play;
    sfText *text_settings;
    sfText *text_wings;
    sfText *text_quit;
    sfText *text_menusettings;
    sfText *text_wingssel;
    sfText *text_retour;
    sfText *text_sound;
    sfText *text_fps;
    sfText *text_fps90;
    sfText *text_fps130;
    sfText *text_resume;
    sfText *text_score;
    sfText *text_youwin;
    sfText *text_youloose;
    sfText *text_highscore;
    sfText *text_highscorebis;
    sfText *text_scorebis;
    sfText *text_byme;
    sfFont *font;
    sfClock *clock;
    sfClock *clock2;
    sfClock *clock3;
    sfClock *clock4;
    sfClock *clock5;
    sfClock *clock6;
    sfClock *clock7;
    sfClock *clock8;
    sfClock *clock9;
    sfClock *clock10;
    sfClock *clock11;
    sfClock *clock12;
    sfTime times;
    sfTime times2;
    sfTime times3;
    sfTime times4;
    sfTime times5;
    sfTime times6;
    sfTime times7;
    sfTime times8;
    sfTime times9;
    sfTime times10;
    sfTime times11;
    sfTime times12;
    float seconds;
    float seconds2;
    float seconds3;
    float seconds4;
    float seconds5;
    float seconds6;
    float seconds7;
    float seconds8;
    float seconds9;
    float seconds10;
    float seconds11;
    float seconds12;
    int bool;
    int stat;
    int var;
    int game;
    int settings;
    int wings;
    int isound;
    int fps;
    int clock_bool;
    char *score;
    int numbers;
    short vector;
    int highscore;
    int sound_bool;
    char *ptr;
} initialisation;

typedef struct object {
    sfTexture *texture;
    sfSprite *sprite;
    sfSprite *sprite2;
    sfSprite *sprite3;
    sfSprite *sprite4;
    sfVector2f vector;
    sfIntRect rectnl;
} object_t;

typedef struct personnage {
    object_t *chevalier;
    object_t *chevalier_jump;
    object_t *chevaliere;
    object_t *ailes;
    object_t *attack_light;
    object_t *back;
    object_t *play;
    object_t *setting;
    object_t *sound0;
    object_t *sound25;
    object_t *sound50;
    object_t *sound100;
    object_t *wings_button;
    object_t *quit;
    object_t *pancarte;
    object_t *repos;
    object_t *roche;
    object_t *left;
    object_t *right;
    object_t *retour;
    object_t *dragon;
    object_t *pause;
    object_t *feu;
    object_t *fps90;
    object_t *fps130;
    object_t *oppac;
    int var;
    char *ailes_select;
    int val_ailes;
    int bool_pause;
    object_t *ailes_blanches;
    object_t *ailes_green;
    object_t *ailes_noires;
    object_t *ailes_bleus;
    object_t *resume;
    object_t *oscore;
    object_t *cursor;
    sfSprite *sprite;
    sfVector2i mouse;
    sfVector2f pos_feu;
    sfVector2f pos_chev;
} personnage_t;

typedef struct parallax {
    object_t *plan1;
    object_t *plan2;
    object_t *plan3;
    object_t *plan4;
    object_t *plan5;
    object_t *plan6;
    object_t *plan7;
} parallax_t;

typedef struct ailes {
    int ailes_blanches;
    int ailes_noires;
    int ailes_vertes;
    int ailes_jaunes;
    int ailes_bleus;
    char *ailes_blanches1;
    char *ailes_noires1;
    char *ailes_vertes1;
    char *ailes_jaunes1;
    char *ailes_bleus1;
} ailes_t;

typedef struct coeur {
    object_t *coeur1;
    object_t *coeur2;
    object_t *coeur3;
    int nbcoeur1;
    int nbcoeur2;
    int nbcoeur3;
    int nblife;
} coeur_t;

typedef struct block_struct {
    object_t *bloc;
    int type;
    float x;
    float y;
} block_t;

#endif //STRUCT_H
