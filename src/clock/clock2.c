#include "../include/graph.h"

void clock_dragon(initialisation *s, personnage_t *p)
{
    s->seconds9 = s->times9.microseconds / 10000.0;
    s->times9 = sfClock_getElapsedTime(s->clock9);

    if (s->seconds9 > 10) {
        animation11(p);
        sfClock_restart(s->clock9);
    }
}

void clock_parallax(initialisation *s, parallax_t *par)
{
    s->seconds = s->times.microseconds / 10000.0;
    s->times = sfClock_getElapsedTime(s->clock);

    if (s->seconds > 2.25) {
        parallax_moove1(par);
        parallax_moove2(par);
        parallax_moove3(par);
        parallax_moove4(par);
        sfClock_restart(s->clock);
    }
}

void clock_feu(initialisation *s, personnage_t *p)
{
    s->seconds10 = s->times10.microseconds / 10000.0;
    s->times10 = sfClock_getElapsedTime(s->clock10);

    if (s->seconds > 3) {
        animation12(p);
        sfClock_restart(s->clock10);
    }
}

void clock_repos(initialisation *s, personnage_t *p)
{
    s->seconds7 = s->times7.microseconds / 10000.0;
    s->times7 = sfClock_getElapsedTime(s->clock7);

    if (s->seconds7 > 4.5) {
        animation6(p);
        sfClock_restart(s->clock7);
    }
}

void clock_score(initialisation *s)
{
    s->seconds11 = s->times11.microseconds / 1000000.0;
    s->times11 = sfClock_getElapsedTime(s->clock11);

    if (s->seconds11 > 0.2) {
        s->numbers += 10;
        sfClock_restart(s->clock11);
    }
}
