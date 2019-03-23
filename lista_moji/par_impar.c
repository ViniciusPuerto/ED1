#include <stdio.h>

int main()
{
    int num_in, Ri, alice, beto;
    num_in =1;
    do
    {
        alice = 0;
        beto = 0;

        scanf("%d", &num_in);

        if (num_in == 0) {
            break ;
        }
        

        for (int i = 0; i < num_in; i++)
        {
            scanf("%d", &Ri);

            if (Ri == 0)
            {
                alice++;
            }
            else
            {
                beto++;
            }
        }

        printf("Alice ganhou %d e Beto ganhou %d\n", alice, beto);
    }while((num_in != 0));
    return 0;
}