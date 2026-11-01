#include <stdio.h>
#include<stdlib.h>
#include "fila.h"
int main(void){
 int a, qtd;
 Fila* f1 = fila_cria();
 fila_insere(f1,23);
 fila_insere(f1,37);
 fila_insere(f1,41);
 fila_insere(f1,55);
 fila_insere(f1,61);
 a = fila_remove(f1);
 printf("Valor removido da fila f1: %d\n",a);
 fila_imprime(f1);

 Fila* f2=inverte(f1);
 fila_imprime(f2);
 qtd=qtd_maior(f1,31);
 printf("Núm. de elem. maiores que 31 em f1: %d\n",qtd);
 printf("Qtd. elem. pares na fila f1: %d\n",pares(f1));

 fila_libera(f1);
 fila_libera(f2);

 system("PAUSE");
 return 0; }
