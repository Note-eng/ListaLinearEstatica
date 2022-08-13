#include <stdio.h>
#include <stdlib.h>
#include "ListaSequecial.h"

struct lista{
    int qtd;
    int no[MAX];
};
struct lista *criaLista(){ //Fun��o retorna um ponteiro do tipo struct lista
    struct lista *L;   //Cria um ponteiro qualquer
    L = (struct lista*) malloc(sizeof(struct lista)); //Aloca um espa�o na memoria para esse ponteiro correspondente a struct lista
    if(L != NULL)
        L->qtd = 0;    //(*li).qtd = 0;
    return L; //retorna o ponteiro
}

void liberaLista(struct lista *L){
    free(L);
}

int tamanhoLista(struct lista *L){
    if(L == NULL)
        return 0;
    else
        return L->qtd;
}

int listaVazia(struct lista *L){
    if(L->qtd == 0)
        return 1;
    if(L == NULL || L->qtd != 0)
        return 0;

}

int listaCheia(struct lista *L){
    if(L->qtd == MAX)
        return 1;
    if(L == NULL || L->qtd != MAX)
        return 0;
}

int insereListaFinal(struct lista *L, int elem){
    if(L == NULL || listaCheia(L) == 1)
        return 0;
    L->no[L->qtd] = elem;
    L->qtd++;
    return 1;
}

int insereListaInicio(struct lista *L, int elem){
    if(L == NULL || listaCheia(L) == 1)
        return 0;
    int i;
    for(i = L->qtd-1; i>=0; i--){
        L->no[i+1] = L->no[i];
    }
    L->no[0] = elem;;
    L->qtd++;
    return 1;
}

int insereListaOrdenada(struct lista *L, int elem){
    if(L == NULL || listaCheia(L) == 1)
        return 0;
    int k,i=0;
    while(i<L->qtd && L->no[i] < elem)
        i++;
    for(k=L->qtd-1; k>=i; k--)
        L->no[k+1] = L->no[k];
    L->no[i] = elem;
    L->qtd++;
    return 1;
}

int removeLista(struct lista *L, int elem){
    if(L == NULL || listaVazia(L) == 1)
        return 0;
    int i=0,k;
    while(i<L->qtd && L->no[i] != elem)
        i++;
    if(i == L->qtd)
        return 0;
    for(k=i; k<L->qtd; k++){
        L->no[k] = L->no[k+1];
    }
    L->qtd--;
    return 1;

}

int removeListaFinal(struct lista *L){
    if(L == NULL || listaVazia(L) == 1)
        return 0;
    L->qtd--;
    return 1;
}

int removeListaInicio(struct lista *L){
    if(L == NULL || listaVazia(L) == 1)
        return 0;
    int i;
    for(i=0; i<=L->qtd-1; i++)
        L->no[i] = L->no[i+1];
    L->qtd--;
    return 1;
}

void SequentialList(struct lista *L){
    if(L == NULL)
        return;
    int i;
    for(i=0; i< L->qtd; i++)
        printf(" %d ",L->no[i]);
}


void menu(){
    printf("\nEntre com a opção desejada\n");
    printf("|----------------------------|\n");
    printf("Digite 1 para inserir um elemento no final da lista\n");
    printf("Digite 2 para inserir um elemento no inicio da lista\n");
    printf("Digite 3 para inserir um elemento em uma lista ordenada\n");
    printf("Digite 4 para remover o ultimo elemento\n");
    printf("Digite 5 para remover o primeiro elemento\n");
    printf("Digite 6 para remover o elemento que desejar\n");
    printf("Digite 7 para imprimir a lista\n");
    printf("Digite 0 para encerrar o programa\n");
    printf("|----------------------------|\n");
}
