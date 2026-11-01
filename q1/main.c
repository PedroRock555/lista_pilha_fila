#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
int main(void){
 Lista* l1 = lst_cria();
 l1 = lst_insere(l1,51);
 l1 = lst_insere(l1,33);
 l1 = lst_insere(l1,4);
 l1 = lst_insere(l1,21);
 l1 = lst_insere(l1,41);
 l1 = lst_insere(l1,35);
 l1 = lst_remove_rec(l1,21);
 lst_imprime(l1);
 lst_imprime_invertida_rec(l1);
 printf("Num. nós c/ info < que 40: %d\n",menores(l1,40));
 printf("O comprimento da lista é %d\n",comprimento(l1));
 printf("Soma dos valores dos nós %d\n",soma(l1));
 printf("Num. nós com val. primos é %d\n",primos(l1));
 Lista* l2 = lst_cria();
 l2 = lst_insere(l2,33);
 l2 = lst_insere(l2,37);
 l2 = lst_insere(l2,55);
 Lista* l3=lst_conc(l1,l2);
 lst_imprime(l3);
 l1=lst_diferenca(l1,l2);
 lst_imprime(l1);

 lst_libera(l1);
 lst_libera(l2);
 lst_libera(l3);

 system("PAUSE");
 return 0;
}

