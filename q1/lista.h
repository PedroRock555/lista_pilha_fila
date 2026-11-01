typedef struct lista {
    int info;
    struct lista* prox;
} Lista;
/*função que calcula o número de nós de uma lista*/
int comprimento(Lista* l);
/*função para retornar o número de nós da lista que possuem o campo info com valor
menor que n.*/
int menores(Lista* l, int n);
/*função para somar os valores do campo info de todos os nós.*/
int soma(Lista* l);
/*função para retornar o número de nós da lista que possuem o campo info com
número primo.*/
int primos(Lista* l);
/*função para criar uma lista que é a concatenação de uma lista l2 no final de uma lista
l1.*/
Lista* lst_conc(Lista* l1, Lista* l2);
/*função que faça a diferença de duas listas L1 e L2 (ou seja, que retire de L1 os
elementos que estão em L2).*/
Lista* lst_diferenca(Lista* l1, Lista* l2);
/*outras funções utilizadas*/
void lst_imprime(Lista *l);
Lista* lst_cria();
Lista* lst_insere(Lista *l, int info); 
void lst_imprime_invertida_rec(Lista* l);
Lista* lst_remove_rec(Lista* l, int v);
void lst_libera(Lista* l);
int lst_vazia(Lista* l);
int pertence(Lista* l, int v);
