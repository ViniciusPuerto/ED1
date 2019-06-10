#include "pilha.h"
#define N 1000

static int topo;
static char pilha[];

void cria_pilha(){
   topo = 0;
}

int pilha_cheia(){
    return topo == N;
}

int empilha(char y){
    if (!pilha_cheia())
    {
        pilha[topo++]=y;
        return 1;
    }
    return 0;
}

int pilha_vazia(){
    return topo == 0;
}

int desempilha(char *y){
    if (!pilha_vazia())
    {
        *y = pilha[--topo];
        return 1;
    }
    return 0;   
}

int tam_pilha(){
    return topo;
}