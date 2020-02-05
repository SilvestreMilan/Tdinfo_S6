// Fichier list.c
#include "list.h"

// Pour plus de proprete des concepts,
// on définit l'identifier NIL (signifiant "fin de liste")
// plutôt que d'utiliser directement NULL (signifiant "pointeur nul")
#define NIL NULL

list_t list_new() {
  return NIL;
}

int list_is_empty( list_t l ) {
  return NIL == l;
}

list_t list_add_first( element_t e, list_t l ) {
  list_t p = calloc( 1, sizeof( *p ) );
  if ( NULL == p ) {
    fprintf( stderr, "Fatal: Unable to allocate new list link.\n" );
    return l;
  }
  p->val  = e;
  p->next = l;
  return p;
}

list_t list_del_first( list_t l ) {
  assert(!list_is_empty(l));

  list_t p = l->next;
  free( l );
  return p;
}

void list_print(list_t l) {
  list_t p;
  printf("( ");
  for ( p=l; ! list_is_empty(p); p = p->next) {
    element_print( p->val );
    printf( " " );
  }
  printf(")\n");
}

// Precondition : liste non vide
element_t list_first(list_t l){
  assert(!list_is_empty(l));
  return l->val;
}

int list_length(list_t l) {
  int len = 0;
  list_t p;
  for( p=l; ! list_is_empty(p) ; p=p->next ) {
    len ++;
  }
  return len;
}

list_t list_find(element_t e, list_t l) {
  list_t p;
  for( p=l; ! list_is_empty(p) ; p=p->next ) {
    if( element_equal(&(p->val), &e) ) {
      return p;
    }
  }
  return NULL;
}

// A completer
//////////////////////////////////////////////////

// Compte le nombre de e dans la liste
int list_count(element_t e, list_t l) {
  
  list_t p;
  int compteur = 0;
  
  for( p = l; !list_is_empty(p); p = p -> next)
  { if( element_equal( &e, p->val)) compteur += 1; }
  
  return compteur;
}

// Ajoute en fin de liste
list_t list_add_last(element_t e, list_t l) {
  
  list_t p;
  
  for( p = l; !list_is_empty( p -> next); p = p -> next)
  p -> next = list_add_first( e, list_new());
  
  return l;
}

// Libere toute la liste et retourne une liste vide
list_t list_delete(list_t l) {
  for( ; !list_is_empty( l); l = list_del_first( l)) 
  return l;
}

// Concatene 2 listes
list_t list_concat(list_t l1, list_t l2) {
  if( list_is_empty( l1)) return l2;
  
  list_t p;
  
  for( p = l1; !list_is_empty( p -> next); p = p -> next)
  p -> next = l2;
  
  return l1;
}

// Clone une liste
list_t list_copy(list_t l) {
  list_t l1 = list_new();
  list_t p;
  
  for( p = l; !list_is_empty( p); p = p -> next) l1 = list_add_last( p -> val, l1);
  
  return l1;
}

// Supprime l'element en position n et retourne la nouvelle liste
// Les positions demarrent a 1
list_t list_remove_n(int n, list_t l) {
  if( n > list_length( l))
  { fprintf( stderr, "n > list_length\n" );
    return l;
  }
  
  int compteur;
  list_t p = l;
  
  for( compteur = 1; compteur != n; (compteur ++) && (p = p -> next))   // on commence à compter à partir de 1
  list_del_first( p);
  
  return l;
}
