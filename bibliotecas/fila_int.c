//
//  fila_int.c
//  TrabalhoFilas
//
//  Created by Marcos Vinícius Lima Raimundo on 10/06/19.
//  Copyright © 2019 Marcos Vinícius Lima Raimundo. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include "fila_int.h"

#define N 100

static int fila_int[N];
static int p, u;

void criar_fila_int(void){
	p = 0;
	u = 0;
}

int enfileirar_int(int y){
	if(!fila_int_cheia()){
		fila_int[u++] = y;
		return 1;
	}
	return 0;
}

int desenfileirar_int(void){
	if (fila_int_vazia())
	{
		fila_int[p++];
		return 1;	
	}
	
	return 0;
}

int fila_int_vazia(void){
	if (p == u) {
		criar_fila_int();
	}
	return p == u;
}

int fila_int_cheia(void){
	return u == N;
}

int tam_fila(void){
	return u-p;
}

void imprime_fila(int p){
	for (int i = p; i < u; i++)
	{
		printf("-----");
		
	}
	printf("\n");
	for (int i = p; i < u; i++)
	{
		printf("|  %d  ", fila_int[i]);	
	}
	printf("\n");
	for (int i = p; i < u; i++)
	{
		printf("-----");	
	}
}
