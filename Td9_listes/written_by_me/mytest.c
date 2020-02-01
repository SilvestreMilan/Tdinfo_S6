#include "element.h"
#include "liste.h"

/* La compilation se ferapar la commande clang mytest.c list.c element.c -o mytestet l’execution par./mytest */

main(){
  
  list_t l = list_new(void);
  
  CARTE as_coeur;
    as_coeur.rang = 1;
    as_coeur.visible = 1;                  //par defaut les cartes ajoutées sont visibles
    as_coeur.COULEUR = COEUR;
  
   CARTE trois_pique;
    trois_pique.rang = 3;
    trois_pique.visible = 1;               //par defaut les cartes ajoutées sont visibles
    trois_pique.COULEUR = PIQUE;
  
  l = list_add_first( as_coeur, l);
  l = list_add_first( trois-pique, l);
  
  list_print( l);                          // Suppose que la fonction element_print existe.
}
