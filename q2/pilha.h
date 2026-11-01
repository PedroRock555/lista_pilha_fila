#define MAX 100
typedef struct pilha {
    int n;          
    int v[MAX];   
} Pilha;
/*função que receba uma pilha como argumento e retorne o valor armazenado em seu
topo*/
int topo(Pilha* p);
/*função que retorne o número de elementos da pilha que possuem o campo info com
valor ímpar. */
int impares(Pilha* p);
/*função que verifique quais são os elementos pares de uma pilha p1 e que os empilhe
em ordem crescente em uma pilha p2.*/
Pilha* empilha_pares(Pilha* p1, Pilha* p2);
/*outras funções*/
void pilha_push(Pilha *p, int info);
Pilha* pilha_cria(void);
int pilha_pop(Pilha *p);
void pilha_imprime(Pilha *p);
void pilha_libera(Pilha *p);
int pilha_vazia(Pilha *p);
