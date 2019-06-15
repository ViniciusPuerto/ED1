#include "stdio.h"
#include "stdlib.h"

struct no
{
    int dado;
    struct no *prox;
};

typedef struct no celula;

void imprime(celula *le){
    celula *ptr;
    for (ptr = le; ptr != NULL ; ptr = ptr->prox)
    {
        printf("%d\n", ptr->dado);
    }
};

    void imprime_recursva(celula *le){
        if (le == NULL) return;
        else{
            printf("%d\n", le->dado);
            imprime_recursva(le->prox);
        } 

    }

    void imprime_ao_contrario(celula *le){
        if (le != NULL) {
            imprime_ao_contrario(le->prox);
            printf("%d\n", le->dado);

        }
    }

    celula *busca(int x, celula *p){
        celula *ptr;
        for (ptr = p; ptr != NULL ; ptr = ptr->prox){
        if (ptr->dado == x) return ptr;   
        }
        return NULL;
    }

    celula *busca_alternativa(int x, celula *p){
        celula *ptr;
        for (ptr = p ; ptr!=NULL && ptr->dado != x; ptr = ptr->prox);
        return ptr;
    }

    celula *busca_recursiva(int x, celula *p){
        if (p == NULL) return NULL;
        else {
            if (p->dado == x) return p;
            else return busca_recursiva(x, p->prox);
        }
        
    }

    int insere(int x, celula *p){
        celula *novo;
       novo = mallocc(sizeof(celula));
       if (novo  == NULL) {
           return 0;
       }
       novo->dado = x;
       novo->prox = p->prox;
       p->prox = novo;
       return 1;
    }

    void insere_failure(int x, celula *p){
        celula nova;
        nova.dado = x;
        nova.prox = p->prox;
        p->prox = &nova;
        /////// NÃO FUNCIONA ///////
    }

    int _remove(celula *p) {
        celula *lixo = p->prox;
        if (lixo != NULL) {
            p->prox = lixo->prox;
            free(lixo);
            return 1;
        }
        return 0;
    }

    int insert_on_position(int x, celula *le, int pos){
        celula *p = le;

        for (int i = 0; (i < pos) && (p != NULL); i++)
        {
            p = p->prox;

        if ( p != NULL)
            {
                return insere(x, p);
            }
            else return 0;   
        }
    }

        int busca_e_insere(celula *le , int x, int y) {
        celula *p = busca(y, le);
        if (p != NULL){
            return insere(x, p);
        }
        else return 0;
    }

    int main(int argc, char const *argv[])
    {
        celula *ptr;
        return 0;
    }