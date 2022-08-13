#define MAX 100

//typedef struct lista Lista;

struct lista *criaLista();
void liberaLista(struct lista *L);
int tamanhoLista(struct lista *L);
int lista_vazia(struct lista *L);
int listaCheia(struct lista *L);
int insereListaFinal(struct lista *L, int elem);
int insereListaInicio(struct lista *L, int elem);
int insereListaOrdenada(struct lista *L, int elem);
void SequentialList(struct lista *L);
int removeListaFinal(struct lista *L);
int removeListaInicio(struct lista *L);
int removeLista(struct lista *L, int mat);
void menu();
