#include "lifo.h"
#include <stdio.h>
#include <stdlib.h>

lifo_t lifo_new(void) {
  return NULL;
}

int lifo_is_empty(lifo_t p) {
  return list_is_empty(p);
}

lifo_t lifo_push (CARTE e,lifo_t p){
  return list_add_first(e,p);
}

lifo_t lifo_del_first(lifo_t p) {
  p = list_del_first( p );
  return p;
}

/* la pile n'est pas modifiée */
CARTE lifo_peek(lifo_t p){
  return list_first(p);
}

CARTE lifo_pop(lifo_t* ap){	/* attention: la pile est modifiee */
  lifo_t p = *ap;
  CARTE premiere_carte = p -> val;
  *ap = lifo_del_first( *ap );
  return premiere_carte;
}

int lifo_length(lifo_t p) {
  return list_length( p );
}

void lifo_print(lifo_t p) {
  list_print(p);
}

lifo_t lifo_delete(lifo_t p) {
  p = list_delete(p);
  return p;
}
