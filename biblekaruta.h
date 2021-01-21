/*
  Bible Karuta Game - game header file
  "biblekaruta.h"
  M. Yamanaka
  email: myamanaka@live.com
  website: csmyamanaka.com
  license: MIT (See included "LICENSE" file for details)
*/

#pragma once

#include "crosshair.h"
#include "verses.h"

#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

/*
  Bible Karuta game object struct
  Serves as a overall manager of the karuta game
  Member variables in order:
    ms    ... main state: menu, play, view controls, etc
    ps    ... play states: play, pause, disabled
    w     ... game window width
    h     ... game window height
    t     ... game title
    e     ... SDL Event object
    win   ... SDL main game window
    main  ... main SDL drawing surface
    C     ... crosshair object;
    cards ... cards array
*/
typedef struct BibleKG{
  int ms, ps, w, h;
  const char* t;
  SDL_Event e;
  SDL_Window* win;
  SDL_Renderer* main;
  Crosshair C;
  int cards[500];
} BibleKG;

/*
  The "constructor" for the Bible Karuta Game
*/
int initBibleKG(BibleKG**);

/*
  The "destructor" for the Bible Karuta Game
*/
int closeBibleKG(BibleKG*);

/*
  The "draw" function for the Bible Karuta Game
*/
int drawBibleKG(BibleKG);

/*
  Bible Karuta game loop
*/
int execBibleKG(BibleKG*);
