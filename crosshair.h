/*
  Bible Karuta Game - Crosshair header file
  "crosshair.h"
  M. Yamanaka
  email: myamanaka@live.com
  website: csmyamanaka.com
  license: MIT (See included "LICENSE" file for details)
*/

#include <stdlib.h>

/*
  The crosshair object
  Member variables in order:
    pos ... xy-coordinates
    gs  ... overall state of crosshair: disabled, invisible, etc
    as  ... animation state of crosshair i.e. frame in spritesheet
    fn  ... file name of spritesheet file
*/
typedef struct Crosshair{ int pos[2], gs, as; const char* fn; } Crosshair;

/*
  Draw crosshair object
  The crosshair struct should have all of the necessary information
  required to draw the object so the crosshair object is the only 
  argument required in this function. Note that the object itself
  is passed since no changes are made by the draw function.
  Arguments:
    Crosshair* ... crosshair object
  This function returns an integer indicating the successfulnes of its
  execution.
*/
int drawCrosshair(const Crosshair);
