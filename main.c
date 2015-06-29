#include <stdio.h>
#include "funcao.c"


int main(int argc, char const *argv[])
{
    int caminhoPercorrido[andarFinal];

    Lista novaLista;
    novaLista.andar = 3;
    novaLista.qtdeBotoesChegar = 3;

    inserirLista(&novaLista);

    novaLista.andar = 3;
    novaLista.qtdeBotoesChegar = 3;

    inserirLista(&novaLista);
    imprimirLista();

    return 0;
}
