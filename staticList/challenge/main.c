#include <stdio.h>
#include <stdlib.h>
#include "ListaSequecial.h"

int main()
{
    struct lista *L;
    L = criaLista();
    int opcao,elem;
    while(opcao != 0){
        menu();
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                printf("Digite o elemento que deseja inserir no final da lista\n");
                scanf("%d",&elem);
                insereListaFinal(L,elem);
                system("cls");
                break;
            case 2:
                printf("Digite o elemento que deseja inserir no inicio da lista\n");
                scanf("%d",&elem);
                insereListaInicio(L,elem);
                system("cls");
                break;
            case 3:
                printf("Digite o elemento que deseja inserir em uma lista ordenada\n");
                scanf("%d",&elem);
                insereListaOrdenada(L,elem);
                system("cls");
                break;
            case 4:
                removeListaFinal(L);
                printf("\nO ultimo elemento foi removido");
                system("cls");
                break;
            case 5:
                removeListaInicio(L);
                printf("\nO primeiro elemento foi removido");
                system("cls");
                break;
            case 6:
                printf("Digite o elemento que deseja remover da lista\n");
                scanf("%d",&elem);
                removeLista(L,elem);
                system("cls");
                break;
            case 7:
                printf("A lista eh:\n");
                SequentialList(L);
                system("\n");
                system("pause");
                system("cls");
                break;
            case 0:
                system("cls");
                exit(0);

        }
    }

    return 0;
}
