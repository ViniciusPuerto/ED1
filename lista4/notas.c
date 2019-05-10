#include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

void moda(float v[], int tam)
{

    int cont[tam];
    float conta, moda;

    for (int i = 0; i < tam; i++)
    {
        for (int j = i + 1; j < tam; j++)
        {

            if (v[i] == v[j])
            {
                cont[i]++;
                if (cont[i] > conta)
                {
                    conta = cont[i];
                    moda = v[i];
                }
            }
        }
        cont[i] = 0;
    }
    if (conta == 0)
    {
        //printf("Nao existe moda\n");
    }
    else
    {
        printf("%.0f\n", moda);
    }
}

int main()
{

    int a;
    float arr[200];
    int tam = 0;
    scanf("%d", &tam);

    for (int i = 0; i < tam; ++i)
    {
        scanf("%f", &arr[i]);
    }
    
    for (int i = 0; i < tam; ++i)
    {
        for (int j = i + 1; j < tam; ++j)
        {
            if (arr[i] < arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    
    moda(arr, tam);
    
    return 0;
}