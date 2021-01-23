/*
  Bible Karuta Game - game source file
  "biblekaruta.c"
  M. Yamanaka
  email: myamanaka@live.com
  website: csmyamanaka.com
  license: MIT (See included "LICENSE" file for details)
*/

#include "biblekaruta.h"

int initBibleKG(BibleKG** G){
  /*
    Bible Karuta constructor
    Arguments:
      G ... reference to a reference to aBible karuta game (not a typo)
  */

  *G = malloc(sizeof(BibleKG));
  (*G)->ms = 0;
  (*G)->ps = 0;
  (*G)->w = 800;
  (*G)->h = 600;
  (*G)->t = "Bible Karuta";
  /*(*G)->C.pos[0] = 0;
  (*G)->C.pos[1] = 0;
  (*G)->C.gs = 0;
  (*G)->C.as = 0;
  (*G)->C.fn = "sprite.png";*/
  for(int i = 0; i < 5; i++) (*G)->C[i] = 0;
  return 0;
}

int closeBibleKG(BibleKG* G){
  /*
    Bible Karuta destructor
    Arguments:
      G ... reference to Bible karuta game
  */
  return 0;
}

int drawBibleKG(BibleKG G){
  /*
    Bible Karuta draw function
    Arguments:
      G ... Bible Karuta game object
  */
  drawCrosshair(G.C);
  return 0;
}

int execBibleKG(BibleKG* G){
  /*
    The main game loop for Bible Karuta
  */
  G->ms = 1;
  while(G->ms){
    drawBibleKG(*G);
  }
  return 0;
}
