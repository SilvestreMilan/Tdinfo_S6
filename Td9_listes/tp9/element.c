#include "element.h"
#include <stdio.h>

void element_print (CARTE e) {
  static char* mesc[]={"trefle","carreau","coeur","pique"};
  static char* mesval[] ={"as","2","3","4","5","6","7","8","9","dix","valet","dame","roi"};
  if (!element_is_empty(e)) printf("%s de %s ;",mesval[e.rang-1],mesc[e.couleur]);
  else printf("Carte vide ");
}

void element_init (CARTE* e) {
    e->rang=0;
    e->visible=0;
    e->couleur=0;
}

CARTE element_empty() {
  CARTE e;
  element_init(&e);
  return e;
}

int element_is_empty(CARTE e) {
  return (e.rang==0 && e.couleur==0 && e.visible==0);
}

int element_equal(CARTE* e1, CARTE* e2) {
  return (  e1->rang==e2->rang
        &&  e1->visible==e2->visible
        &&  e1->couleur==e2->couleur);
}

/* ici la relation d'ordre implemente est < ( < est bien une relation d'ordre totale sur N ) */
int element_compare( CARTE a, CARTE b ){
  VALUE Va = a.rang;
  VALUE Vb = b.rang;
  if( Va < Vb ) return 1;
  if( Va == Vb ) return 0;
  if ( Va > Vb ) return -1;
}
