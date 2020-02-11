#ifndef _ELEMENT
#define _ELEMENT

typedef enum { TREFLE,CARREAU,COEUR,PIQUE} COULEUR;

typedef struct { int rang; char visible; COULEUR couleur; } CARTE;

typedef CARTE element_t;
typedef int VALUE;

void element_print (CARTE e);
void element_init (CARTE* e);
CARTE element_empty();
int element_is_empty(CARTE e);
int element_equal(CARTE*, CARTE*);


/* soit R une relation d'ordre sur l'ensemble des elements consideres ( on le suppose totalement ordonne ),
soit a,b 2 elements, la fonction retourne 1 si a R b, -1 si b R a, 0 si a = b
attention la valeur d'un element ne le definit pas forcement ex: ici element_compare == 0 est plus faible que element_equal == 1 */
// PRECONDITION : l'ensemble est totalement ordonne
int element_compare( element_t a, element_t b);

#endif
