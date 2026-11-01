#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void pilha_push(Pilha *p, int info){
 if(p->n==MAX){
 printf("Capacidade da Pilha Estourou!!!\n");
 exit(1);
 }
 p->v[p->n]= info;
 p->n = p->n + 1;
}

Pilha* pilha_cria(void){
 Pilha *p = (Pilha*)malloc(sizeof(Pilha));
 if(p==NULL){
 printf("Memoria insuficiente!!!\n");
 exit(1);
 }
 p->n = 0;
 return p;
}

int pilha_pop(Pilha *p){
 int a;
 if(pilha_vazia(p)){
 printf("Pilha Vazia!!!\n");
 exit(1);
 }
 a = p->v[p->n-1];
 p->n--;
 return a;
}

void pilha_imprime(Pilha *p){
 int i;
 for(i = p->n-1; i>=0;i--){
 printf("%d\n",p->v[i]);
 }
}

void pilha_libera(Pilha *p){
 free(p);
}

int pilha_vazia(Pilha *p){
 return p->n==0;
}

int topo(Pilha* p){
    if(p->n == 0){
        printf("Pilha vazia!\n");
        exit(1);
    }
    return p->v[p->n - 1];
}

int impares(Pilha* p){
    int cont = 0;
    int i;
    for(i = 0; i < p->n; i++){
        if(p->v[i] % 2 != 0){
            cont++;
        }
    }
    return cont;
}
    
Pilha* empilha_pares(Pilha* p1, Pilha* p2){
    int aux[MAX];
    int k = 0;
    int i, j, temp;
    for(i = 0; i < p1->n; i++){
        if(p1->v[i] % 2 == 0){
            aux[k++] = p1->v[i];
        }
    }
    for(i = 0; i < k-1; i++){
        for(j = 0; j < k-1-i; j++){
            if(aux[j] > aux[j+1]){
                int temp = aux[j];
                aux[j] = aux[j+1];
                aux[j+1] = temp;
            } 
                  }
    }

    for(i = 0; i < k; i++){
        pilha_push(p2, aux[i]);
    }

    return p2;
}
