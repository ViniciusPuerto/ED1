#include <stdio.h>
#include <stdlib.h>

int* fila(int *N, int *M){
    
    int *initial_row = malloc(*N*sizeof(int));
    int *aux_row = malloc(*M*sizeof(int));
    int *final_row = malloc((N-M)*sizeof(int));

    scanf("%i", &N);

    for ( int i = 0; i < N; i++ ) {
      scanf( initial_row + i );
   }

   scanf("%i", &M);

    for ( int i = 0; i < M; i++ ) {
      scanf( aux_row + i );
    }
    

    for (int j = 0; j < M; j++){
       int aux_element =  aux_row + j;
       for ( int i = 0; i < N; i++ ) {
           if (aux_element == (initial_row + i)) {
              *(final_row + i ) = (initial_row + i + 1) ;
           }
        }
    }

    return *final_row; 
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
