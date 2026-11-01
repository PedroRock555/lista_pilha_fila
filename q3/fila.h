typedef struct lista Lista;
typedef struct fila Fila;
struct lista{
 int info;
 Lista *prox;
};
struct fila{
 Lista *ini;
 Lista *fim;
}; 
/* função para retornar o número de elementos da fila com valor maior que n.*/
int qtd_maior(Fila* f, int n);
/*função que crie uma fila com os elementos da fila f na ordem inversa*/
Fila* inverte(Fila* f);
/*função para retornar o número de elementos da fila que possuem o campo info com
valor par*/
int pares(Fila* f);
/*outras funções utilizadas*/
Fila* fila_cria(void);
void fila_insere(Fila *f, int info);
int fila_remove(Fila *f);
void fila_imprime(Fila *f);
void fila_libera(Fila *f);
int fila_vazia(Fila *f);
