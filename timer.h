
#ifndef TIMER_H
#define TIMER_H

#include "SDL/SDL.h"

/*
 * Delay Timer
 *
 */

typedef struct _timer {
  Uint32 DT;  // delay timer register
  Uint32 last;
} timer;


extern void init_timer(timer*);
extern void set_delay_timer(timer*, unsigned char);
extern unsigned char get_delay_timer(timer*);
extern void update_timer(timer*);


/*
 * Sound Timer
 *
 */


typedef struct _sound_timer {
  Uint32 ST;
  Uint32 last;
} sound_timer;


extern void init_sound_timer(sound_timer*);
extern void set_sound_timer(sound_timer*, unsigned char);
extern void update_sound_timer(sound_timer*);

#endif // TIMER_H
