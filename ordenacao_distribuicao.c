#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ordenacao_distribuicao(char valores[][10], int n, int d){
    char **aux;
    int vaux;
    aux  = malloc(n*sizeof(char));

    for (int i = 0; i < n; i++)
    {
        aux[i] = malloc(10*sizeof(char));
    }

    for (int i = d-1; i >= 0; i--) // I-ésimo digito
    {   
        int l = 0;
        vaux *= -1;
       for (int j = 0; j < 10; j++) // Digito que procuramos no vetor na I-ésima posição
       {
          for (int k = 0; k < n; k++) // K-ésimo elemento do vetor
          {     
              if (vaux == 1){
                if (valores[k][i]-'0' == j){
                    strcpy(aux[l++], valores[k]);
                }
              }
              else{
                  if (valores[k][i]-'0' == j){
                    strcpy(valores[l++], aux[k]);
                }
              }
          }
       }
    }

    if (vaux == 1)
    {
        for (int i = 0; i < n; i++)
        {
            strcpy(valores[i], aux[i]);
        } 
    }
    
    
    
}