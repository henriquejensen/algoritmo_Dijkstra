#include <stdio.h>
#include <stdlib.h>

#define andarFinal 20

typedef struct Lista
{
    /*definicao da estrutura da lista com as variaveis
    andar (andar armazenado na estrutura)
    qtdeBotoesChegar (quantidade de botoes necessarios a partir do
    andar principal para chegar neste andar)
    e os andares que se pode chegar a partir deste andar*/
    int andar;
    int qtdeBotoesChegar;
    struct Lista *pProximo;
}Lista;

struct Lista *lista = NULL;

void inserirLista(Lista *pLista)
{
    if(lista == NULL)
    {
        lista = pLista;
    }
    else
    {
        Lista *pUltimo = lista;

        while(pUltimo->pProximo != NULL)
        {
            pUltimo = pUltimo->pProximo;
        }

        pUltimo = pLista;
    }
    pLista->pProximo =NULL;
}

void imprimirLista()
{
    Lista *pUltimo = lista;

    while(pUltimo != NULL)
    {
        printf("%d\n", pUltimo->andar);
        printf("%d\n", pUltimo->qtdeBotoesChegar);

        pUltimo = pUltimo->pProximo;
    }
}
