#include "fifo.h"
#include <stdio.h>
#include <stdlib.h>

void main() {
  CARTE c;
  fifo_t l = NULL;
  //fifo_t* pl;
  //*pl = l;
  printf("%d",fifo_dequeue(&l));
  printf("%d",fifo_dequeue(&l));
  fifo_print(l);
  c.rang=1; c.couleur=TREFLE; l = fifo_enqueue(c,l);
  fifo_print(l);
  fifo_dequeue(&l);
  fifo_print(l);
  printf("%d\n", &l);
  fifo_dequeue(&l);
  fifo_print(l);
}
