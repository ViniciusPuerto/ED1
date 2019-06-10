#include "stdio.h"
#include "stdlib.h"

typedef struct elem{
    int dado;
    struct elem *prox;
} celula;

celula *fila;

int cria_fila(){
    fila = malloc(sizeof(celula));
    
}
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
