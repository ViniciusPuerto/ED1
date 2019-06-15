//
//  fila_encadeada.c
//  TrabalhoFilas
//
//  Created by Marcos Vinícius Lima Raimundo on 11/06/19.
//  Copyright © 2019 Marcos Vinícius Lima Raimundo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "fila_encadeada.h"

typedef struct elem{
	int dado;
	struct elem *prox;
}celula;

celula *fila;

int cria_fila(void){
	fila = malloc(sizeof(celula));
	if (fila == NULL) {
		return 0;
	}
	fila -> prox = fila;
	return 1;
}

int desenfileira(int *elem){
	celula *p;
	
	if (!fila_vazia()) {
		p = fila->prox;
		*elem = p->dado;
		fila->prox = p->prox;
		free(p);
		return 1;
	}
	return 0;
}

int enfileira(int elem){
	celula *nova;
	nova = malloc(sizeof(celula));
	if (nova == NULL) {
		return 0;
	}
	nova -> prox = fila->prox;
	fila->prox = nova;
	fila->dado = elem;
	fila = nova;
	return 1;
}

int fila_cheia(){
	return 0;
}

int fila_vazia(){
	if (fila->prox == fila)
	{
		return 1;
	}
	return 0;
}

int tamanho_fila(celula *p){
	celula *ptr;
	int count = 0;
	for (ptr = p; ptr != NULL ; ptr = ptr->prox)
	{
		count++;
	}
	return count;
}

void imprime_fila(celula *le){
        if (le == NULL) return;
        else{
			printf("-----\n");
            printf("|  %d  \n", le->dado);
			printf("-----");
            imprime_recursva(le->prox);
        } 

    }


