/* un  programme  principal  (fonction main())  qui  crée une  liste, ajoute l’as de coeur, puis le 3 de pique 
`à la liste et affiche ensuite la liste.*/

#include "element.h"
#include "list.h"

/* La compilation se fera par la commande clang mytest.c list.c element.c -o mytestet l’execution par./mytest */

main(){
  
  list_t l = list_new();
  
  CARTE as_coeur;
    as_coeur.rang = 1;
    as_coeur.visible = 1;                  //par defaut les cartes ajoutées sont visibles
    as_coeur.couleur = COEUR;
  
  CARTE trois_pique;
    trois_pique.rang = 3;
    trois_pique.visible = 1;               //par defaut les cartes ajoutées sont visibles
    trois_pique.couleur = PIQUE;
  
  l = list_add_first( as_coeur, l);
  l = list_add_first( trois_pique, l);
  
  list_print( l);                          // Suppose que la fonction element_print existe.
}
