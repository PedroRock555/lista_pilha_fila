#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
void lst_imprime(Lista *l){
 Lista* lAux = l;
 while(lAux!=NULL){
 printf("Info = %d\n",lAux->info);
 lAux = lAux->prox;
 }
}

Lista* lst_cria(){
 return NULL;
}
int lst_vazia(Lista* l) {
    return (l == NULL);
} 
int pertence(Lista* l, int v) {
    Lista* p;
    for (p = l; p != NULL; p = p->prox) {
        if (p->info == v) return 1;
    }
    return 0;
}
Lista* lst_insere(Lista *l, int info){
 Lista* ln = (Lista*)malloc(sizeof(Lista));
 ln->info = info;
 ln->prox = l;
 return ln;
}

void lst_imprime_invertida_rec(Lista* l){
if(lst_vazia(l))
return;
else{
lst_imprime_invertida_rec(l->prox);
printf("info: %d\n",l->info);
 }
}

Lista* lst_remove_rec(Lista *l, int info){
if(!lst_vazia(l))
 if(l->info==info){
Lista* lAux = l;
 l = l->prox;
free(lAux);
 }
 else{
l->prox = lst_remove_rec(l->prox,info);
}
return l;
}


void lst_libera(Lista *l){
 Lista* lProx;
 while(l!=NULL){
 lProx = l->prox;
 free(l);
 l = lProx;
 }
}


int comprimento(Lista* l){
    int cont = 0;
    while(l != NULL){
             cont++;
             l = l->prox;
             }
             return cont;
    }

int menores(Lista* l, int n){
    int cont = 0;
    while(l != NULL){
             if(l->info < n) cont++;
             l = l->prox;
             
             }
             return cont;
    }
    
int soma(Lista* l){
    int s = 0;
    while(l != NULL){
            s += l->info;
            l = l->prox;
            }
            return s;
    }

int primos(Lista* l){
    int cont = 0;
    Lista* p;
    for (p = l; p != NULL; p = p->prox) {
        int x = p->info;
        if (x <= 1) continue;
        int eh_primo = 1;
        int i;
        for (i = 2; i*i <= x; i++) {
            if (x % i == 0) { eh_primo = 0; break; }
        }
        if (eh_primo) cont++;
    }
    return cont;
}
    
Lista* lst_conc(Lista* l1, Lista* l2) {
    if (l1 == NULL) {
        if (l2 == NULL) return NULL;
        Lista* ln = (Lista*)malloc(sizeof(Lista));
        ln->info = l2->info;
        ln->prox = lst_conc(NULL, l2->prox);
        return ln;
    }
    Lista* ln = (Lista*)malloc(sizeof(Lista));
    ln->info = l1->info;
    ln->prox = lst_conc(l1->prox, l2);
    return ln;
} 

Lista* lst_diferenca(Lista* l1, Lista* l2) {
    if (l1 == NULL) return NULL;
    
    if (pertence(l2, l1->info)) {
        return lst_diferenca(l1->prox, l2);
    } else {
        Lista* ln = (Lista*)malloc(sizeof(Lista));
        ln->info = l1->info;
        ln->prox = lst_diferenca(l1->prox, l2);
        return ln;
    }
} 
