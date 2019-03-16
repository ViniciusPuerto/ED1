#include <stdio.h>

int main(){
	int cod, qtd;
	float valor, soma1, soma2, soma;
	
	scanf("%d %d %f", &cod, &qtd, &valor);
	soma1 = qtd * valor;
	scanf("%d %d %f", &cod, &qtd, &valor);
	soma2 = qtd * valor;
	
	soma = soma1 + soma2;
	
	printf("VALOR A PAGAR: R$ %.2f\n", soma);
	
	return 0;
}
