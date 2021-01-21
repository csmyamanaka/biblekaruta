/*
  Bible Karuta Game main file
  "main.c"
  M. Yamanaka
  email: myamanaka@live.com
  website: csmyamanaka.com
  license: MIT (See included "LICENSE" file for details)
*/

#include "biblekaruta.h"

#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("game starting ...\n");
  BibleKG* G = NULL;
  
  initBibleKG(&G);

  execBibleKG(G);
   
  printf("closing game ...\n");
  closeBibleKG(G);
  printf("game ended ...\n");
  return 0;
}
