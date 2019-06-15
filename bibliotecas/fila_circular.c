//
//  fila_circular.c
//  TrabalhoFilas
//
//  Created by Marcos Vinícius Lima Raimundo on 10/06/19.
//  Copyright © 2019 Marcos Vinícius Lima Raimundo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "fila_circular.h"

static char *fila;
static int N, p, u;

int redimensiona() {
	int i, j;
	fila = realloc( fila, 2 * N * sizeof(char) );
	if ( fila == NULL ) return 0;
	/* Caso 2 */
	if ( u-1 < N-p ) {
		for ( i = N, j = 0; j < u; i++, j++ ) {
			fila[i] = fila[j];
		}
		u = N+u;
	}
	/* Caso 3 */
	else {
		for ( i = p, j = N+p; i < N; i++, j++ ) {
			fila[j] = fila[i];
		}
		p = N+p;
	}
	N *= 2;
	return 1;
}

void cria_fila(){
	N = 100;
	fila = malloc(N * sizeof(int));
	p = 0;
	u = 0;
}

int enfileira (char c){
	int ret = 1;
	if (u == N-1) {
		ret = redimenciona();
	}
	if (ret) {
		fila[u++] = c;
	}
	return ret;
}

int desenfileira(){
	if (fila_vazia()){
		return 0;
	}
	free(fila);
	return 1;
}

int fila_vazia(){
	if(p == u){
		return 1;
	}

	return 0;
}

int fila_cheia(){
	if(u = N -1){
		return 1;
	}
	return 0;
}


void imprime_fila(int p){
for (int i = p; i < u; i++)
{
	printf("-----");
	
}
printf("\n");
for (int i = p; i < u; i++)
{
	printf("|  %s  ", fila[i]);	
}
printf("\n");
for (int i = p; i < u; i++)
{
	printf("-----");	
	}

}


